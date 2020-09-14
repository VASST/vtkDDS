

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from image_16bps.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef image_16bps_877472984_hpp
#define image_16bps_877472984_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
// On Windows, dll-export template instantiations of standard types used by
// other dll-exported types
template class NDDSUSERDllExport std::allocator< uint16_t >;
template class NDDSUSERDllExport std::vector< uint16_t >;
#endif
class NDDSUSERDllExport VtkImage16bit {
  public:
    VtkImage16bit();

    VtkImage16bit(
        uint32_t Width,
        uint32_t Height,
        uint32_t ScalarComponents,
        const std::vector< uint16_t >& ImageBytes);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    VtkImage16bit (VtkImage16bit&&) = default;
    VtkImage16bit& operator=(VtkImage16bit&&) = default;
    VtkImage16bit& operator=(const VtkImage16bit&) = default;
    VtkImage16bit(const VtkImage16bit&) = default;
    #else
    VtkImage16bit(VtkImage16bit&& other_) OMG_NOEXCEPT;  
    VtkImage16bit& operator=(VtkImage16bit&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    uint32_t& Width() OMG_NOEXCEPT {
        return m_Width_;
    }

    const uint32_t& Width() const OMG_NOEXCEPT {
        return m_Width_;
    }

    void Width(uint32_t value) {
        m_Width_ = value;
    }

    uint32_t& Height() OMG_NOEXCEPT {
        return m_Height_;
    }

    const uint32_t& Height() const OMG_NOEXCEPT {
        return m_Height_;
    }

    void Height(uint32_t value) {
        m_Height_ = value;
    }

    uint32_t& ScalarComponents() OMG_NOEXCEPT {
        return m_ScalarComponents_;
    }

    const uint32_t& ScalarComponents() const OMG_NOEXCEPT {
        return m_ScalarComponents_;
    }

    void ScalarComponents(uint32_t value) {
        m_ScalarComponents_ = value;
    }

    std::vector< uint16_t >& ImageBytes() OMG_NOEXCEPT {
        return m_ImageBytes_;
    }

    const std::vector< uint16_t >& ImageBytes() const OMG_NOEXCEPT {
        return m_ImageBytes_;
    }

    void ImageBytes(const std::vector< uint16_t >& value) {
        m_ImageBytes_ = value;
    }

    bool operator == (const VtkImage16bit& other_) const;
    bool operator != (const VtkImage16bit& other_) const;

    void swap(VtkImage16bit& other_) OMG_NOEXCEPT ;

  private:

    uint32_t m_Width_;
    uint32_t m_Height_;
    uint32_t m_ScalarComponents_;
    std::vector< uint16_t > m_ImageBytes_;

};

inline void swap(VtkImage16bit& a, VtkImage16bit& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const VtkImage16bit& sample);

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< VtkImage16bit > {
            NDDSUSERDllExport static std::string value() {
                return "VtkImage16bit";
            }
        };

        template<>
        struct is_topic_type< VtkImage16bit > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< VtkImage16bit > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const VtkImage16bit& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(VtkImage16bit& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(VtkImage16bit& sample);

            NDDSUSERDllExport 
            static void allocate_sample(VtkImage16bit& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {
        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< VtkImage16bit > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< VtkImage16bit > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // image_16bps_877472984_hpp

