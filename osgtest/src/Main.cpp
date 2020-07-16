#include <iostream>
#include <string> 
#include <sstream>
#include <osgText/Text3D>
#include <osgText/Text>
#include <osg/Drawable>
#include <osgText/Font3D>
#include <osgText/Font>
#include <osg/Geometry>
#include <osgViewer/Viewer>
#include<osg/Group>
#include<osg/MatrixTransform>
using namespace osg;
using namespace osgText;

/*osgText::Text3D* createText3D( const Vec3& pos,const std::string& content,
 float size, float depth )
 
   {
      osg::ref_ptr<osgText::Text3D> text = new osgText::Text3D;
      osg::ref_ptr<Font3D> g_font3D =readFontFile("arial.ttf");
      if(!g_font3D)
      {
         throw std::runtime_error("No font found");

      }
      text->setFont( g_font3D.get() );
      text->setCharacterSize(size);
      text->setCharacterDepth(depth);
      text->setAxisAlignment( osgText::Text3D::XZ_PLANE);
      text->setPosition(pos);
      text->setText(content);
      //text->setDrawMode(osgText::Text3D::TEXT);
      text->setDrawMode(osgText::Text3D::TEXT | osgText::Text3D::BOUNDINGBOX);
      osg::Vec4 color(1.0f, 1.0f, 1.0f, 1.0f);
      text->setColor(color);
      return text.release();
   }*/

int main(int argc, char** argv)
{
 Text3D* text3D = new Text3D;
       //text3D->setCharacterSize(0.4f);
       text3D->setFont("arial.ttf");
      // text3D->setColor(Vec4(0.9f, 0.1f, 0.1f, 1.0f));
       text3D->setText("Sphere");
       //text3D->setAxisAlignment(Text3D::SCREEN ); 
       //text3D->setAlignment(Text3D::CENTER_TOP ); 
       text3D->setPosition(Vec3d(0.4,0.0,0.02));
       
       Geode *geode = new Geode;
       geode->addDrawable(text3D);
       Group *scene= new Group(); 	
       scene->addChild(geode);
       osgViewer::Viewer viewer;
       viewer.setSceneData(scene);
        return viewer.run();
    /* ref_ptr<Geode> textGeode = new Geode;
      textGeode->addDrawable(createText3D(osg::Vec3(0.0, 0.0, 0.6),"Sphere",10.0f,10.0f) );
      ref_ptr<Group> root = new Group();
        root->addChild( textGeode.get());
        osgViewer::Viewer viewer;
        viewer.setUpViewInWindow(99,99,666,666, 0);
        viewer.setSceneData( root.get() );
        return viewer.run();*/

   return 0;
}
  
