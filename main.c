#include <GLFW/glfw3.h>
#include <vulkan/vulkan.h>
#include <stdio.h>
#define GLFW_INCLUDE_VULKAN
#include "/home/kynan/vec.h"


int main(void)
{


    /* Initialize the library */
    if (!glfwInit())
        return -1;
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

    /* Create a windowed mode window and its OpenGL context */
    GLFWwindow* window = glfwCreateWindow(640, 480, "Vulkan Engine", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }
    // Vulkan Initialization
    VkInstance instance;
    VkInstanceCreateInfo createInfo = {};
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    vkCreateInstance(&createInfo, NULL, &instance);
    VkResult vkEnumeratePhysicalDevices(
        VkInstance                                  instance,
        uint32_t*                                   pPhysicalDeviceCount,
        VkPhysicalDevice*                           pPhysicalDevices);
    void vkGetPhysicalDeviceProperties(
        VkPhysicalDevice                            physicalDevice,
        VkPhysicalDeviceProperties*                 pProperties);
    // Provided by VK_VERSION_1_1
    VkResult vkEnumeratePhysicalDeviceGroups(
        VkInstance                                  instance,
        uint32_t*                                   pPhysicalDeviceGroupCount,
        VkPhysicalDeviceGroupProperties*            pPhysicalDeviceGroupProperties);
    // Provided by VK_VERSION_1_0
    VkResult vkCreateDevice(
        VkPhysicalDevice                            physicalDevice,
        const VkDeviceCreateInfo*                   pCreateInfo,
        const VkAllocationCallbacks*                pAllocator,
        VkDevice*                                   pDevice);
    // Provided by VK_VERSION_1_0
    void vkDestroyDevice(
        VkDevice                                    device,
        const VkAllocationCallbacks*                pAllocator);
    // Provided by VK_VERSION_1_0
    void vkGetDeviceQueue(
        VkDevice                                    device,
        uint32_t                                    queueFamilyIndex,
        uint32_t                                    queueIndex,
        VkQueue*                                    pQueue);
    // Provided by VK_VERSION_1_0
    VkResult vkCreateFence(
        VkDevice                                    device,
        const VkFenceCreateInfo*                    pCreateInfo,
        const VkAllocationCallbacks*                pAllocator,
        VkFence*                                    pFence);

    // Provided by VK_KHR_external_fence_fd
    VkResult vkGetFenceFdKHR(
        VkDevice                                    device,
        const VkFenceGetFdInfoKHR*                  pGetFdInfo,
        int*                                        pFd);
    // Provided by VK_VERSION_1_0
    void vkDestroyFence(
        VkDevice                                    device,
        VkFence                                     fence,
        const VkAllocationCallbacks*                pAllocator);
    // Provided by VK_VERSION_1_0
    VkResult vkGetFenceStatus(
        VkDevice                                    device,
        VkFence                                     fence);
    // Provided by VK_EXT_display_control
    VkResult vkRegisterDeviceEventEXT(
        VkDevice                                    device,
        const VkDeviceEventInfoEXT*                 pDeviceEventInfo,
        const VkAllocationCallbacks*                pAllocator,
        VkFence*                                    pFence);
    VkResult vkCreateCommandPool(
        VkDevice                                    device,
        const VkCommandPoolCreateInfo*              pCreateInfo,
        const VkAllocationCallbacks*                pAllocator,
        VkCommandPool*                              pCommandPool);
    // Provided by VK_VERSION_1_0
    VkResult vkAllocateCommandBuffers(
        VkDevice                                    device,
        const VkCommandBufferAllocateInfo*          pAllocateInfo,
        VkCommandBuffer*                            pCommandBuffers);
    // Provided by VK_VERSION_1_0
    VkResult vkBeginCommandBuffer(
        VkCommandBuffer                             commandBuffer,
        const VkCommandBufferBeginInfo*             pBeginInfo);
    // Provided by VK_VERSION_1_3
    VkResult vkQueueSubmit2(
        VkQueue                                     queue,
        uint32_t                                    submitCount,
        const VkSubmitInfo2*                        pSubmits,
        VkFence                                     fence);
    // Provided by VK_VERSION_1_0
    void vkCmdExecuteCommands(
        VkCommandBuffer                             commandBuffer,
        uint32_t                                    commandBufferCount,
        const VkCommandBuffer*                      pCommandBuffers);
    // Provided by VK_VERSION_1_0
    void vkCmdExecuteCommands(
        VkCommandBuffer                             commandBuffer,
        uint32_t                                    commandBufferCount,
        const VkCommandBuffer*                      pCommandBuffers);
    // Provided by VK_VERSION_1_1
    void vkCmdSetDeviceMask(
        VkCommandBuffer                             commandBuffer,
        uint32_t                                    deviceMask);
    // Provided by VK_VERSION_1_0
    VkResult vkCreateSemaphore(
        VkDevice                                    device,
        const VkSemaphoreCreateInfo*                pCreateInfo,
        const VkAllocationCallbacks*                pAllocator,
        VkSemaphore*                                pSemaphore);
    // Provided by VK_KHR_external_semaphore_fd
    VkResult vkGetSemaphoreFdKHR(
        VkDevice                                    device,
        const VkSemaphoreGetFdInfoKHR*              pGetFdInfo,
        int*                                        pFd);
    // Provided by VK_VERSION_1_0
    VkResult vkCreateEvent(
        VkDevice                                    device,
        const VkEventCreateInfo*                    pCreateInfo,
        const VkAllocationCallbacks*                pAllocator,
        VkEvent*                                    pEvent);
    // Provided by VK_VERSION_1_0
    void vkDestroyEvent(
        VkDevice                                    device,
        VkEvent                                     event,
        const VkAllocationCallbacks*                pAllocator);
    // Provided by VK_VERSION_1_0
    VkResult vkGetEventStatus(
        VkDevice                                    device,
        VkEvent                                     event);
    // Provided by VK_VERSION_1_0
    VkResult vkSetEvent(
        VkDevice                                    device,
        VkEvent                                     event);
    // Provided by VK_VERSION_1_3
    void vkCmdSetEvent2(
        VkCommandBuffer                             commandBuffer,
        VkEvent                                     event,
        const VkDependencyInfo*                     pDependencyInfo);
    // Provided by VK_VERSION_1_0
    void vkCmdSetEvent(
        VkCommandBuffer                             commandBuffer,
        VkEvent                                     event,
        VkPipelineStageFlags                        stageMask);
    // Provided by VK_VERSION_1_3
    void vkCmdPipelineBarrier2(
        VkCommandBuffer                             commandBuffer,
        const VkDependencyInfo*                     pDependencyInfo);
    // Provided by VK_VERSION_1_0
    void vkCmdPipelineBarrier(
        VkCommandBuffer                             commandBuffer,
        VkPipelineStageFlags                        srcStageMask,
        VkPipelineStageFlags                        dstStageMask,
        VkDependencyFlags                           dependencyFlags,
        uint32_t                                    memoryBarrierCount,
        const VkMemoryBarrier*                      pMemoryBarriers,
        uint32_t                                    bufferMemoryBarrierCount,
        const VkBufferMemoryBarrier*                pBufferMemoryBarriers,
        uint32_t                                    imageMemoryBarrierCount,
        const VkImageMemoryBarrier*                 pImageMemoryBarriers);
    // Provided by VK_VERSION_1_4
    VkResult vkTransitionImageLayout(
        VkDevice                                    device,
        uint32_t                                    transitionCount,
        const VkHostImageLayoutTransitionInfo*      pTransitions);
    // Provided by VK_VERSION_1_0
    VkResult vkQueueWaitIdle(
        VkQueue                                     queue);
    // Provided by VK_VERSION_1_0
    VkResult vkDeviceWaitIdle(
        VkDevice                                    device);
    // Provided by VK_KHR_calibrated_timestamps
    VkResult vkGetCalibratedTimestampsKHR(
        VkDevice                                    device,
        uint32_t                                    timestampCount,
        const VkCalibratedTimestampInfoKHR*         pTimestampInfos,
        uint64_t*                                   pTimestamps,
        uint64_t*                                   pMaxDeviation);
    // Provided by VK_VERSION_1_0
    VkResult vkCreateRenderPass(
        VkDevice                                    device,
        const VkRenderPassCreateInfo*               pCreateInfo,
        const VkAllocationCallbacks*                pAllocator,
        VkRenderPass*                               pRenderPass);
    // Provided by VK_EXT_attachment_feedback_loop_dynamic_state
    void vkCmdSetAttachmentFeedbackLoopEnableEXT(
        VkCommandBuffer                             commandBuffer,
        VkImageAspectFlags                          aspectMask);
    // Provided by VK_VERSION_1_2
    VkResult vkCreateRenderPass2(
        VkDevice                                    device,
        const VkRenderPassCreateInfo2*              pCreateInfo,
        const VkAllocationCallbacks*                pAllocator,
        VkRenderPass*                               pRenderPass);
    // Provided by VK_VERSION_1_0
    void vkDestroyRenderPass(
        VkDevice                                    device,
        VkRenderPass                                renderPass,
        const VkAllocationCallbacks*                pAllocator);
    // Provided by VK_VERSION_1_0
    VkResult vkCreateFramebuffer(
        VkDevice                                    device,
        const VkFramebufferCreateInfo*              pCreateInfo,
        const VkAllocationCallbacks*                pAllocator,
        VkFramebuffer*                              pFramebuffer);
    // Provided by VK_VERSION_1_0
    void vkDestroyFramebuffer(
        VkDevice                                    device,
        VkFramebuffer                               framebuffer,
        const VkAllocationCallbacks*                pAllocator);
    // Provided by VK_VERSION_1_0
    void vkCmdBeginRenderPass(
        VkCommandBuffer                             commandBuffer,
        const VkRenderPassBeginInfo*                pRenderPassBegin,
        VkSubpassContents                           contents);
    // Provided by VK_VERSION_1_2
    void vkCmdBeginRenderPass2(
        VkCommandBuffer                             commandBuffer,
        const VkRenderPassBeginInfo*                pRenderPassBegin,
        const VkSubpassBeginInfo*                   pSubpassBeginInfo);
    // Provided by VK_VERSION_1_0
    void vkGetRenderAreaGranularity(
        VkDevice                                    device,
        VkRenderPass                                renderPass,
        VkExtent2D*                                 pGranularity);
    // Provided by VK_VERSION_1_0
    void vkCmdNextSubpass(
        VkCommandBuffer                             commandBuffer,
        VkSubpassContents                           contents);
    // Provided by VK_VERSION_1_2
    void vkCmdNextSubpass2(
        VkCommandBuffer                             commandBuffer,
        const VkSubpassBeginInfo*                   pSubpassBeginInfo,
        const VkSubpassEndInfo*                     pSubpassEndInfo);
    // Provided by VK_VERSION_1_0
    void vkCmdEndRenderPass(
        VkCommandBuffer                             commandBuffer);
    // Provided by VK_VERSION_1_2
    void vkCmdEndRenderPass2(
        VkCommandBuffer                             commandBuffer,
        const VkSubpassEndInfo*                     pSubpassEndInfo);
    // Provided by VK_VERSION_1_2
    void vkCmdEndRenderPass2(
        VkCommandBuffer                             commandBuffer,
        const VkSubpassEndInfo*                     pSubpassEndInfo);
    // Provided by VK_QCOM_tile_shading
    void vkCmdEndPerTileExecutionQCOM(
        VkCommandBuffer                             commandBuffer,
        const VkPerTileEndInfoQCOM*                 pPerTileEndInfo);
    // Provided by VK_EXT_shader_object
    VkResult vkCreateShadersEXT(
        VkDevice                                    device,
        uint32_t                                    createInfoCount,
        const VkShaderCreateInfoEXT*                pCreateInfos,
        const VkAllocationCallbacks*                pAllocator,
        VkShaderEXT*                                pShaders);
    // Provided by VK_EXT_shader_object
    VkResult vkGetShaderBinaryDataEXT(
        VkDevice                                    device,
        VkShaderEXT                                 shader,
        size_t*                                     pDataSize,
        void*                                       pData);
    // Provided by VK_EXT_shader_object
    void vkCmdBindShadersEXT(
        VkCommandBuffer                             commandBuffer,
        uint32_t                                    stageCount,
        const VkShaderStageFlagBits*                pStages,
        const VkShaderEXT*                          pShaders);
    // Provided by VK_EXT_shader_object
    void vkDestroyShaderEXT(
        VkDevice                                    device,
        VkShaderEXT                                 shader,
        const VkAllocationCallbacks*                pAllocator);
    // Provided by VK_VERSION_1_0
    VkResult vkCreateShaderModule(
        VkDevice                                    device,
        const VkShaderModuleCreateInfo*             pCreateInfo,
        const VkAllocationCallbacks*                pAllocator,
        VkShaderModule*                             pShaderModule);
    // Provided by VK_VERSION_1_0
    void vkDestroyShaderModule(
        VkDevice                                    device,
        VkShaderModule                              shaderModule,
        const VkAllocationCallbacks*                pAllocator);
    // Provided by VK_EXT_shader_module_identifier
    void vkGetShaderModuleIdentifierEXT(
        VkDevice                                    device,
        VkShaderModule                              shaderModule,
        VkShaderModuleIdentifierEXT*                pIdentifier);
    // Provided by VK_EXT_shader_module_identifier
    void vkGetShaderModuleCreateInfoIdentifierEXT(
        VkDevice                                    device,
        const VkShaderModuleCreateInfo*             pCreateInfo,
        VkShaderModuleIdentifierEXT*                pIdentifier);
    // Provided by VK_EXT_extended_dynamic_state2, VK_EXT_shader_object
    void vkCmdSetPatchControlPointsEXT(
        VkCommandBuffer                             commandBuffer,
        uint32_t                                    patchControlPoints);
    // Provided by VK_KHR_cooperative_matrix
    VkResult vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR(
        VkPhysicalDevice                            physicalDevice,
        uint32_t*                                   pPropertyCount,
        VkCooperativeMatrixPropertiesKHR*           pProperties);
    // Provided by VK_NV_cooperative_matrix2
    VkResult vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV(
        VkPhysicalDevice                            physicalDevice,
        uint32_t*                                   pPropertyCount,
        VkCooperativeMatrixFlexibleDimensionsPropertiesNV* pProperties);
    // Provided by VK_NV_cooperative_matrix
    VkResult vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(
        VkPhysicalDevice                            physicalDevice,
        uint32_t*                                   pPropertyCount,
        VkCooperativeMatrixPropertiesNV*            pProperties);
    // Provided by VK_NV_cooperative_vector
    VkResult vkConvertCooperativeVectorMatrixNV(
        VkDevice                                    device,
        const VkConvertCooperativeVectorMatrixInfoNV* pInfo);
    // Provided by VK_NV_cooperative_vector
    void vkCmdConvertCooperativeVectorMatrixNV(
        VkCommandBuffer                             commandBuffer,
        uint32_t                                    infoCount,
        const VkConvertCooperativeVectorMatrixInfoNV* pInfos);
    // Provided by VK_EXT_validation_cache
    VkResult vkCreateValidationCacheEXT(
        VkDevice                                    device,
        const VkValidationCacheCreateInfoEXT*       pCreateInfo,
        const VkAllocationCallbacks*                pAllocator,
        VkValidationCacheEXT*                       pValidationCache);
    // Provided by VK_EXT_validation_cache
    VkResult vkMergeValidationCachesEXT(
        VkDevice                                    device,
        VkValidationCacheEXT                        dstCache,
        uint32_t                                    srcCacheCount,
        const VkValidationCacheEXT*                 pSrcCaches);
    // Provided by VK_EXT_validation_cache
    VkResult vkGetValidationCacheDataEXT(
        VkDevice                                    device,
        VkValidationCacheEXT                        validationCache,
        size_t*                                     pDataSize,
        void*                                       pData);
    // Provided by VK_EXT_validation_cache
    void vkDestroyValidationCacheEXT(
        VkDevice                                    device,
        VkValidationCacheEXT                        validationCache,
        const VkAllocationCallbacks*                pAllocator);
    // Provided by VK_NV_cuda_kernel_launch
    VkResult vkCreateCudaModuleNV(
        VkDevice                                    device,
        const VkCudaModuleCreateInfoNV*             pCreateInfo,
        const VkAllocationCallbacks*                pAllocator,
        VkCudaModuleNV*                             pModule);
    // Provided by VK_NV_cuda_kernel_launch
    VkResult vkCreateCudaFunctionNV(
        VkDevice                                    device,
        const VkCudaFunctionCreateInfoNV*           pCreateInfo,
        const VkAllocationCallbacks*                pAllocator,
        VkCudaFunctionNV*                           pFunction);
    // Provided by VK_NV_cuda_kernel_launch
    void vkDestroyCudaFunctionNV(
        VkDevice                                    device,
        VkCudaFunctionNV                            function,
        const VkAllocationCallbacks*                pAllocator);
    // Provided by VK_NV_cuda_kernel_launch
    void vkDestroyCudaModuleNV(
        VkDevice                                    device,
        VkCudaModuleNV                              module,
        const VkAllocationCallbacks*                pAllocator);
    // Provided by VK_NV_cuda_kernel_launch
    VkResult vkGetCudaModuleCacheNV(
        VkDevice                                    device,
        VkCudaModuleNV                              module,
        size_t*                                     pCacheSize,
        void*                                       pCacheData);
    // Provided by VK_VERSION_1_0
    VkResult vkCreateComputePipelines(
        VkDevice                                    device,
        VkPipelineCache                             pipelineCache,
        uint32_t                                    createInfoCount,
        const VkComputePipelineCreateInfo*          pCreateInfos,
        const VkAllocationCallbacks*                pAllocator,
        VkPipeline*                                 pPipelines);
    // Provided by VK_HUAWEI_subpass_shading
    VkResult vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(
        VkDevice                                    device,
        VkRenderPass                                renderpass,
        VkExtent2D*                                 pMaxWorkgroupSize);
    // Provided by VK_NV_device_generated_commands_compute
    void vkCmdUpdatePipelineIndirectBufferNV(
        VkCommandBuffer                             commandBuffer,
        VkPipelineBindPoint                         pipelineBindPoint,
        VkPipeline                                  pipeline);
    // Provided by VK_VERSION_1_0
    VkResult vkCreateGraphicsPipelines(
        VkDevice                                    device,
        VkPipelineCache                             pipelineCache,
        uint32_t                                    createInfoCount,
        const VkGraphicsPipelineCreateInfo*         pCreateInfos,
        const VkAllocationCallbacks*                pAllocator,
        VkPipeline*                                 pPipelines);
    // Provided by VK_NV_ray_tracing
    VkResult vkCreateRayTracingPipelinesNV(
        VkDevice                                    device,
        VkPipelineCache                             pipelineCache,
        uint32_t                                    createInfoCount,
        const VkRayTracingPipelineCreateInfoNV*     pCreateInfos,
        const VkAllocationCallbacks*                pAllocator,
        VkPipeline*                                 pPipelines);
    // Provided by VK_KHR_ray_tracing_pipeline
    VkResult vkCreateRayTracingPipelinesKHR(
        VkDevice                                    device,
        VkDeferredOperationKHR                      deferredOperation,
        VkPipelineCache                             pipelineCache,
        uint32_t                                    createInfoCount,
        const VkRayTracingPipelineCreateInfoKHR*    pCreateInfos,
        const VkAllocationCallbacks*                pAllocator,
        VkPipeline*                                 pPipelines);
    // Provided by VK_KHR_ray_tracing_pipeline
    VkResult vkGetRayTracingShaderGroupHandlesKHR(
        VkDevice                                    device,
        VkPipeline                                  pipeline,
        uint32_t                                    firstGroup,
        uint32_t                                    groupCount,
        size_t                                      dataSize,
        void*                                       pData);
    // Provided by VK_KHR_ray_tracing_pipeline
    VkResult vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(
        VkDevice                                    device,
        VkPipeline                                  pipeline,
        uint32_t                                    firstGroup,
        uint32_t                                    groupCount,
        size_t                                      dataSize,
        void*                                       pData);
    // Provided by VK_NV_ray_tracing
    VkResult vkCompileDeferredNV(
        VkDevice                                    device,
        VkPipeline                                  pipeline,
        uint32_t                                    shader);
    // Provided by VK_KHR_ray_tracing_pipeline
    VkDeviceSize vkGetRayTracingShaderGroupStackSizeKHR(
        VkDevice                                    device,
        VkPipeline                                  pipeline,
        uint32_t                                    group,
        VkShaderGroupShaderKHR                      groupShader);
    // Provided by VK_KHR_ray_tracing_pipeline
    void vkCmdSetRayTracingPipelineStackSizeKHR(
        VkCommandBuffer                             commandBuffer,
        uint32_t                                    pipelineStackSize);
    // Provided by VK_VERSION_1_0
    void vkDestroyPipeline(
        VkDevice                                    device,
        VkPipeline                                  pipeline,
        const VkAllocationCallbacks*                pAllocator);
    // Provided by VK_VERSION_1_0
    VkResult vkCreatePipelineCache(
        VkDevice                                    device,
        const VkPipelineCacheCreateInfo*            pCreateInfo,
        const VkAllocationCallbacks*                pAllocator,
        VkPipelineCache*                            pPipelineCache);
    // Provided by VK_VERSION_1_0
    VkResult vkMergePipelineCaches(
        VkDevice                                    device,
        VkPipelineCache                             dstCache,
        uint32_t                                    srcCacheCount,
        const VkPipelineCache*                      pSrcCaches);
    // Provided by VK_VERSION_1_0
    VkResult vkGetPipelineCacheData(
        VkDevice                                    device,
        VkPipelineCache                             pipelineCache,
        size_t*                                     pDataSize,
        void*                                       pData);
    // Provided by VK_VERSION_1_0
    void vkDestroyPipelineCache(
        VkDevice                                    device,
        VkPipelineCache                             pipelineCache,
        const VkAllocationCallbacks*                pAllocator);
    // Provided by VK_KHR_pipeline_binary
    VkResult vkGetPipelineKeyKHR(
        VkDevice                                    device,
        const VkPipelineCreateInfoKHR*              pPipelineCreateInfo,
        VkPipelineBinaryKeyKHR*                     pPipelineKey);
    // Provided by VK_KHR_pipeline_binary
    VkResult vkCreatePipelineBinariesKHR(
        VkDevice                                    device,
        const VkPipelineBinaryCreateInfoKHR*        pCreateInfo,
        const VkAllocationCallbacks*                pAllocator,
        VkPipelineBinaryHandlesInfoKHR*             pBinaries);
    // Provided by VK_KHR_pipeline_binary
    VkResult vkGetPipelineBinaryDataKHR(
        VkDevice                                    device,
        const VkPipelineBinaryDataInfoKHR*          pInfo,
        VkPipelineBinaryKeyKHR*                     pPipelineBinaryKey,
        size_t*                                     pPipelineBinaryDataSize,
        void*                                       pPipelineBinaryData);
    // Provided by VK_KHR_pipeline_binary
    VkResult vkReleaseCapturedPipelineDataKHR(
        VkDevice                                    device,
        const VkReleaseCapturedPipelineDataInfoKHR* pInfo,
        const VkAllocationCallbacks*                pAllocator);
    // Provided by VK_KHR_pipeline_binary
    void vkDestroyPipelineBinaryKHR(
        VkDevice                                    device,
        VkPipelineBinaryKHR                         pipelineBinary,
        const VkAllocationCallbacks*                pAllocator);
    // Provided by VK_VERSION_1_0
    void vkCmdBindPipeline(
        VkCommandBuffer                             commandBuffer,
        VkPipelineBindPoint                         pipelineBindPoint,
        VkPipeline                                  pipeline);
    // Provided by VK_NV_device_generated_commands
    void vkCmdBindPipelineShaderGroupNV(
        VkCommandBuffer                             commandBuffer,
        VkPipelineBindPoint                         pipelineBindPoint,
        VkPipeline                                  pipeline,
        uint32_t                                    groupIndex);
    // Provided by VK_KHR_pipeline_executable_properties
    VkResult vkGetPipelineExecutablePropertiesKHR(
        VkDevice                                    device,
        const VkPipelineInfoKHR*                    pPipelineInfo,
        uint32_t*                                   pExecutableCount,
        VkPipelineExecutablePropertiesKHR*          pProperties);
    // Provided by VK_EXT_pipeline_properties
    VkResult vkGetPipelinePropertiesEXT(
        VkDevice                                    device,
        const VkPipelineInfoEXT*                    pPipelineInfo,
        VkBaseOutStructure*                         pPipelineProperties);
    // Provided by VK_KHR_pipeline_executable_properties
    VkResult vkGetPipelineExecutableStatisticsKHR(
        VkDevice                                    device,
        const VkPipelineExecutableInfoKHR*          pExecutableInfo,
        uint32_t*                                   pStatisticCount,
        VkPipelineExecutableStatisticKHR*           pStatistics);
    // Provided by VK_KHR_pipeline_executable_properties
    VkResult vkGetPipelineExecutableInternalRepresentationsKHR(
        VkDevice                                    device,
        const VkPipelineExecutableInfoKHR*          pExecutableInfo,
        uint32_t*                                   pInternalRepresentationCount,
        VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations);
    // Provided by VK_AMD_shader_info
    VkResult vkGetShaderInfoAMD(
        VkDevice                                    device,
        VkPipeline                                  pipeline,
        VkShaderStageFlagBits                       shaderStage,
        VkShaderInfoTypeAMD                         infoType,
        size_t*                                     pInfoSize,
        void*                                       pInfo);
    // Provided by VK_VERSION_1_3
    void vkCmdSetPrimitiveRestartEnable(
        VkCommandBuffer                             commandBuffer,
        VkBool32                                    primitiveRestartEnable);
    // Provided by VK_VERSION_1_3
    void vkCmdSetPrimitiveTopology(
        VkCommandBuffer                             commandBuffer,
        VkPrimitiveTopology                         primitiveTopology);
    // Provided by VK_VERSION_1_4
    void vkCmdBindIndexBuffer2(
        VkCommandBuffer                             commandBuffer,
        VkBuffer                                    buffer,
        VkDeviceSize                                offset,
        VkDeviceSize                                size,
        VkIndexType                                 indexType);
    // Provided by VK_VERSION_1_0
    void vkCmdBindIndexBuffer(
        VkCommandBuffer                             commandBuffer,
        VkBuffer                                    buffer,
        VkDeviceSize                                offset,
        VkIndexType                                 indexType);
    // Provided by VK_KHR_wayland_surface
    #define VK_USE_PLATFORM_WAYLAND_KHR
    #define GLFW_EXPOSE_NATIVE_WAYLAND_KHR
    #include <GLFW/glfw3native.h>
    VkResult vkCreateWaylandSurfaceKHR(
        VkInstance                                  instance,
        const VkDisplaySurfaceCreateInfoKHR*        pCreateInfo,
        const VkAllocationCallbacks*                pAllocator,
        VkSurfaceKHR*                               pSurface);
    // Provided by VK_KHR_swapchain
    VkResult vkCreateSwapchainKHR(
        VkDevice                                    device,
        const VkSwapchainCreateInfoKHR*             pCreateInfo,
        const VkAllocationCallbacks*                pAllocator,
        VkSwapchainKHR*                             pSwapchain);
    // Provided by VK_VERSION_1_0
    VkResult vkCreateFramebuffer(
        VkDevice                                    device,
        const VkFramebufferCreateInfo*              pCreateInfo,
        const VkAllocationCallbacks*                pAllocator,
        VkFramebuffer*                              pFramebuffer);


    VkDevice buffer;
    VkDevice pBuffer;
    VkDevice pAllocateInfo;
    VkDevice VkMemoryAllocateInfo;
    VkDevice VkAllocationCallbacks;
    VkDevice VkDeviceMemory;
    VkCommandBufferBeginInfo pBeginInfo;
    VkCommandBufferBeginInfo queryPool;

    VkPhysicalDevice physicalDevice = VK_NULL_HANDLE;
    uint32_t deviceCount = 0;
    vkEnumeratePhysicalDevices(instance, &deviceCount, nullptr);
    if (deviceCount == 0) {
        printf("failed to find GPUs with Vulkan support!");
    }

    bool isDeviceSuitable(VkPhysicalDevice device) {
        return true;
    }

    uint32_t findQueueFamilies(VkPhysicalDevice device) {
        // Logic to find graphics queue family
    }

    struct QueueFamilyIndices {
        uint32_t graphicsFamily;
    };

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        // Provided by VK_VERSION_1_0
        void vkCmdDraw(
            VkCommandBuffer                             commandBuffer,
            uint32_t                                    vertexCount,
            uint32_t                                    instanceCount,
            uint32_t                                    firstVertex,
            uint32_t                                    firstInstance);

        // Provided by VK_VERSION_1_0
        void vkCmdBindIndexBuffer(
            VkCommandBuffer                             commandBuffer,
            VkBuffer                                    buffer,
            VkDeviceSize                                offset,
            VkIndexType                                 indexType);

        // Provided by VK_EXT_multi_draw
        void vkCmdDrawMultiIndexedEXT(
            VkCommandBuffer                             commandBuffer,
            uint32_t                                    drawCount,
            const VkMultiDrawIndexedInfoEXT*            pIndexInfo,
            uint32_t                                    instanceCount,
            uint32_t                                    firstInstance,
            uint32_t                                    stride,
            const int32_t*                              pVertexOffset);

        // Provided by VK_NV_mesh_shader
        void vkCmdDrawMeshTasksNV(
            VkCommandBuffer                             commandBuffer,
            uint32_t                                    taskCount,
            uint32_t                                    firstTask);

        /* Poll for and process events */
        glfwPollEvents();
    }

    vkDestroyInstance(instance, NULL);
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
// Compile: gcc main.c -o main -lglfw -lGL -lm -lvulkan
