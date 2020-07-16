/* Generated from orogen/lib/orogen/templates/tasks/TaskBase.hpp */

#ifndef LOGGER_LOGGER_TASK_BASE_HPP
#define LOGGER_LOGGER_TASK_BASE_HPP

#include <string>
#include <boost/cstdint.hpp>
#include <rtt/TaskContext.hpp>

#include <rtt/Operation.hpp>
#include <rtt/Port.hpp>
#include <logger/TaskStates.hpp>

#include <boost/cstdint.hpp>
#include <string>
extern template class RTT::Property< ::std::string >;
#include <boost/cstdint.hpp>
extern template class RTT::Property< bool >;

#include <orogen_metadata/Metadata.hpp>
extern template class RTT::Attribute< ::metadata::TaskContext >;

#include <boost/cstdint.hpp>
extern template class RTT::OutputPort< boost::int32_t >;
extern template class RTT::base::ChannelElement< boost::int32_t >;



#include <boost/cstdint.hpp>
#include <boost/cstdint.hpp>
#include <boost/cstdint.hpp>
#include <string>
#include <boost/cstdint.hpp>
#include <string>
#include <logger/LoggerTypes.hpp>
#include <vector>
#include <boost/cstdint.hpp>
#include <string>
#include <boost/cstdint.hpp>
#include <boost/cstdint.hpp>
#include <string>
#include <boost/cstdint.hpp>
#include <boost/cstdint.hpp>
#include <string>
#include <boost/cstdint.hpp>
#include <boost/cstdint.hpp>
#include <string>
#include <boost/cstdint.hpp>
#include <string>
#include <boost/cstdint.hpp>
#include <boost/cstdint.hpp>
#include <string>
#include <boost/cstdint.hpp>
#include <boost/cstdint.hpp>
#include <string>
#include <boost/cstdint.hpp>
#include <string>





namespace logger{
    class Logger;
    /** The oroGen-generated part of logger::Logger
     *
     * It is used by oroGen and its plugins to define the task interfaces and set
     * up the component. Never edit yourself, as its content would be
     * overwritten at the next code generation.
     */
    class LoggerBase : public ::RTT::TaskContext
        
    {
    protected:
        // Common implementation of interface setup for both task constructors
        void setupComponentInterface();

        /* base implementation of the __orogen_getTID operation
         */
        virtual boost::int32_t __orogen_getTID();
        /* If the compiler issues an error at this point, it is probably that
         * you forgot to add the corresponding method to the logger::Logger class.
         */
        virtual void clear() = 0;
        /* If the compiler issues an error at this point, it is probably that
         * you forgot to add the corresponding method to the logger::Logger class.
         */
        virtual bool createLoggingPort(::std::string const & port_name, ::std::string const & type_name, ::std::vector< ::logger::StreamMetadata > const & metadata) = 0;
        /* base implementation of the getModelName operation
         */
        virtual ::std::string getModelName();
        /* If the compiler issues an error at this point, it is probably that
         * you forgot to add the corresponding method to the logger::Logger class.
         */
        virtual bool removeLoggingPort(::std::string const & port_name) = 0;
        /* If the compiler issues an error at this point, it is probably that
         * you forgot to add the corresponding method to the logger::Logger class.
         */
        virtual bool reportComponent(::std::string const & name) = 0;
        /* If the compiler issues an error at this point, it is probably that
         * you forgot to add the corresponding method to the logger::Logger class.
         */
        virtual bool reportPort(::std::string const & component, ::std::string const & port) = 0;
        /* If the compiler issues an error at this point, it is probably that
         * you forgot to add the corresponding method to the logger::Logger class.
         */
        virtual bool unreportComponent(::std::string const & name) = 0;
        /* If the compiler issues an error at this point, it is probably that
         * you forgot to add the corresponding method to the logger::Logger class.
         */
        virtual bool unreportPort(::std::string const & component, ::std::string const & port) = 0;
        RTT::Attribute< ::metadata::TaskContext > _metadata;
        RTT::Operation< boost::int32_t() > ___orogen_getTID;
        RTT::Operation< void() > _clear;
        RTT::Operation< bool(::std::string const &, ::std::string const &, ::std::vector< ::logger::StreamMetadata > const &) > _createLoggingPort;
        RTT::Operation< ::std::string() > _getModelName;
        RTT::Operation< bool(::std::string const &) > _removeLoggingPort;
        RTT::Operation< bool(::std::string const &) > _reportComponent;
        RTT::Operation< bool(::std::string const &, ::std::string const &) > _reportPort;
        RTT::Operation< bool(::std::string const &) > _unreportComponent;
        RTT::Operation< bool(::std::string const &, ::std::string const &) > _unreportPort;
        RTT::OutputPort< boost::int32_t > _state;
        RTT::Property< ::std::string > _file;
        RTT::Property< bool > _overwrite_existing_files;

    public:
        
        enum States
        {
            
                INIT = Logger_INIT,
            
                PRE_OPERATIONAL = Logger_PRE_OPERATIONAL,
            
                FATAL_ERROR = Logger_FATAL_ERROR,
            
                EXCEPTION = Logger_EXCEPTION,
            
                STOPPED = Logger_STOPPED,
            
                RUNNING = Logger_RUNNING,
            
                RUNTIME_ERROR = Logger_RUNTIME_ERROR
            
        };
        

	LoggerBase(std::string const& name, TaskCore::TaskState initial_state);
	LoggerBase(std::string const& name, RTT::ExecutionEngine* engine, TaskCore::TaskState initial_state);
        ~LoggerBase();

        bool start();

        
        // Reimplement TaskCore base methods to export the states to the outside
        // world
        bool configure();
        bool recover();
        bool stop();
        bool cleanup();
        void error();
        void fatal();
        void exception();
        

        
        void report(States state);
        void state(States state);
        void error(States state);
        void fatal(States state);
        void exception(States state);
        States state() const;
        

    };

}


#endif

