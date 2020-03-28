/*
 * Automatically generated C config: don't edit
 * Busybox version: 
 */
#define AUTOCONF_TIMESTAMP "2018-11-15 09:07:56 CST"


/*
 * General Setup
 */
#define CONFIG_HI3519AV100 1
#define CONFIG_HI_CHIP_TYPE 0x3519A100
#define CONFIG_HI_ARCH "hi3519av100"
#define CONFIG_SUBCHIP_HI3519AV100 1
#define CONFIG_HI_SUBARCH "hi3519av100"
#define CONFIG_HI_SUBCHIP_TYPE 0x3519A100
#define CONFIG_SMP 1
#define CONFIG_ARM_ARCH_TYPE "smp"
#define CONFIG_A53 1
#define CONFIG_CPU_TYPE "a53"
#define CONFIG_VERSION_ASIC 1
#define CONFIG_HI_FPGA "n"
#define CONFIG_LINUX_OS 1
#define CONFIG_OS_TYPE "linux"
#define CONFIG_LINUX_4_9_y 1
#define CONFIG_KERNEL_VERSION "linux-4.9.y"
#define CONFIG_KERNEL_ARM_HIMIX200_LINUX 1
#define CONFIG_HI_CROSS "arm-himix200-linux-"
#define CONFIG_LIBC_TYPE "glibc"
#define CONFIG_KERNEL_BIT "KERNEL_BIT_32"
#define CONFIG_USER_ARM_HIMIX200_LINUX 1
#define CONFIG_HI_CROSS_LIB "arm-himix200-linux-"
#define CONFIG_USER_BIT "USER_BIT_32"
#define CONFIG_RELEASE_TYPE_RELEASE 1
#define CONFIG_HI_RLS_MODE "HI_RELEASE"

/*
 * Media Modules Setup
 */

/*
 * media base config
 */
#define CONFIG_HI_VB_EXTPOOL_SUPPORT 1

/*
 * media sys config
 */
#define CONFIG_HI_SYS_SUPPORT 1
#define CONFIG_HI_SYS_SCALE_COEF_SUPPORT 1
#define CONFIG_HI_SYS_SCALE_COEF_ONLINE_SUPPORT 1

/*
 * media vi config
 */
#define CONFIG_HI_VI_SUPPORT 1
#define CONFIG_HI_VI_BT656 1
#define CONFIG_HI_VI_MIPI 1
#define CONFIG_HI_ISP_2DOF_DIS_SUPPORT 1
#define CONFIG_HI_VI_LDCV1_SUPPORT 1
#define CONFIG_HI_VI_LDCV2_SUPPORT 1
#define CONFIG_HI_VI_SENDYUV_SUPPORT 1
#define CONFIG_HI_VI_SRC_SUPPORT 1
#define CONFIG_HI_VI_STITCH_SUPPORT 1
#define CONFIG_HI_VI_CHN_EARLY_INT_SUPPORT 1
#define CONFIG_HI_VI_3DNRX_SUPPORT 1
#define CONFIG_HI_VI_USERPIC_SUPPORT 1
#define CONFIG_HI_VI_COVEREX_OVERLAYEX_SUPPORT 1
#define CONFIG_HI_VI_LUMA_SUPPORT 1
#define CONFIG_HI_VI_FPN_SUPPORT 1
#define CONFIG_HI_VI_EXTCHN_SUPPORT 1
#define CONFIG_HI_SNAP_SUPPORT 1

/*
 * media isp config
 */
#define CONFIG_HI_ISP_SUPPORT 1

/*
 * media dis config
 */
#define CONFIG_HI_DIS_SUPPORT 1

/*
 * media vpss config
 */
#define CONFIG_HI_VPSS_SUPPORT 1
#define CONFIG_HI_VPSS_SHARPEN 1
#define CONFIG_HI_VPSS_3DNR 1

/*
 * media avs config
 */
#define CONFIG_HI_AVS_SUPPORT 1

/*
 * media gdc config
 */
#define CONFIG_HI_GDC_SUPPORT 1
#define CONFIG_HI_GDC_FISHEYE_SUPPORT 1

/*
 * media vgs config
 */
#define CONFIG_HI_VGS_SUPPORT 1
#define CONFIG_HI_VGS_STITCH_SUPPORT 1

/*
 * media chnl config
 */
#define CONFIG_HI_CHNL_SUPPORT 1

/*
 * media venc config
 */
#define CONFIG_HI_VENC_SUPPORT 1
#define CONFIG_HI_H265E_SUPPORT 1
#define CONFIG_HI_H264E_SUPPORT 1
#define CONFIG_HI_JPEGE_SUPPORT 1
#define CONFIG_HI_LOWDELAY_SUPPORT 1
#define CONFIG_HI_JPEGE_DCF 1
#define CONFIG_HI_BIPREDB_SUPPORT 1

/*
 * media vdec config
 */
#define CONFIG_HI_VDEC_SUPPORT 1
#define CONFIG_HI_H265D_SUPPORT 1
#define CONFIG_HI_H264D_SUPPORT 1
#define CONFIG_VDEC_IP "VDEC_IP_VDH"
#define CONFIG_HI_JPEGD_SUPPORT 1
#define CONFIG_VDEC_ROTATION_SUPPORT 1
#define CONFIG_VDEC_USERPIC_SUPPORT 1
#define CONFIG_VDEC_USERDATA_SUPPORT 1

/*
 * media vo config
 */
#define CONFIG_HI_VO_SUPPORT 1
#define CONFIG_HI_VO_HD 1
#define CONFIG_HI_VO_PLAY_CTL 1
#define CONFIG_HI_VO_LUMA 1
#define CONFIG_HI_VO_COVER_OSD_SUPPORT 1
#define CONFIG_HI_VO_VGS 1
#define CONFIG_HI_VO_GRAPH 1
#define CONFIG_HI_VO_BATCH 1
#define CONFIG_HI_VO_WBC 1

/*
 * media region config
 */
#define CONFIG_HI_REGION_SUPPORT 1

/*
 * media audio config
 */
#define CONFIG_HI_AUDIO_SUPPORT 1
#define CONFIG_HI_ACODEC_SUPPORT 1
#define CONFIG_HI_ACODEC_VERSION "V900"
#define CONFIG_HI_ACODEC_MAX_GAIN 56
#define CONFIG_HI_ACODEC_MIN_GAIN 0
#define CONFIG_HI_ACODEC_GAIN_STEP 3
#define CONFIG_HI_ACODEC_FAST_POWER_SUPPORT 1
#define CONFIG_HI_DOWNVQE_SUPPORT 1
#define CONFIG_HI_TALKVQE_SUPPORT 1
#define CONFIG_HI_RECORDVQE_SUPPORT 1

/*
 * media hdr config
 */

/*
 * media mcf config
 */

/*
 * Device Driver Setup
 */

/*
 * drv config
 */
#define CONFIG_DRV 1
#define CONFIG_EXTDRV 1
#define CONFIG_INTERDRV 1
#define CONFIG_CIPHER 1
#define CONFIG_HIUSER 1
#define CONFIG_MIPI_TX 1
#define CONFIG_MIPI_RX 1
#define CONFIG_HI_IR 1
#define CONFIG_HI_WDG 1
#define CONFIG_HI_SYSCFG 1

/*
 * Component Setup
 */

/*
 * Component hdmi Config
 */
#define CONFIG_HI_HDMI_SUPPORT 1

/*
 * Component hifb Config
 */
#define CONFIG_HI_HIFB_SUPPORT 1

/*
 * Component svp Config
 */
#define CONFIG_HI_SVP_SUPPORT 1
#define CONFIG_HI_SVP_DSP 1
#define CONFIG_HI_SVP_LITEOS 1
#define CONFIG_HI_SVP_CNN 1
#define CONFIG_HI_SVP_IVE 1
#define CONFIG_HI_SVP_MD 1
#define CONFIG_HI_SVP_DPU_RECT 1
#define CONFIG_HI_SVP_DPU_MATCH 1

/*
 * Component photo Config
 */

/*
 * Component tde Config
 */
#define CONFIG_HI_TDE_SUPPORT 1

/*
 * Component pciv Config
 */

/*
 * Component avs lut Config
 */
#define CONFIG_HI_AVS_LUT_SUPPORT 1

/*
 * Component pos_query Config
 */
#define CONFIG_HI_POS_QUERY_SUPPORT 1

/*
 * Component tzasc Config
 */

/*
 * Component motionfusion config
 */

/*
 * Component pm Config
 */

/*
 * HISYSLINK Setup
 */

/*
 * hisyslink config
 */
#define CONFIG_HISYSLINK 1

/*
 * Debug Config
 */
#define CONFIG_HI_GDB_NO 1
#define CONFIG_HI_GDB "n"
#define CONFIG_HI_LOG_TRACE_SUPPORT 1
#define CONFIG_HI_LOG_TRACE_ALL 1
#define CONFIG_HI_LOG_TRACE_LEVEL 7

/*
 * Test Config
 */