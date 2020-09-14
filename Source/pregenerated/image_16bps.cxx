

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from image_16bps.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "image_16bps.hpp"
#include "image_16bpsPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- VtkImage16bit: 

VtkImage16bit::VtkImage16bit() :
    m_Width_ (0u) ,
    m_Height_ (0u) ,
    m_ScalarComponents_ (0u)  {
}   

VtkImage16bit::VtkImage16bit (
    uint32_t Width,
    uint32_t Height,
    uint32_t ScalarComponents,
    const std::vector< uint16_t >& ImageBytes)
    :
        m_Width_( Width ),
        m_Height_( Height ),
        m_ScalarComponents_( ScalarComponents ),
        m_ImageBytes_( ImageBytes ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
VtkImage16bit::VtkImage16bit(VtkImage16bit&& other_) OMG_NOEXCEPT  :m_Width_ (std::move(other_.m_Width_))
,
m_Height_ (std::move(other_.m_Height_))
,
m_ScalarComponents_ (std::move(other_.m_ScalarComponents_))
,
m_ImageBytes_ (std::move(other_.m_ImageBytes_))
{
} 

VtkImage16bit& VtkImage16bit::operator=(VtkImage16bit&&  other_) OMG_NOEXCEPT {
    VtkImage16bit tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void VtkImage16bit::swap(VtkImage16bit& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_Width_, other_.m_Width_);
    swap(m_Height_, other_.m_Height_);
    swap(m_ScalarComponents_, other_.m_ScalarComponents_);
    swap(m_ImageBytes_, other_.m_ImageBytes_);
}  

bool VtkImage16bit::operator == (const VtkImage16bit& other_) const {
    if (m_Width_ != other_.m_Width_) {
        return false;
    }
    if (m_Height_ != other_.m_Height_) {
        return false;
    }
    if (m_ScalarComponents_ != other_.m_ScalarComponents_) {
        return false;
    }
    if (m_ImageBytes_ != other_.m_ImageBytes_) {
        return false;
    }
    return true;
}
bool VtkImage16bit::operator != (const VtkImage16bit& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const VtkImage16bit& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "Width: " << sample.Width()<<", ";
    o << "Height: " << sample.Height()<<", ";
    o << "ScalarComponents: " << sample.ScalarComponents()<<", ";
    o << "ImageBytes: " << sample.ImageBytes() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE

        template<>
        struct native_type_code< VtkImage16bit > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode VtkImage16bit_g_tc_ImageBytes_sequence;

                static DDS_TypeCode_Member VtkImage16bit_g_tc_members[4]=
                {

                    {
                        (char *)"Width",/* Member name */
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
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"Height",/* Member name */
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
                        (char *)"ScalarComponents",/* Member name */
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
                        (char *)"ImageBytes",/* Member name */
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
                    }
                };

                static DDS_TypeCode VtkImage16bit_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"VtkImage16bit", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        VtkImage16bit_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for VtkImage16bit*/

                if (is_initialized) {
                    return &VtkImage16bit_g_tc;
                }

                VtkImage16bit_g_tc_ImageBytes_sequence = initialize_sequence_typecode< std::vector< uint16_t > >((100));

                VtkImage16bit_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                VtkImage16bit_g_tc_ImageBytes_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
                VtkImage16bit_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                VtkImage16bit_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                VtkImage16bit_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                VtkImage16bit_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& VtkImage16bit_g_tc_ImageBytes_sequence;

                /* Initialize the values for member annotations. */
                VtkImage16bit_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                VtkImage16bit_g_tc_members[0]._annotations._defaultValue._u.ulong_value = 0u;
                VtkImage16bit_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                VtkImage16bit_g_tc_members[0]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                VtkImage16bit_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                VtkImage16bit_g_tc_members[0]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                VtkImage16bit_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                VtkImage16bit_g_tc_members[1]._annotations._defaultValue._u.ulong_value = 0u;
                VtkImage16bit_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                VtkImage16bit_g_tc_members[1]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                VtkImage16bit_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                VtkImage16bit_g_tc_members[1]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                VtkImage16bit_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                VtkImage16bit_g_tc_members[2]._annotations._defaultValue._u.ulong_value = 0u;
                VtkImage16bit_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                VtkImage16bit_g_tc_members[2]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                VtkImage16bit_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                VtkImage16bit_g_tc_members[2]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                VtkImage16bit_g_tc._data._sampleAccessInfo = sample_access_info();
                VtkImage16bit_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &VtkImage16bit_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                VtkImage16bit *sample;

                static RTIXCdrMemberAccessInfo VtkImage16bit_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo VtkImage16bit_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &VtkImage16bit_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    VtkImage16bit);
                if (sample == NULL) {
                    return NULL;
                }

                VtkImage16bit_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Width() - (char *)sample);

                VtkImage16bit_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->Height() - (char *)sample);

                VtkImage16bit_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ScalarComponents() - (char *)sample);

                VtkImage16bit_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ImageBytes() - (char *)sample);

                VtkImage16bit_g_sampleAccessInfo.memberAccessInfos = 
                VtkImage16bit_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(VtkImage16bit);

                    if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
                        VtkImage16bit_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrUnsignedLong_MAX;
                    } else {
                        VtkImage16bit_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                VtkImage16bit_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                VtkImage16bit_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< VtkImage16bit >;

                VtkImage16bit_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &VtkImage16bit_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin VtkImage16bit_g_typePlugin = 
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

                return &VtkImage16bit_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< VtkImage16bit >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< VtkImage16bit >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< VtkImage16bit >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                VtkImage16bitPlugin_new,
                VtkImage16bitPlugin_delete);
        }

        std::vector<char>& topic_type_support< VtkImage16bit >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const VtkImage16bit& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = VtkImage16bitPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = VtkImage16bitPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< VtkImage16bit >::from_cdr_buffer(VtkImage16bit& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = VtkImage16bitPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create VtkImage16bit from cdr buffer");
        }

        void topic_type_support< VtkImage16bit >::reset_sample(VtkImage16bit& sample) 
        {
            sample.Width(0u);
            sample.Height(0u);
            sample.ScalarComponents(0u);
            ::rti::topic::reset_sample(sample.ImageBytes());
        }

        void topic_type_support< VtkImage16bit >::allocate_sample(VtkImage16bit& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            ::rti::topic::allocate_sample(sample.ImageBytes(),  100, -1);
        }

    }
}  

