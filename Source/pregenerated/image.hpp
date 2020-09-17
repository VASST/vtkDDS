

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from image.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef image_879297079_hpp
#define image_879297079_hpp

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

typedef uint32_t Dimension_t;
struct Dimension_t_AliasTag_t {};

typedef uint8_t Components_t;
struct Components_t_AliasTag_t {};

typedef ::rti::core::uint64 Timestamp_t;
struct Timestamp_t_AliasTag_t {};

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
// On Windows, dll-export template instantiations of standard types used by
// other dll-exported types
template class NDDSUSERDllExport std::allocator< uint8_t >;
template class NDDSUSERDllExport std::vector< uint8_t >;
#endif
class NDDSUSERDllExport VtkImage {
  public:
    VtkImage();

    VtkImage(
        ::rti::core::uint64 Timestamp,
        uint32_t Width,
        uint32_t Height,
        uint32_t Depth,
        uint8_t Components,
        const std::vector< uint8_t >& Data);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    VtkImage (VtkImage&&) = default;
    VtkImage& operator=(VtkImage&&) = default;
    VtkImage& operator=(const VtkImage&) = default;
    VtkImage(const VtkImage&) = default;
    #else
    VtkImage(VtkImage&& other_) OMG_NOEXCEPT;  
    VtkImage& operator=(VtkImage&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    ::rti::core::uint64& Timestamp() OMG_NOEXCEPT {
        return m_Timestamp_;
    }

    const ::rti::core::uint64& Timestamp() const OMG_NOEXCEPT {
        return m_Timestamp_;
    }

    void Timestamp(::rti::core::uint64 value) {
        m_Timestamp_ = value;
    }

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

    uint32_t& Depth() OMG_NOEXCEPT {
        return m_Depth_;
    }

    const uint32_t& Depth() const OMG_NOEXCEPT {
        return m_Depth_;
    }

    void Depth(uint32_t value) {
        m_Depth_ = value;
    }

    uint8_t& Components() OMG_NOEXCEPT {
        return m_Components_;
    }

    const uint8_t& Components() const OMG_NOEXCEPT {
        return m_Components_;
    }

    void Components(uint8_t value) {
        m_Components_ = value;
    }

    std::vector< uint8_t >& Data() OMG_NOEXCEPT {
        return m_Data_;
    }

    const std::vector< uint8_t >& Data() const OMG_NOEXCEPT {
        return m_Data_;
    }

    void Data(const std::vector< uint8_t >& value) {
        m_Data_ = value;
    }

    bool operator == (const VtkImage& other_) const;
    bool operator != (const VtkImage& other_) const;

    void swap(VtkImage& other_) OMG_NOEXCEPT ;

  private:

    ::rti::core::uint64 m_Timestamp_;
    uint32_t m_Width_;
    uint32_t m_Height_;
    uint32_t m_Depth_;
    uint8_t m_Components_;
    std::vector< uint8_t > m_Data_;

};

inline void swap(VtkImage& a, VtkImage& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const VtkImage& sample);

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< VtkImage > {
            NDDSUSERDllExport static std::string value() {
                return "VtkImage";
            }
        };

        template<>
        struct is_topic_type< VtkImage > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< VtkImage > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const VtkImage& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(VtkImage& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(VtkImage& sample);

            NDDSUSERDllExport 
            static void allocate_sample(VtkImage& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {
        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Dimension_t_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Components_t_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< Timestamp_t_AliasTag_t > {
            typedef ::dds::core::xtypes::AliasType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::AliasType& get();
        };
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< VtkImage > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< VtkImage > {
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

#endif // image_879297079_hpp

