#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x61d603fd, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x71b38ab, __VMLINUX_SYMBOL_STR(kernel_write) },
	{ 0xe67035e3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xcd725af4, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x3fe2ccbe, __VMLINUX_SYMBOL_STR(memweight) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x3380322d, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x80a6b70c, __VMLINUX_SYMBOL_STR(v4l2_event_queue_fh) },
	{ 0x3c1b5e1f, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x1902c8fa, __VMLINUX_SYMBOL_STR(usb_debug_root) },
	{ 0xbaacab35, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x4f3df81b, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xadac09fe, __VMLINUX_SYMBOL_STR(vb2_create_bufs) },
	{ 0xad27f361, __VMLINUX_SYMBOL_STR(__warn_printk) },
	{ 0x792c456c, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x245d9935, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0xb5c5fbf2, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xe063ac48, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xbf63e976, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd76d4083, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xc5d8c1de, __VMLINUX_SYMBOL_STR(usb_enable_autosuspend) },
	{ 0x3a38b71f, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x1b5c0864, __VMLINUX_SYMBOL_STR(v4l2_ctrl_merge) },
	{ 0x1ca6c122, __VMLINUX_SYMBOL_STR(ex_handler_refcount) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x461467fb, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x26948d96, __VMLINUX_SYMBOL_STR(copy_user_enhanced_fast_string) },
	{ 0x93025c50, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x144814b4, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x380dd446, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xb44ad4b3, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdcf60e99, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x31afa792, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x72359568, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x4fa8f456, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x269cfd2a, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xdcdcf3f8, __VMLINUX_SYMBOL_STR(v4l2_event_subscribe) },
	{ 0xf0c2bfce, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe679f10f, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xb77b0159, __VMLINUX_SYMBOL_STR(v4l2_prio_init) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x52fb6a35, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x9a247343, __VMLINUX_SYMBOL_STR(media_entity_pads_init) },
	{ 0xafb8c6ff, __VMLINUX_SYMBOL_STR(copy_user_generic_string) },
	{ 0xed71b726, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x3f5d8c8a, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0x910d9e36, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x22cc9e56, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xf3341268, __VMLINUX_SYMBOL_STR(__clear_user) },
	{ 0xa23293e2, __VMLINUX_SYMBOL_STR(set_normalized_timespec64) },
	{ 0xc0c7e70f, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xd6da9ce, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0x74aed678, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb3396305, __VMLINUX_SYMBOL_STR(vb2_qbuf) },
	{ 0xecf13276, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x350f3ad2, __VMLINUX_SYMBOL_STR(vb2_querybuf) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x9f3d8d23, __VMLINUX_SYMBOL_STR(media_device_cleanup) },
	{ 0x72a98fdb, __VMLINUX_SYMBOL_STR(copy_user_generic_unrolled) },
	{ 0x51a8eb74, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x4b77c88d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_replace) },
	{ 0x3271e6cb, __VMLINUX_SYMBOL_STR(vb2_streamon) },
	{ 0x55e607cc, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xc77a9171, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf9d92620, __VMLINUX_SYMBOL_STR(vb2_expbuf) },
	{ 0xa7d42800, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xd6eab38d, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x35d1ae9, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x3e9b7ca, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x7f507547, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x211f68f1, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x62e26f1d, __VMLINUX_SYMBOL_STR(v4l2_device_register_subdev) },
	{ 0xbf2a0906, __VMLINUX_SYMBOL_STR(media_create_pad_link) },
	{ 0xb1683477, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xd7eb86ec, __VMLINUX_SYMBOL_STR(vb2_reqbufs) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2faa3c3b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf74cb426, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x5b205e34, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x69e43cfd, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x7b0c9104, __VMLINUX_SYMBOL_STR(v4l2_subdev_init) },
	{ 0x1226bdb6, __VMLINUX_SYMBOL_STR(ex_handler_default) },
	{ 0xc2791aa5, __VMLINUX_SYMBOL_STR(__media_device_register) },
	{ 0x430e6329, __VMLINUX_SYMBOL_STR(vb2_dqbuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xff239f48, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xd3a12fbd, __VMLINUX_SYMBOL_STR(usb_match_one_id) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xc7e1792b, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xc9e98086, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xced6bcd8, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x427c581c, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0x41162af8, __VMLINUX_SYMBOL_STR(v4l2_fh_del) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x225702a5, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3d0fcdcb, __VMLINUX_SYMBOL_STR(vb2_poll) },
	{ 0xe34f2930, __VMLINUX_SYMBOL_STR(media_device_init) },
	{ 0x378eb852, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x3c5c9749, __VMLINUX_SYMBOL_STR(usb_get_current_frame_number) },
	{ 0xd56b5f64, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x40e08525, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0x362ef408, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xfacc8617, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x7ee8120a, __VMLINUX_SYMBOL_STR(vb2_streamoff) },
	{ 0x7626fbd0, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x451c6d3d, __VMLINUX_SYMBOL_STR(media_device_unregister) },
	{ 0xfce13353, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x1c9a9882, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x9d7e0a32, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x67a69d64, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xd90481ae, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x24bd9f32, __VMLINUX_SYMBOL_STR(v4l2_fh_exit) },
	{ 0x95da4ea9, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x6503a333, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,videobuf2-core,videobuf2-v4l2,videobuf2-vmalloc,media";

MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0721d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp082Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2641d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2643d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p264Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p7670d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8600d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0516d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0201d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0211d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");

MODULE_INFO(srcversion, "7F8D2C25FA96EA8C95D7738");
