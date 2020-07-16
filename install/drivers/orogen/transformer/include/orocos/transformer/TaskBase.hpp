/* Generated from orogen/lib/orogen/templates/tasks/TaskBase.hpp */

#ifndef TRANSFORMER_TASK_TASK_BASE_HPP
#define TRANSFORMER_TASK_TASK_BASE_HPP

#include <string>
#include <boost/cstdint.hpp>
#include <rtt/TaskContext.hpp>

#include <rtt/Operation.hpp>
#include <rtt/Port.hpp>
#include <transformer/TaskStates.hpp>


#include <orogen_metadata/Metadata.hpp>
extern template class RTT::Attribute< ::metadata::TaskContext >;

#include <transformer/BroadcastTypes.hpp>
extern template class RTT::OutputPort< ::transformer::ConfigurationState >;
extern template class RTT::base::ChannelElement< ::transformer::ConfigurationState >;
#include <boost/cstdint.hpp>
extern template class RTT::OutputPort< boost::int32_t >;
extern template class RTT::base::ChannelElement< boost::int32_t >;



#include <boost/cstdint.hpp>
#include <boost/cstdint.hpp>
#include <string>
#include <transformer/BroadcastTypes.hpp>





namespace transformer{
    class Task;
    /** The oroGen-generated part of transformer::Task
     *
     * It is used by oroGen and its plugins to define the task interfaces and set
     * up the component. Never edit yourself, as its content would be
     * overwritten at the next code generation.
     */
    class TaskBase : public ::RTT::TaskContext
        
    {
    protected:
        // Common implementation of interface setup for both task constructors
        void setupComponentInterface();

        /* base implementation of the __orogen_getTID operation
         */
        virtual boost::int32_t __orogen_getTID();
        /* base implementation of the getModelName operation
         */
        virtual ::std::string getModelName();
        /* If the compiler issues an error at this point, it is probably that
         * you forgot to add the corresponding method to the transformer::Task class.
         */
        virtual void setConfiguration(::transformer::ConfigurationState const & configuration) = 0;
        RTT::Attribute< ::metadata::TaskContext > _metadata;
        RTT::Operation< boost::int32_t() > ___orogen_getTID;
        RTT::Operation< ::std::string() > _getModelName;
        RTT::Operation< void(::transformer::ConfigurationState const &) > _setConfiguration;
        RTT::OutputPort< ::transformer::ConfigurationState > _configuration_state;
        RTT::OutputPort< boost::int32_t > _state;

    public:
        
        enum States
        {
            
                INIT = Task_INIT,
            
                PRE_OPERATIONAL = Task_PRE_OPERATIONAL,
            
                FATAL_ERROR = Task_FATAL_ERROR,
            
                EXCEPTION = Task_EXCEPTION,
            
                STOPPED = Task_STOPPED,
            
                RUNNING = Task_RUNNING,
            
                RUNTIME_ERROR = Task_RUNTIME_ERROR
            
        };
        

	TaskBase(std::string const& name, TaskCore::TaskState initial_state);
	TaskBase(std::string const& name, RTT::ExecutionEngine* engine, TaskCore::TaskState initial_state);
        ~TaskBase();

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

