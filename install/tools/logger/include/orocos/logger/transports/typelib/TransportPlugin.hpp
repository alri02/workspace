/* Generated from orogen/lib/orogen/templates/typekit/typelib/TransportPlugin.hpp */

#ifndef __OROGEN_GENERATED_LOGGER_TYPELIB_PLUGIN_HPP
#define __OROGEN_GENERATED_LOGGER_TYPELIB_PLUGIN_HPP

#include <rtt/typelib/TypelibTransportPlugin.hpp>

namespace Typelib
{
    // Forward declaration for the plugin
    class Registry;
}

namespace orogen_typekits {
    class loggerTypelibTransportPlugin
        : public orogen_transports::TypelibTransportPlugin
    {
    public:
        loggerTypelibTransportPlugin();
        virtual bool registerTransport(std::string type_name, RTT::types::TypeInfo* ti);

        /** Called by orogen_transports::TypelibTransportPlugin to get the path
         * to the registry. It has to have a different name than the static
         * method below
         */
        virtual std::string getTlbPath() const;

        /** Returns the path to the .tlb file for this typekit */
        static std::string getTypelibRegistryPath();
    };

    extern loggerTypelibTransportPlugin loggerTypelibTransport;
}

#endif

