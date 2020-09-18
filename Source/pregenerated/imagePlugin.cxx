

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from image.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <string.h>

#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "dds_c/dds_c_typecode_impl.h"

#include "rti/topic/cdr/Serialization.hpp"

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include "imagePlugin.hpp"

/* ----------------------------------------------------------------------------
*  Type Dimension_t
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

Dimension_t *
Dimension_tPluginSupport_create_data(void)
{
    try {
        Dimension_t *sample = new Dimension_t;    
        ::rti::topic::allocate_sample(*sample);
        return sample;
    } catch (...) {
        return NULL;
    }
}

void 
Dimension_tPluginSupport_destroy_data(
    Dimension_t *sample) 
{
    delete sample;
}

RTIBool 
Dimension_tPluginSupport_copy_data(
    Dimension_t *dst,
    const Dimension_t *src)
{
    try {
        *dst = *src;
    } catch (...) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
Dimension_tPlugin_copy_sample(
    PRESTypePluginEndpointData,
    Dimension_t *dst,
    const Dimension_t *src)
{
    return Dimension_tPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
Dimension_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
Dimension_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    } catch (...) {
        return 0;
    }    
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
Dimension_tPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
Dimension_tPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    } catch (...) {
        return RTI_FALSE;
    }    
}

unsigned int
Dimension_tPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
*  Type Components_t
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

Components_t *
Components_tPluginSupport_create_data(void)
{
    try {
        Components_t *sample = new Components_t;    
        ::rti::topic::allocate_sample(*sample);
        return sample;
    } catch (...) {
        return NULL;
    }
}

void 
Components_tPluginSupport_destroy_data(
    Components_t *sample) 
{
    delete sample;
}

RTIBool 
Components_tPluginSupport_copy_data(
    Components_t *dst,
    const Components_t *src)
{
    try {
        *dst = *src;
    } catch (...) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
Components_tPlugin_copy_sample(
    PRESTypePluginEndpointData,
    Components_t *dst,
    const Components_t *src)
{
    return Components_tPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
Components_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
Components_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    } catch (...) {
        return 0;
    }    
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
Components_tPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
Components_tPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    } catch (...) {
        return RTI_FALSE;
    }    
}

unsigned int
Components_tPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
*  Type Timestamp_t
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

Timestamp_t *
Timestamp_tPluginSupport_create_data(void)
{
    try {
        Timestamp_t *sample = new Timestamp_t;    
        ::rti::topic::allocate_sample(*sample);
        return sample;
    } catch (...) {
        return NULL;
    }
}

void 
Timestamp_tPluginSupport_destroy_data(
    Timestamp_t *sample) 
{
    delete sample;
}

RTIBool 
Timestamp_tPluginSupport_copy_data(
    Timestamp_t *dst,
    const Timestamp_t *src)
{
    try {
        *dst = *src;
    } catch (...) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
Timestamp_tPlugin_copy_sample(
    PRESTypePluginEndpointData,
    Timestamp_t *dst,
    const Timestamp_t *src)
{
    return Timestamp_tPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
Timestamp_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
Timestamp_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    } catch (...) {
        return 0;
    }    
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
Timestamp_tPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
Timestamp_tPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    } catch (...) {
        return RTI_FALSE;
    }    
}

unsigned int
Timestamp_tPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
*  Type Bitness_t
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

Bitness_t *
Bitness_tPluginSupport_create_data(void)
{
    try {
        Bitness_t *sample = new Bitness_t;    
        ::rti::topic::allocate_sample(*sample);
        return sample;
    } catch (...) {
        return NULL;
    }
}

void 
Bitness_tPluginSupport_destroy_data(
    Bitness_t *sample) 
{
    delete sample;
}

RTIBool 
Bitness_tPluginSupport_copy_data(
    Bitness_t *dst,
    const Bitness_t *src)
{
    try {
        *dst = *src;
    } catch (...) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
Bitness_tPlugin_copy_sample(
    PRESTypePluginEndpointData,
    Bitness_t *dst,
    const Bitness_t *src)
{
    return Bitness_tPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
Bitness_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
Bitness_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    } catch (...) {
        return 0;
    }    
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
Bitness_tPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
Bitness_tPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    } catch (...) {
        return RTI_FALSE;
    }    
}

unsigned int
Bitness_tPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
*  Type VtkImage
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

VtkImage *
VtkImagePluginSupport_create_data(void)
{
    try {
        VtkImage *sample = new VtkImage;    
        ::rti::topic::allocate_sample(*sample);
        return sample;
    } catch (...) {
        return NULL;
    }
}

void 
VtkImagePluginSupport_destroy_data(
    VtkImage *sample) 
{
    delete sample;
}

RTIBool 
VtkImagePluginSupport_copy_data(
    VtkImage *dst,
    const VtkImage *src)
{
    try {
        *dst = *src;
    } catch (...) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

VtkImage *
VtkImagePluginSupport_create_key(void)
{
    return VtkImagePluginSupport_create_data();
}

void 
VtkImagePluginSupport_destroy_key(
    VtkImageKeyHolder *key) 
{
    VtkImagePluginSupport_destroy_data(key);
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
VtkImagePlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
    RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */
    pd = (struct PRESTypePluginDefaultParticipantData *)
    PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programProperty.externalReferenceSize = 
    (RTIXCdrUnsignedShort) sizeof(::dds::core::external<char>);
    programProperty.getExternalRefPointerFcn = 
    ::rti::topic::interpreter::get_external_value_pointer;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        (DDS_TypeCode *) (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< VtkImage >::get().native()
        ,
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);

    if (programs == NULL) {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData)pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void 
VtkImagePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL) {
        struct PRESTypePluginDefaultParticipantData *pd = 
        (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL) {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
VtkImagePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    try {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize = 0;

        unsigned int serializedKeyMaxSize = 0;
        unsigned int serializedKeyMaxSizeV2 = 0;

        if (top_level_registration) {} /* To avoid warnings */
        if (containerPluginContext) {} /* To avoid warnings */

        if (participant_data == NULL) {
            return NULL;
        } 

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            VtkImagePluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            VtkImagePluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            VtkImagePluginSupport_create_key ,                (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            VtkImagePluginSupport_destroy_key);

        if (epd == NULL) {
            return NULL;
        } 

        serializedKeyMaxSize =  VtkImagePlugin_get_serialized_key_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
        serializedKeyMaxSizeV2 = VtkImagePlugin_get_serialized_key_max_size_for_keyhash(
            epd,
            RTI_CDR_ENCAPSULATION_ID_CDR2_BE,
            0);

        if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
            epd,
            endpoint_info,
            serializedKeyMaxSize,
            serializedKeyMaxSizeV2))  
        {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
            serializedSampleMaxSize = VtkImagePlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                VtkImagePlugin_get_serialized_sample_max_size, epd,
                (PRESTypePluginGetSerializedSampleSizeFunction)
                PRESTypePlugin_interpretedGetSerializedSampleSize,
                epd) == RTI_FALSE) {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    } catch (...) {
        return NULL;
    }
}

void 
VtkImagePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
VtkImagePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    VtkImage *sample,
    void *handle)
{
    try {
        ::rti::topic::reset_sample(*sample);
    } catch(const std::exception& ex) {
        RTICdrLog_logWithFunctionName(
            RTI_LOG_BIT_EXCEPTION,
            "VtkImagePlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_s,
            "exception: ",
            ex.what());           
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
VtkImagePlugin_copy_sample(
    PRESTypePluginEndpointData,
    VtkImage *dst,
    const VtkImage *src)
{
    return VtkImagePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
VtkImagePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
VtkImagePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const VtkImage *sample,
    ::dds::core::policy::DataRepresentationId representation)
{
    using namespace ::dds::core::policy;

    try{
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;
        struct PRESTypePluginDefaultParticipantData pd;
        struct RTIXCdrTypePluginProgramContext defaultProgramConext =
        RTIXCdrTypePluginProgramContext_INTIALIZER;
        struct PRESTypePlugin plugin = PRES_TYPEPLUGIN_DEFAULT;

        if (length == NULL) {
            return RTI_FALSE;
        }

        RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
        epd.programContext = defaultProgramConext;  
        epd._participantData = &pd;
        epd.typePlugin = &plugin;
        epd.programContext.endpointPluginData = &epd;
        plugin.typeCode = (struct RTICdrTypeCode *)
        (RTIXCdrTypeCode *)&::rti::topic::dynamic_type< VtkImage >::get().native()
        ;
        pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
        VtkImage, 
        true, true, true>();

        encapsulationId = DDS_TypeCode_get_native_encapsulation(
            (DDS_TypeCode *) plugin.typeCode,
            representation);

        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
        VtkImagePlugin_get_serialized_sample_max_size(
            (PRESTypePluginEndpointData)&epd, 
            RTI_TRUE, 
            encapsulationId,
            0);

        if (buffer == NULL) {
            *length = 
            PRESTypePlugin_interpretedGetSerializedSampleSize(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0,
                sample);

            if (*length == 0) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }    

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = PRESTypePlugin_interpretedSerialize(
            (PRESTypePluginEndpointData)&epd, 
            sample, 
            &stream, 
            RTI_TRUE, 
            encapsulationId,
            RTI_TRUE, 
            NULL);  

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;     
    } catch (...) {
        return RTI_FALSE;
    }
}

RTIBool
VtkImagePlugin_deserialize_from_cdr_buffer(
    VtkImage *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd.programContext = defaultProgramConext;  
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    (struct RTICdrTypeCode *)(RTIXCdrTypeCode *)&::rti::topic::dynamic_type< VtkImage >::get().native()
    ;
    pd.programs = ::rti::topic::interpreter::get_cdr_serialization_programs<
    VtkImage, 
    true, true, true>();

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    ::rti::topic::reset_sample(*sample);
    return PRESTypePlugin_interpretedDeserialize( 
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream, 
        RTI_TRUE, 
        RTI_TRUE, 
        NULL);
}

unsigned int 
VtkImagePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    } catch (...) {
        return 0;
    }    
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
VtkImagePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool VtkImagePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    VtkImage **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try {
        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result= PRESTypePlugin_interpretedDeserializeKey( 
            endpoint_data, (sample != NULL)?*sample:NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result) {
            if (stream->_xTypesState.unassignable) {
                result = RTI_FALSE;
            }
        }
        return result;    
    } catch (...) {
        return RTI_FALSE;
    }     
}

unsigned int
VtkImagePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    } catch (...) {
        return RTI_FALSE;
    }    
}

unsigned int
VtkImagePlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
VtkImagePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    VtkImageKeyHolder *dst, 
    const VtkImage *src)
{
    try {
        if (endpoint_data) {} /* To avoid warnings */   

        dst->Timestamp() = src->Timestamp();
        return RTI_TRUE;
    } catch (...) {
        return RTI_FALSE;
    }    
}

RTIBool 
VtkImagePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    VtkImage *dst, const
    VtkImageKeyHolder *src)
{
    try {
        if (endpoint_data) {} /* To avoid warnings */   
        dst->Timestamp() = src->Timestamp();
        return RTI_TRUE;
    } catch (...) {
        return RTI_FALSE;
    }    
}

RTIBool 
VtkImagePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const VtkImage *instance,
    RTIEncapsulationId encapsulationId)
{
    try {
        struct RTICdrStream * md5Stream = NULL;
        struct RTICdrStreamState cdrState;
        char * buffer = NULL;
        RTIXCdrBoolean iCdrv2;

        iCdrv2 = RTIXCdrEncapsulationId_isCdrV2(encapsulationId);
        RTICdrStreamState_init(&cdrState);
        md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

        if (md5Stream == NULL) {
            return RTI_FALSE;
        }

        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

        if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
            endpoint_data,
            instance,
            md5Stream,
            iCdrv2?
            RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            NULL)) 
        {
            int size;

            RTICdrStream_pushState(md5Stream, &cdrState, -1);

            size = (int)PRESTypePlugin_interpretedGetSerializedSampleSize(
                endpoint_data,
                RTI_FALSE,
                iCdrv2?
                RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
                RTI_CDR_ENCAPSULATION_ID_CDR_BE,
                0,
                instance);

            if (size <= RTICdrStream_getBufferLength(md5Stream)) {
                RTICdrStream_popState(md5Stream, &cdrState);        
                return RTI_FALSE;
            }   

            RTIOsapiHeap_allocateBuffer(&buffer,size,0);

            if (buffer == NULL) {
                RTICdrStream_popState(md5Stream, &cdrState);
                return RTI_FALSE;
            }

            RTICdrStream_set(md5Stream, buffer, size);
            RTIOsapiMemory_zero(
                RTICdrStream_getBuffer(md5Stream),
                RTICdrStream_getBufferLength(md5Stream));
            RTICdrStream_resetPosition(md5Stream);
            RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
            if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
                endpoint_data,
                instance,
                md5Stream, 
                iCdrv2?
                RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
                RTI_CDR_ENCAPSULATION_ID_CDR_BE,
                NULL)) 
            {
                RTICdrStream_popState(md5Stream, &cdrState);
                RTIOsapiHeap_freeBuffer(buffer);
                return RTI_FALSE;
            }        
        }   

        if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data, iCdrv2) > 
        (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH) ||
        PRESTypePluginDefaultEndpointData_forceMD5KeyHash(endpoint_data)) {
            RTICdrStream_computeMD5(md5Stream, keyhash->value);
        } else {
            RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
            RTIOsapiMemory_copy(
                keyhash->value, 
                RTICdrStream_getBuffer(md5Stream), 
                RTICdrStream_getCurrentPositionOffset(md5Stream));
        }

        keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

        if (buffer != NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
        }

        return RTI_TRUE;

    } catch (...) {
        return RTI_FALSE;
    }
}

RTIBool 
VtkImagePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos)
{
    VtkImage * sample = NULL;
    sample = (VtkImage *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);
    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (!PRESTypePlugin_interpretedSerializedSampleToKey(
        endpoint_data,
        sample,
        stream, 
        deserialize_encapsulation, 
        RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    if (!VtkImagePlugin_instance_to_keyhash(
        endpoint_data,
        keyhash,
        sample,
        RTICdrStream_getEncapsulationKind(stream))) {
        return RTI_FALSE;
    }
    return RTI_TRUE;   
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *VtkImagePlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    VtkImagePlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    VtkImagePlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    VtkImagePlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    VtkImagePlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    VtkImagePlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    VtkImagePlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    VtkImagePlugin_destroy_sample;

    plugin->serializeFnc = 
    (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    VtkImagePlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL; 
    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    VtkImagePlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    VtkImagePlugin_return_sample;
    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    VtkImagePlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    VtkImagePlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    PRESTypePlugin_interpretedSerializeKey;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    VtkImagePlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    PRESTypePlugin_interpretedDeserializeKey;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    VtkImagePlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    VtkImagePlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    VtkImagePlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    VtkImagePlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    VtkImagePlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    VtkImagePlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    #ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL; 
    #else
    plugin->typeCode = (struct RTICdrTypeCode *) 
    &::rti::topic::dynamic_type< VtkImage >::get().native();
    #endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    VtkImagePlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    VtkImagePlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL; 
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    static const char * TYPE_NAME = "VtkImage";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void
VtkImagePlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 
#undef RTI_CDR_CURRENT_SUBMODULE 
