

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from image.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef imagePlugin_879297079_h
#define imagePlugin_879297079_h

#include "image.hpp"

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

#define Dimension_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define Dimension_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Dimension_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define Dimension_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Dimension_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Dimension_t*
Dimension_tPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Dimension_t*
Dimension_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Dimension_t*
Dimension_tPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Dimension_tPluginSupport_copy_data(
    Dimension_t *out,
    const Dimension_t *in);

NDDSUSERDllExport extern void 
Dimension_tPluginSupport_destroy_data_w_params(
    Dimension_t *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Dimension_tPluginSupport_destroy_data_ex(
    Dimension_t *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Dimension_tPluginSupport_destroy_data(
    Dimension_t *sample);

NDDSUSERDllExport extern void 
Dimension_tPluginSupport_print_data(
    const Dimension_t *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Dimension_tPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Dimension_t *out,
    const Dimension_t *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
Dimension_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
Dimension_tPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Dimension_tPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Dimension_tPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

#define Components_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define Components_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Components_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define Components_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Components_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Components_t*
Components_tPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Components_t*
Components_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Components_t*
Components_tPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Components_tPluginSupport_copy_data(
    Components_t *out,
    const Components_t *in);

NDDSUSERDllExport extern void 
Components_tPluginSupport_destroy_data_w_params(
    Components_t *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Components_tPluginSupport_destroy_data_ex(
    Components_t *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Components_tPluginSupport_destroy_data(
    Components_t *sample);

NDDSUSERDllExport extern void 
Components_tPluginSupport_print_data(
    const Components_t *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Components_tPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Components_t *out,
    const Components_t *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
Components_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
Components_tPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Components_tPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Components_tPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

#define Timestamp_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define Timestamp_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Timestamp_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define Timestamp_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Timestamp_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Timestamp_t*
Timestamp_tPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Timestamp_t*
Timestamp_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Timestamp_t*
Timestamp_tPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Timestamp_tPluginSupport_copy_data(
    Timestamp_t *out,
    const Timestamp_t *in);

NDDSUSERDllExport extern void 
Timestamp_tPluginSupport_destroy_data_w_params(
    Timestamp_t *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Timestamp_tPluginSupport_destroy_data_ex(
    Timestamp_t *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Timestamp_tPluginSupport_destroy_data(
    Timestamp_t *sample);

NDDSUSERDllExport extern void 
Timestamp_tPluginSupport_print_data(
    const Timestamp_t *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Timestamp_tPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Timestamp_t *out,
    const Timestamp_t *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
Timestamp_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
Timestamp_tPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Timestamp_tPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Timestamp_tPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* The type used to store keys for instances of type struct
* AnotherSimple.
*
* By default, this type is struct VtkImage
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct VtkImage)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* VtkImage must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct VtkImage.
*/
typedef  class VtkImage VtkImageKeyHolder;

#define VtkImagePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define VtkImagePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define VtkImagePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define VtkImagePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define VtkImagePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

#define VtkImagePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define VtkImagePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern VtkImage*
VtkImagePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern VtkImage*
VtkImagePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern VtkImage*
VtkImagePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
VtkImagePluginSupport_copy_data(
    VtkImage *out,
    const VtkImage *in);

NDDSUSERDllExport extern void 
VtkImagePluginSupport_destroy_data_w_params(
    VtkImage *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
VtkImagePluginSupport_destroy_data_ex(
    VtkImage *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
VtkImagePluginSupport_destroy_data(
    VtkImage *sample);

NDDSUSERDllExport extern void 
VtkImagePluginSupport_print_data(
    const VtkImage *sample,
    const char *desc,
    unsigned int indent);

NDDSUSERDllExport extern VtkImage*
VtkImagePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern VtkImage*
VtkImagePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
VtkImagePluginSupport_destroy_key_ex(
    VtkImageKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
VtkImagePluginSupport_destroy_key(
    VtkImageKeyHolder *key);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
VtkImagePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
VtkImagePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
VtkImagePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
VtkImagePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
VtkImagePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    VtkImage *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
VtkImagePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    VtkImage *out,
    const VtkImage *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
VtkImagePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const VtkImage *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
VtkImagePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    VtkImage **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
VtkImagePlugin_deserialize_from_cdr_buffer(
    VtkImage *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
VtkImagePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
VtkImagePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
VtkImagePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
VtkImagePlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
VtkImagePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    VtkImage ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
VtkImagePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    VtkImageKeyHolder *key, 
    const VtkImage *instance);

NDDSUSERDllExport extern RTIBool 
VtkImagePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    VtkImage *instance, 
    const VtkImageKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
VtkImagePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const VtkImage *instance,
    RTIEncapsulationId encapsulationId);

NDDSUSERDllExport extern RTIBool 
VtkImagePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
VtkImagePlugin_new(void);

NDDSUSERDllExport extern void
VtkImagePlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* imagePlugin_879297079_h */

