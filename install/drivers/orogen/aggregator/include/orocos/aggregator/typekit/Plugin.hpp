/* Generated from orogen/lib/orogen/templates/typekit/Plugin.hpp */

#ifndef __OROGEN_GENERATED_AGGREGATOR_TYPEKIT_HPP
#define __OROGEN_GENERATED_AGGREGATOR_TYPEKIT_HPP

#include <rtt/types/TypekitPlugin.hpp>

namespace Typelib {
    class Registry;
}

namespace orogen_typekits {
    class aggregatorTypekitPlugin
        : public RTT::types::TypekitPlugin
    {
        Typelib::Registry* m_registry;

    public:
        aggregatorTypekitPlugin();
        ~aggregatorTypekitPlugin();
        bool loadTypes();
        bool loadOperators();
        bool loadConstructors();
        std::string getName();
    };

    extern aggregatorTypekitPlugin aggregatorTypekit;
}

#endif


