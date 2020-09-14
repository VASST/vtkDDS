

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from image_32bps.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef image_32bpsPlugin_1118745427_h
#define image_32bpsPlugin_1118745427_h

#include "image_32bps.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#define VtkImage32bitPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define VtkImage32bitPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define VtkImage32bitPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define VtkImage32bitPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define VtkImage32bitPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern VtkImage32bit*
VtkImage32bitPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern VtkImage32bit*
VtkImage32bitPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern VtkImage32bit*
VtkImage32bitPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
VtkImage32bitPluginSupport_copy_data(
    VtkImage32bit *out,
    const VtkImage32bit *in);

NDDSUSERDllExport extern void 
VtkImage32bitPluginSupport_destroy_data_w_params(
    VtkImage32bit *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
VtkImage32bitPluginSupport_destroy_data_ex(
    VtkImage32bit *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
VtkImage32bitPluginSupport_destroy_data(
    VtkImage32bit *sample);

NDDSUSERDllExport extern void 
VtkImage32bitPluginSupport_print_data(
    const VtkImage32bit *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
VtkImage32bitPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
VtkImage32bitPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
VtkImage32bitPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
VtkImage32bitPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
VtkImage32bitPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    VtkImage32bit *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
VtkImage32bitPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    VtkImage32bit *out,
    const VtkImage32bit *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
VtkImage32bitPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const VtkImage32bit *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
VtkImage32bitPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    VtkImage32bit **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
VtkImage32bitPlugin_deserialize_from_cdr_buffer(
    VtkImage32bit *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
VtkImage32bitPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
VtkImage32bitPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
VtkImage32bitPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
VtkImage32bitPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
VtkImage32bitPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    VtkImage32bit ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
VtkImage32bitPlugin_new(void);

NDDSUSERDllExport extern void
VtkImage32bitPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* image_32bpsPlugin_1118745427_h */

