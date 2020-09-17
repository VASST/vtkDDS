

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from image.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "image.hpp"
#include "imagePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- VtkImage: 

VtkImage::VtkImage() :
    m_Timestamp_ (0ull) ,
    m_Width_ (0u) ,
    m_Height_ (0u) ,
    m_Depth_ (1) ,
    m_Components_ (0)  {
}   

VtkImage::VtkImage (
    ::rti::core::uint64 Timestamp,
    uint32_t Width,
    uint32_t Height,
    uint32_t Depth,
    uint8_t Components,
    const std::vector< uint8_t >& Data)
    :
        m_Timestamp_( Timestamp ),
        m_Width_( Width ),
        m_Height_( Height ),
        m_Depth_( Depth ),
        m_Components_( Components ),
        m_Data_( Data ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
VtkImage::VtkImage(VtkImage&& other_) OMG_NOEXCEPT  :m_Timestamp_ (std::move(other_.m_Timestamp_))
,
m_Width_ (std::move(other_.m_Width_))
,
m_Height_ (std::move(other_.m_Height_))
,
m_Depth_ (std::move(other_.m_Depth_))
,
m_Components_ (std::move(other_.m_Components_))
,
m_Data_ (std::move(other_.m_Data_))
{
} 

VtkImage& VtkImage::operator=(VtkImage&&  other_) OMG_NOEXCEPT {
    VtkImage tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void VtkImage::swap(VtkImage& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_Timestamp_, other_.m_Timestamp_);
    swap(m_Width_, other_.m_Width_);
    swap(m_Height_, other_.m_Height_);
    swap(m_Depth_, other_.m_Depth_);
    swap(m_Components_, other_.m_Components_);
    swap(m_Data_, other_.m_Data_);
}  

bool VtkImage::operator == (const VtkImage& other_) const {
    if (m_Timestamp_ != other_.m_Timestamp_) {
        return false;
    }
    if (m_Width_ != other_.m_Width_) {
        return false;
    }
    if (m_Height_ != other_.m_Height_) {
        return false;
    }
    if (m_Depth_ != other_.m_Depth_) {
        return false;
    }
    if (m_Components_ != other_.m_Components_) {
        return false;
    }
    if (m_Data_ != other_.m_Data_) {
        return false;
    }
    return true;
}
bool VtkImage::operator != (const VtkImage& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const VtkImage& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "Timestamp: " << sample.Timestamp()<<", ";
    o << "Width: " << sample.Width()<<", ";
    o << "Height: " << sample.Height()<<", ";
    o << "Depth: " << sample.Depth()<<", ";
    o << "Components: <" << std::hex<<(int)sample.Components() <<", ";
    o << "Data: " << sample.Data() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< Dimension_t_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Dimension_t_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"Dimension_t", /* Name */
                        NULL, /* Content type code is assigned later */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for  Dimension_t */

                if (is_initialized) {
                    return &Dimension_t_g_tc;
                }

                Dimension_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Dimension_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_ulong;

                /* Initialize the values for member annotations. */
                Dimension_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                Dimension_t_g_tc._data._annotations._defaultValue._u.ulong_value = 0u;
                Dimension_t_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                Dimension_t_g_tc._data._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                Dimension_t_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                Dimension_t_g_tc._data._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                Dimension_t_g_tc._data._sampleAccessInfo = sample_access_info();
                Dimension_t_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &Dimension_t_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Dimension_t_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Dimension_t_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Dimension_t_g_sampleAccessInfo;
                }

                Dimension_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Dimension_t_g_sampleAccessInfo.memberAccessInfos = 
                Dimension_t_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(Dimension_t);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        Dimension_t_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        Dimension_t_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Dimension_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Dimension_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< Dimension_t >;

                Dimension_t_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Dimension_t_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Dimension_t_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &Dimension_t_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< Dimension_t_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Dimension_t_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< Components_t_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Components_t_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"Components_t", /* Name */
                        NULL, /* Content type code is assigned later */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for  Components_t */

                if (is_initialized) {
                    return &Components_t_g_tc;
                }

                Components_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Components_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_octet;

                /* Initialize the values for member annotations. */
                Components_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                Components_t_g_tc._data._annotations._defaultValue._u.octet_value = 0;
                Components_t_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                Components_t_g_tc._data._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                Components_t_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                Components_t_g_tc._data._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                Components_t_g_tc._data._sampleAccessInfo = sample_access_info();
                Components_t_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &Components_t_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Components_t_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Components_t_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Components_t_g_sampleAccessInfo;
                }

                Components_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Components_t_g_sampleAccessInfo.memberAccessInfos = 
                Components_t_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(Components_t);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        Components_t_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        Components_t_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Components_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Components_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< Components_t >;

                Components_t_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Components_t_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Components_t_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &Components_t_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< Components_t_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Components_t_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< Timestamp_t_AliasTag_t > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Timestamp_t_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"Timestamp_t", /* Name */
                        NULL, /* Content type code is assigned later */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for  Timestamp_t */

                if (is_initialized) {
                    return &Timestamp_t_g_tc;
                }

                Timestamp_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                Timestamp_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                /* Initialize the values for member annotations. */
                Timestamp_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ULONGLONG;
                Timestamp_t_g_tc._data._annotations._defaultValue._u.ulong_long_value = 0ull;
                Timestamp_t_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                Timestamp_t_g_tc._data._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                Timestamp_t_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                Timestamp_t_g_tc._data._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;

                Timestamp_t_g_tc._data._sampleAccessInfo = sample_access_info();
                Timestamp_t_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &Timestamp_t_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo Timestamp_t_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo Timestamp_t_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &Timestamp_t_g_sampleAccessInfo;
                }

                Timestamp_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                Timestamp_t_g_sampleAccessInfo.memberAccessInfos = 
                Timestamp_t_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(Timestamp_t);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        Timestamp_t_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        Timestamp_t_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                Timestamp_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                Timestamp_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< Timestamp_t >;

                Timestamp_t_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &Timestamp_t_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin Timestamp_t_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &Timestamp_t_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::AliasType& dynamic_type< Timestamp_t_AliasTag_t >::get()
        {
            return static_cast<const ::dds::core::xtypes::AliasType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< Timestamp_t_AliasTag_t >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< VtkImage > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode VtkImage_g_tc_Data_sequence;

                static DDS_TypeCode_Member VtkImage_g_tc_members[6]=
                {

                    {
                        (char *)"Timestamp",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Width",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Height",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Depth",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Components",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Data",/* Member name */
                        {
                            5,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode VtkImage_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"VtkImage", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        6, /* Number of members */
                        VtkImage_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for VtkImage*/

                if (is_initialized) {
                    return &VtkImage_g_tc;
                }

                VtkImage_g_tc_Data_sequence = initialize_sequence_typecode< std::vector< uint8_t > >(RTIXCdrLong_MAX);

                VtkImage_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                VtkImage_g_tc_Data_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
                VtkImage_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Timestamp_t_AliasTag_t>::get().native();
                VtkImage_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Dimension_t_AliasTag_t>::get().native();
                VtkImage_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Dimension_t_AliasTag_t>::get().native();
                VtkImage_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Dimension_t_AliasTag_t>::get().native();
                VtkImage_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< Components_t_AliasTag_t>::get().native();
                VtkImage_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& VtkImage_g_tc_Data_sequence;

                /* Initialize the values for member annotations. */
                VtkImage_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ULONGLONG;
                VtkImage_g_tc_members[0]._annotations._defaultValue._u.ulong_long_value = 0ull;
                VtkImage_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_ULONGLONG;
                VtkImage_g_tc_members[0]._annotations._minValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MIN;
                VtkImage_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_ULONGLONG;
                VtkImage_g_tc_members[0]._annotations._maxValue._u.ulong_long_value = RTIXCdrUnsignedLongLong_MAX;

                VtkImage_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                VtkImage_g_tc_members[1]._annotations._defaultValue._u.ulong_value = 0u;
                VtkImage_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                VtkImage_g_tc_members[1]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                VtkImage_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                VtkImage_g_tc_members[1]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                VtkImage_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                VtkImage_g_tc_members[2]._annotations._defaultValue._u.ulong_value = 0u;
                VtkImage_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                VtkImage_g_tc_members[2]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                VtkImage_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                VtkImage_g_tc_members[2]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                VtkImage_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                VtkImage_g_tc_members[3]._annotations._defaultValue._u.ulong_value = 1;
                VtkImage_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                VtkImage_g_tc_members[3]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                VtkImage_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                VtkImage_g_tc_members[3]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                VtkImage_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
                VtkImage_g_tc_members[4]._annotations._defaultValue._u.octet_value = 0;
                VtkImage_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
                VtkImage_g_tc_members[4]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
                VtkImage_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
                VtkImage_g_tc_members[4]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

                VtkImage_g_tc._data._sampleAccessInfo = sample_access_info();
                VtkImage_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &VtkImage_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                VtkImage *sample;

                static RTIXCdrMemberAccessInfo VtkImage_g_memberAccessInfos[6] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VtkImage_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VtkImage_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    VtkImage);
                if (sample == NULL) {
                    return NULL;
                }

                VtkImage_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Timestamp() - (char *)sample);

                VtkImage_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Width() - (char *)sample);

                VtkImage_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Height() - (char *)sample);

                VtkImage_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Depth() - (char *)sample);

                VtkImage_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Components() - (char *)sample);

                VtkImage_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Data() - (char *)sample);

                VtkImage_g_sampleAccessInfo.memberAccessInfos = 
                VtkImage_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(VtkImage);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        VtkImage_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        VtkImage_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VtkImage_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VtkImage_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< VtkImage >;

                VtkImage_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VtkImage_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VtkImage_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &VtkImage_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< VtkImage >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< VtkImage >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< VtkImage >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                VtkImagePlugin_new,
                VtkImagePlugin_delete);
        }

        std::vector<char>& topic_type_support< VtkImage >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const VtkImage& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = VtkImagePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = VtkImagePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< VtkImage >::from_cdr_buffer(VtkImage& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = VtkImagePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create VtkImage from cdr buffer");
        }

        void topic_type_support< VtkImage >::reset_sample(VtkImage& sample) 
        {
            sample.Timestamp(0ull);
            sample.Width(0u);
            sample.Height(0u);
            sample.Depth(1);
            sample.Components(0);
            ::rti::topic::reset_sample(sample.Data());
        }

        void topic_type_support< VtkImage >::allocate_sample(VtkImage& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.Data(),  -1, -1);
        }

    }
}  

