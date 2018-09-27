/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "trace.h"

uint16_t _TRACE_KVM_IOCTL_DSTATE;
uint16_t _TRACE_KVM_VM_IOCTL_DSTATE;
uint16_t _TRACE_KVM_VCPU_IOCTL_DSTATE;
uint16_t _TRACE_KVM_RUN_EXIT_DSTATE;
uint16_t _TRACE_KVM_DEVICE_IOCTL_DSTATE;
uint16_t _TRACE_KVM_FAILED_REG_GET_DSTATE;
uint16_t _TRACE_KVM_FAILED_REG_SET_DSTATE;
uint16_t _TRACE_KVM_IRQCHIP_COMMIT_ROUTES_DSTATE;
uint16_t _TRACE_KVM_IRQCHIP_ADD_MSI_ROUTE_DSTATE;
uint16_t _TRACE_KVM_IRQCHIP_UPDATE_MSI_ROUTE_DSTATE;
uint16_t _TRACE_KVM_IRQCHIP_RELEASE_VIRQ_DSTATE;
uint16_t _TRACE_KVM_SET_USER_MEMORY_DSTATE;
TraceEvent _TRACE_KVM_IOCTL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "kvm_ioctl",
    .sstate = TRACE_KVM_IOCTL_ENABLED,
    .dstate = &_TRACE_KVM_IOCTL_DSTATE 
};
TraceEvent _TRACE_KVM_VM_IOCTL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "kvm_vm_ioctl",
    .sstate = TRACE_KVM_VM_IOCTL_ENABLED,
    .dstate = &_TRACE_KVM_VM_IOCTL_DSTATE 
};
TraceEvent _TRACE_KVM_VCPU_IOCTL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "kvm_vcpu_ioctl",
    .sstate = TRACE_KVM_VCPU_IOCTL_ENABLED,
    .dstate = &_TRACE_KVM_VCPU_IOCTL_DSTATE 
};
TraceEvent _TRACE_KVM_RUN_EXIT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "kvm_run_exit",
    .sstate = TRACE_KVM_RUN_EXIT_ENABLED,
    .dstate = &_TRACE_KVM_RUN_EXIT_DSTATE 
};
TraceEvent _TRACE_KVM_DEVICE_IOCTL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "kvm_device_ioctl",
    .sstate = TRACE_KVM_DEVICE_IOCTL_ENABLED,
    .dstate = &_TRACE_KVM_DEVICE_IOCTL_DSTATE 
};
TraceEvent _TRACE_KVM_FAILED_REG_GET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "kvm_failed_reg_get",
    .sstate = TRACE_KVM_FAILED_REG_GET_ENABLED,
    .dstate = &_TRACE_KVM_FAILED_REG_GET_DSTATE 
};
TraceEvent _TRACE_KVM_FAILED_REG_SET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "kvm_failed_reg_set",
    .sstate = TRACE_KVM_FAILED_REG_SET_ENABLED,
    .dstate = &_TRACE_KVM_FAILED_REG_SET_DSTATE 
};
TraceEvent _TRACE_KVM_IRQCHIP_COMMIT_ROUTES_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "kvm_irqchip_commit_routes",
    .sstate = TRACE_KVM_IRQCHIP_COMMIT_ROUTES_ENABLED,
    .dstate = &_TRACE_KVM_IRQCHIP_COMMIT_ROUTES_DSTATE 
};
TraceEvent _TRACE_KVM_IRQCHIP_ADD_MSI_ROUTE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "kvm_irqchip_add_msi_route",
    .sstate = TRACE_KVM_IRQCHIP_ADD_MSI_ROUTE_ENABLED,
    .dstate = &_TRACE_KVM_IRQCHIP_ADD_MSI_ROUTE_DSTATE 
};
TraceEvent _TRACE_KVM_IRQCHIP_UPDATE_MSI_ROUTE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "kvm_irqchip_update_msi_route",
    .sstate = TRACE_KVM_IRQCHIP_UPDATE_MSI_ROUTE_ENABLED,
    .dstate = &_TRACE_KVM_IRQCHIP_UPDATE_MSI_ROUTE_DSTATE 
};
TraceEvent _TRACE_KVM_IRQCHIP_RELEASE_VIRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "kvm_irqchip_release_virq",
    .sstate = TRACE_KVM_IRQCHIP_RELEASE_VIRQ_ENABLED,
    .dstate = &_TRACE_KVM_IRQCHIP_RELEASE_VIRQ_DSTATE 
};
TraceEvent _TRACE_KVM_SET_USER_MEMORY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "kvm_set_user_memory",
    .sstate = TRACE_KVM_SET_USER_MEMORY_ENABLED,
    .dstate = &_TRACE_KVM_SET_USER_MEMORY_DSTATE 
};
TraceEvent *accel_kvm_trace_events[] = {
    &_TRACE_KVM_IOCTL_EVENT,
    &_TRACE_KVM_VM_IOCTL_EVENT,
    &_TRACE_KVM_VCPU_IOCTL_EVENT,
    &_TRACE_KVM_RUN_EXIT_EVENT,
    &_TRACE_KVM_DEVICE_IOCTL_EVENT,
    &_TRACE_KVM_FAILED_REG_GET_EVENT,
    &_TRACE_KVM_FAILED_REG_SET_EVENT,
    &_TRACE_KVM_IRQCHIP_COMMIT_ROUTES_EVENT,
    &_TRACE_KVM_IRQCHIP_ADD_MSI_ROUTE_EVENT,
    &_TRACE_KVM_IRQCHIP_UPDATE_MSI_ROUTE_EVENT,
    &_TRACE_KVM_IRQCHIP_RELEASE_VIRQ_EVENT,
    &_TRACE_KVM_SET_USER_MEMORY_EVENT,
  NULL,
};

static void trace_accel_kvm_register_events(void)
{
    trace_event_register_group(accel_kvm_trace_events);
}
trace_init(trace_accel_kvm_register_events)
