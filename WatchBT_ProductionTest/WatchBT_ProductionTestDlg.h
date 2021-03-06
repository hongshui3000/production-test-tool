// WatchBT_ProductionTestDlg.h : header file
//

#pragma once

//debug mode without Endpoint
#define DESIGN_MODE 
#undef DESIGN_MODE
#ifdef DESIGN_MODE
	#undef PERIPHERAL_CONNECTION 
	#undef ENPOINT_FUNCTIONALITY 
#else
	#define PERIPHERAL_CONNECTION 
	#define ENPOINT_FUNCTIONALITY 
#endif

#define OLED_TEST //display check by setting every pixel on 
#define ACCELEROMETER_TEST // check if accel is working fine by reading device id
#define FLASH_CHECK  //ext flash testing
#define SPI_PORT_LOCK //disable spi access
#define FACTORY_ENABLE //enable factory settings
#define USB_ENABLE // host interface in bootmode 1 : USB Link
#define BADDLICENSE_WRITE // baddress + license write into pskey's
#define PAIRING_INFO_WRITE // only for product testing...erased later on
#define PAIRING_INFO_CLEAR // clear pairing info
//#define AUTO_PAIRING//Test code
#ifdef USB_ENABLE
#define ENABLE_USB 0x0002
#define HOST_INTERFACE 505
#endif

#ifdef ACCELEROMETER_TEST
#define ACCELEROMETER_SLAVE_ADDRESS 0x38
#define WHO_AM_I 0x0D
#endif

#ifdef FACTORY_ENABLE
#define ENABLE_AUTO_DISCOVERABLE 0x1000
#define PSKEY_USER15 0x0299
#define ENABLE_AUTO_PAIRING_ON_POWER_ON 0x2000
#define DISABLE_AUTO_PAIRING_ON_POWER_ON 0xDFFF
#define DISABLE_AUTO_DISCOVERABLE 0xEFFF
#define HID_DEVICE_CLASS_CODE 0x02bd
#define HID_PRODUCT_ID 0x02bf
#define PRODUCT_ID 0x0002
#define USB_CONFIG 0x02d9
#define USB_CONFIG_ID 0x0038
#define USB_VM_CONTROL 0x03c0
#define USB_VM_CONTROL_ID 0x0001
#define USER_CONFIGURATION_DATA_43 0x2b5
#define USER_CONFIGURATION_DATA_49 0x2bb
#define USER_CONFIGURATION_DATA_12 0x296
#endif 

#ifdef SPI_PORT_LOCK //disable SPI access
#define SPI_LOCKED 0x03
//#define TEST_CODE
#define SPI_UNLOCKED_CUSTOMER_KEY_SET 0x02
#define SPI_UNLOCKED_CUSTOMER_KEY_NOT_SET 0x0
#endif

#ifdef BADDLICENSE_WRITE
//#define BLUETOOTH_TESTCODE
#define BLUETOOTH_ADDRESS 0x0001
#define LICENSE_KEY 0x2288
#define LICENSE_KEY_LENGTH 5
#define BLUETOOTH_ADDRESS_LENGTH 4
//John 07302015
#define SERIALNUMBER_ADDRESS 0x02b2
#define SERIALNUMBER_LENGTH 10
#endif

#ifdef PAIRING_INFO_WRITE
//#define PAIRING_INFO_TEST_CODE
//#define PAIRING_INFO_CLEAR_TEST_CODE
#define PAIRING_INFO_LENGTH 5
#define FIRST_PAIRING_DEVICE_LENGTH 2
#define PAIRING_INFO 0x02aa
#define FIRST_PAIRING_DEVICE_INFO 0x2637
#define RANDOM_DATA_SAMPLE 0x2638
#endif

#ifdef OLED_TEST
#define DISPLAY_OFF 			0xAE
#define SET_DISPLAY_CLOCK_DIV 	0xD5
#define SET_MULTIPLEX 			0xA8
#define ENTIRE_DISPLAY_ON       0xA5
#define SET_DISPLAY_OFFSET 		0xD3
#define SET_START_LINE 			0x40
#define CHARGE_PUMP 			0x8D
#define MEMORY_MODE 			0x20
#define SEGMENT_RE_MAP 			0xA1
#define COM_SCAN_DIRECTION 		0xC8
#define SET_COM_PINS 			0xDA
#define SET_CONTRAST 			0x81
#define SET_PRECHARGE 			0xD9
#define SET_VCOM_DETECT 		0xDB
#define DISPLAY_ON_RESUME 		0xA4
#define SET_NORMAL_DISPLAY 		0xA6
#define SET_INVERTED_DISPLAY 	0xA7
#define DISPLAY_ON 				0xAF
#define SET_LOW_COLUMN 			0x00
#define SET_HIGH_COLUMN 		0x10
#define SET_ADDRESSING_MODE     0x0120
//#define SET_COLUMN_ADDRESS	    0x5F0021
#define SET_COLUMN_ADDRESS      0x6F1021  //modified for new oled
#define SET_PAGE_ADDRESS        0x030222
#define MORE_DATA_TO_APPEND     0x01
#define PRIORITY_INDICATION_MASK     0x0F
#define FLAGS_INDICATION_MASK  0xF0
#define TURN_OFF_DISPLAY        0x80
#define ERROR_CODE              0x80
#define CONTROL_BYTE_CMD                 0x00
#define CONTROL_BYTE_CMD_CONTINUATION    0x80
#define CONTROL_BYTE_DATA                0x40
#define CONTROL_BYTE_DATA_CONTINUATION   0xC0
#define I2CSEND_FIRST_COMMAND   0x01
#define I2CSEND_LAST_COMMAND    0x02
#define I2CSEND_CONT_COMMAN     0x00
#define I2C_SEND_ONLY_COMMAND   0x03
#define SELECTED_FONT_HEIGHT 12
#define MAXIMUM_FONT_WIDTH 15
#define MAX_STRING_LENGTH 96
/* Slave Address, R/W allocations*/
#define OLED_SLAVE_ADDRESS      0x78
#define I2C_CONTROL_CMD_VAL     0x00
#define I2C_CONTROL_DATA_VAL    0x40
#endif

#define MAX_CSR_DEVICES /*2*/3

#define PSKEY_INITIAL_BOOTMODE	0x03cd
#define PSKEY_USER33			0x02ab

/*Seavia 20150910 move #define from .cpp to .h */
#define NUM_OF_PRODUCT_TEST_ROUTINES /*7*/6
#define NUM_OF_PCB_TEST_ROUTINES 12 /*13*/

//#define CONFIG_FILE_NAME "..\\config\\config.txt"
#define LOG_DIRECTORY_NAME "..\\Logs"
#define LOG_FILE_EXT ".txt"
#define AVAIL_BLUETOOTH_ADDR_LIST_FILENAME "..\\config\\BluetoothAddrsList.txt"
#define ASSIGNED_BLUETOOTH_ADDR_LIST_FILENAME "..\\config\\AsssignedBluetoothAddrsList.txt"
#define AVAIL_SERIAL_NUMBERS_FILENAME "..\\config\\SerialNumbersList.txt"
#define ASSIGNED_SERIAL_NUMBERS_FILENAME "..\\config\\AssignedSerialNumbersList.txt" 
#define PAIRING_INFO_FILENAME "..\\config\\PairingInfo.txt"
#define MODEL_SELECTION_FILE_NAME "..\\config\\model_selection.txt" 
#define TEST_TYPE_SELECTION_FILE_NAME "..\\config\\test_type_selection.txt"

#if 1 /*Seavia 20150810 import model list from config file*/
#define MODEL_LIST_FILE_NAME "..\\config\\models.txt"
#endif
#define DUT_NAP 0x600f
#define DUT_UAP 0x77

#define PERIPHIRAL_ID_DUT          0x0001
#define PERIPHIRAL_ID_GPIOBOARD    0x0002
#define PERIPHIRAL_ID_MULTIMETER   0x0004
#define PERIPHIRAL_ID_REFENDPOINT  0x0008
#define PERIPHIRAL_ID_TRANSMIT_MODULE 0x0010

#define TEST_TYPE_STR "TEST_TYPE"
#define CRYSTAL_TRIM_OFFSET_LIMIT_STR "CRYSTAL_TRIM_OFFSET_LIMIT"
#define ATTENUATION_STR "ATTENUATION"
#define DUT_OUTPUT_POWER_MIN_LIMIT_STR "DUT_OUTPUT_POWER_MIN_LIMIT"
#define DUT_OUTPUT_POWER_MAX_LIMIT_STR "DUT_OUTPUT_POWER_MAX_LIMIT"
#define REF_END_POINT_OUTPUT_POWER_STR "REF_END_POINT_OUTPUT_POWER"
#define DUT_TRANSMIT_INTERNAL_PA_VALUE_STR "DUT_TRANSMIT_INTERNAL_PA_VALUE"
#define SP_MODULE_TRANSMIT_INTERNAL_PA_VALUE_STR "SP_MODULE_TRANSMIT_INTERNAL_PA_VALUE"
#define REFERENCE_ENDPOINT_INTERNAL_PA_VALUE_STR "REFERENCE_ENDPOINT_INTERNAL_PA_VALUE"
#define DUT_BER_PERCENTAGE_MAX_LIMIT_STR "DUT_BER_PERCENTAGE_MAX_LIMIT"
#define DUT_PACKETS_LOSS_PERCENTAGE_MAX_LIMIT_STR "DUT_PACKETS_LOSS_PERCENTAGE_MAX_LIMIT" 
#define GPIO_COM_NUM_STR "USB_COMMUNICATIONS_PORT_COM_NUM"
//#define GPIO_COM_NUM_STR "NUMATO_LAB_8_CHANNEL_USB_GPIO_MODULE"
#define MULTIMETER_COM_NUM_STR "SILICON_LABS_CP210x_USB_TO_UART_BRIDGE_COM_NUM"
#define DUT_STANDBY_CURRENT_MAX_LIMIT_STR "DUT_STANDBY_CURRENT_MAX_LIMIT"
#define DUT_PEAK_CURRENT_MAX_LIMIT_STR "DUT_PEAK_CURRENT_MAX_LIMIT"
#define DUT_CHARGING_CURRENT_MIN_LIMIT_STR "DUT_CHARGING_CURRENT_MIN_LIMIT"
#define DUT_CHARGING_CURRENT_MAX_LIMIT_STR "DUT_CHARGING_CURRENT_MAX_LIMIT"

#define V18_POWER_SUPPLY_MIN_LIMIT_STR "V18_POWER_SUPPLY_MIN_LIMIT"
#define V18_POWER_SUPPLY_MAX_LIMIT_STR "V18_POWER_SUPPLY_MAX_LIMIT"
#define V135_POWER_SUPPLY_MIN_LIMIT_STR "V135_POWER_SUPPLY_MIN_LIMIT"
#define V135_POWER_SUPPLY_MAX_LIMIT_STR "V135_POWER_SUPPLY_MAX_LIMIT"
#define V33_POWER_SUPPLY_MIN_LIMIT_STR "V33_POWER_SUPPLY_MIN_LIMIT"
#define V33_POWER_SUPPLY_MAX_LIMIT_STR "V33_POWER_SUPPLY_MAX_LIMIT"

#define PRODUCT_MICROPHONE_FFT_SIGNAL_1K_FREQ_MIN_LIMIT_STR		    "PRODUCT_MICROPHONE_FFT_SIGNAL_1K_FREQ_MIN_LIMIT"
#define PRODUCT_MICROPHONE_FFT_NOISE_FLOOR_MAX_LIMIT_STR			"PRODUCT_MICROPHONE_FFT_NOISE_FLOOR_MAX_LIMIT"
#define PRODUCT_MICROPHONE_FFT_NOISE_FLOOR_2K_FREQ_MAX_LIMIT_STR	"PRODUCT_MICROPHONE_FFT_NOISE_FLOOR_2K_FREQ_MAX_LIMIT"
#define PRODUCT_MICROPHONE_FFT_NOISE_FLOOR_3K_FREQ_MAX_LIMIT_STR	"PRODUCT_MICROPHONE_FFT_NOISE_FLOOR_3K_FREQ_MAX_LIMIT"

#define PRODUCT_SPEAKER_FFT_SIGNAL_1K_FREQ_MIN_LIMIT_STR		    "PRODUCT_SPEAKER_FFT_SIGNAL_1K_FREQ_MIN_LIMIT"
#define PRODUCT_SPEAKER_FFT_NOISE_FLOOR_MAX_LIMIT_STR				"PRODUCT_SPEAKER_FFT_NOISE_FLOOR_MAX_LIMIT"
#define PRODUCT_SPEAKER_FFT_NOISE_FLOOR_2K_FREQ_MAX_LIMIT_STR		"PRODUCT_SPEAKER_FFT_NOISE_FLOOR_2K_FREQ_MAX_LIMIT"
#define PRODUCT_SPEAKER_FFT_NOISE_FLOOR_3K_FREQ_MAX_LIMIT_STR		"PRODUCT_SPEAKER_FFT_NOISE_FLOOR_3K_FREQ_MAX_LIMIT"

#define	PCB_LOOPBACK_FFT_SIGNAL_1K_FREQ_MIN_LIMIT_STR				"PCB_LOOPBACK_FFT_SIGNAL_1K_FREQ_MIN_LIMIT"
#define PCB_LOOPBACK_FFT_NOISE_FLOOR_MAX_LIMIT_STR					"PCB_LOOPBACK_FFT_NOISE_FLOOR_MAX_LIMIT"
#define PCB_LOOPBACK_FFT_NOISE_FLOOR_2K_FREQ_MAX_LIMIT_STR			"PCB_LOOPBACK_FFT_NOISE_FLOOR_2K_FREQ_MAX_LIMIT"
#define PCB_LOOPBACK_FFT_NOISE_FLOOR_3K_FREQ_MAX_LIMIT_STR			"PCB_LOOPBACK_FFT_NOISE_FLOOR_3K_FREQ_MAX_LIMIT"

#define	PCB_SPEAKER_FFT_SIGNAL_1K_FREQ_MIN_LIMIT_STR				"PCB_SPEAKER_FFT_SIGNAL_1K_FREQ_MIN_LIMIT"
#define PCB_SPEAKER_FFT_NOISE_FLOOR_MAX_LIMIT_STR					"PCB_SPEAKER_FFT_NOISE_FLOOR_MAX_LIMIT"
#define PCB_SPEAKER_FFT_NOISE_FLOOR_2K_FREQ_MAX_LIMIT_STR		    "PCB_SPEAKER_FFT_NOISE_FLOOR_2K_FREQ_MAX_LIMIT"
#define PCB_SPEAKER_FFT_NOISE_FLOOR_3K_FREQ_MAX_LIMIT_STR		    "PCB_SPEAKER_FFT_NOISE_FLOOR_3K_FREQ_MAX_LIMIT"

#define ADDRESS_LICENSEKEYINFORMATION_STR							"ADDRESS_LICENSEKEYINFORMATION"
#define PRODUCT_IGNORE_SERIAL_NUMBER_CHECK_STR						"PRODUCT_IGNORE_SERIAL_NUMBER_CHECK"
#define PRODUCT_IGNORE_HID_CHECK_STR							    "PRODUCT_IGNORE_HID_CHECK"
#define RSSI_SAMPLE_SIZE_STR										"RSSI_SAMPLE_SIZE"
#define NUM_OF_TIMES_CALCULATE_RSSI_VALUE_STR					    "NUM_OF_TIMES_CALCULATE_RSSI_VALUE"
#define EASY_FACTORY_ENABLE_STR										"EASY_FACTORY_ENABLE" 
#define FREQ_HOPPING_BER_SAMPLE_SIZE_STR							"FREQ_HOPPING_BER_SAMPLE_SIZE"
#define	BLUETOOTH_CONNECTION_WAIT_TIME_STR							"BLUETOOTH_CONNECTION_WAIT_TIME"
#define FFT_SIGNAL_FREQ_WINDOW_STR									"FFT_SIGNAL_FREQ_WINDOW"
#define MICROPHONE_TEST_WAIT_TIME_STR								"MICROPHONE_TEST_WAIT_TIME"
#define STOP_AT_FIRST_FAIL_STR										"STOP_AT_FIRST_FAIL"
#define PRODUCT_RX_RETRY_STR										"PRODUCT_RX_RETRY"
#define DUT_RESET_USING_RELAYS_STR									"DUT_RESET_USING_RELAYS"

#define DUT_POWER_MIN_LIMIT /*10.0*/ -40.0
#define DUT_POWER_MAX_LIMIT /*10.0*/ 10.0
#define DUT_BER_PERCENTAGE 1.0 /*0.1*/
#define DUT_PACKETS_LOSS_PERCENTAGE /*1.0*/ 5
//#define MIN_POWER /*-10.0*/ -70.0
#define MAX_RSSI_SAMPLE_SIZE 100

#define CRYSTAL_TRIM_OFFSET_LIMIT_MAX_RANGE 20
#define ATTENUATION_MAX_RANGE 200
#define DUT_OUTPUT_POWER_MIN_LIMIT_RANGE -500
#define DUT_OUTPUT_POWER_MAX_LIMIT_RANGE 500
#define REF_END_POINT_OUTPUT_POWER_MIN_LIMIT_RANGE -22
#define REF_END_POINT_OUTPUT_POWER_MAX_LIMIT_RANGE 6.5
#define DUT_BER_PERCENTAGE_MAX_LIMIT_RANGE /*1*/ 10.0

#if 1 /*Seavia, add SN Configuration*/
#define NUM_OF_CONFIGURATIONS 52
#else
#define NUM_OF_CONFIGURATIONS 51
#endif
#define MAX_NUMBER_OF_LICENSE_KEYS 1000
#if 1 /* Seavia, 20150612 add Serial number prefix string.*/
#define PRODUCT_FACTORY_INDICATOR_STR									"PRODUCT_FACTORY_INDICATOR"
#define MAX_PREFIX (20+3)
#define MAX_PREFIX_U16 ((MAX_PREFIX+1)/2)
#endif

#if 1 /*Seavia 20150810 import model list from config file*/
#define MAX_OF_MODELS 30
#endif

#define MAX_MULTIMETER_COMMANDS_LENGTH 30
#define MULTIMETER_CHANGE_TO_DC_CURRENT_COMMAND_STR ":func curr:dc\n"
#define MULTIMETER_CHANGE_TO_DC_VOLTAGE_COMMAND_STR ":func volt:dc\n"

#define MULTIMETER_FUNCTION_QUERY_COMMAND_STR ":func?\n"

#define MULTIMETER_CHANGE_TO_DC_CURRENT_RESP_STR "curr:dc"
#define MULTIMETER_CHANGE_TO_DC_VOLTAGE_RESP_STR "volt:dc"

#define MULTIMETER_GET_MEASUREMENT_COMMAND_STR ":fetc?\n"

#define MULTIMETER_CHANGE_DC_CURRENT_RANGE_TO_2_AMP_COMMAND_STR ":curr:dc:rang:upp 5\n" //for new multimeter
#define MULTIMETER_CHANGE_DC_VOLTAGE_RANGE_TO_2_AMP_COMMAND_STR ":volt:dc:rang:upp 5\n"
#define MULTIMETER_CHANGE_DC_CURRENT_RANGE_TO_50_uAMP_COMMAND_STR ":curr:dc:rang 0.05\n" //for new multimeter
#define MULTIMETER_CHANGE_DC_CURRENT_RANGE_TO_500_uAMP_COMMAND_STR ":curr:dc:rang 0.5\n" //for new multimeter

//#define MULTIMETER_CHANGE_DC_CURRENT_RANGE_TO_2_AMP_COMMAND_STR ":curr:dc:rang:upp 5\n" //for new multimeter
//#define MULTIMETER_CHANGE_DC_VOLTAGE_RANGE_TO_2_AMP_COMMAND_STR ":volt:dc:rang:upp 5\n"
#define MULTIMETER_CHANGE_DC_CURRENT_RANGE_QUERY_COMMAND_STR ":curr:dc:rang:upp?\n"
#define MULTIMETER_CHANGE_DC_VOLTAGE_RANGE_QUERY_COMMAND_STR ":volt:dc:rang:upp?\n"
#define MULTIMETER_CHANGE_DC_CURRENT_RANGE_TO_2_AMP_RESP_STR ":curr:dc:rang:upp?\n5" //for new multimeter
#define MULTIMETER_CHANGE_DC_VOLTAGE_RANGE_TO_2_AMP_RESP_STR ":volt:dc:rang:upp?\n5"

//#define MULTIMETER_CHANGE_DC_CURRENT_RANGE_TO_AUTO_COMMAND_STR ":curr:dc:rang:auto 1\n"
//#define MULTIMETER_CHANGE_DC_VOLTAGE_RANGE_TO_AUTO_COMMAND_STR ":volt:dc:rang:auto 1\n"

//#define MULTIMETER_CHANGE_DC_CURRENT_RANGE_TO_AUTO_QUERY_COMMAND_STR ":curr:dc:rang:auto?\n"
//#define MULTIMETER_CHANGE_DC_VOLTAGE_RANGE_TO_AUTO_QUERY_COMMAND_STR ":volt:dc:rang:auto?\n"

//#define MULTIMETER_CHANGE_DC_CURRENT_RANGE_TO_AUTO_QUERY_COMMAND_STR ":curr:dc:rang:auto?\n"
//#define MULTIMETER_CHANGE_DC_VOLTAGE_RANGE_TO_AUTO_QUERY_COMMAND_STR ":volt:dc:rang:auto?\n"

//#define MULTIMETER_CHANGE_DC_CURRENT_RANGE_TO_AUTO_RESP_STR ":curr:dc:rang:auto?\n1"
//#define MULTIMETER_CHANGE_DC_VOLTAGE_RANGE_TO_AUTO_RESP_STR ":volt:dc:rang:auto?\n1"


/*Seavia 20150910 move #define from .cpp to .h */

enum {
	UNKNOWN = 0,
	CSR_REFERENCE_END_POINT,
	SILVERPLUS_DUT, 
	SILVERPLUS_TRANSMIT_MODULE
};

enum {
	BLUETOOTH_DEVICE_SPEAKER_TEST = 1,
	BLUETOOTH_DEVICE_MICROPHONE_TEST,
	PCB_LOOPBACK_TEST,
	PCB_SPEAKER_TEST
};

enum {
	LOW = 0,
	HIGH
};

enum {
	INVALID_MEASUREMENT = 0,
	CURRENT_MEASUREMENT, 
	VOLTAGE_MEASUREMENT
};

enum {
	INVALID_IO_TYPE = 0,
	DIGITAL_IO,
	ANALOG_IO
};

enum {
	USB_CONNECTION = 0,
	SPI_CONNECTION
};

enum {
	V33_IO_PIN_NUM  = 0,
	V18_IO_PIN_NUM,
	V135_IO_PIN_NUM,
	BUTTON_2_PIN_NUM,
	VCHARGE_IO_PIN_NUM,
	VBAT_IO_PIN_NUM,
	BUTTON_1_PIN_NUM,
	USB_ENABLE_PIN_NUM
};

enum {
	BLACK = 0,
	RED,
	GREEN,
	GREY
};

enum {
	NOT_STARTED = -2,
	FAILURE1,
	FAILURE2, 
	SUCCESS,
	CHECK_DISPLAY_FOR_SUCCESS_OR_FAILURE,
	WRITE_BT_ADDR_OR_LICENSE_KEY_FAILED,
	NO_AVAIL_BT_ADDR,
	WRITE_PAIRING_INFO_FAILED,
	NOT_COMPLETE,
	NO_AVAIL_SERIAL_NUMBER,
	WRITE_SERIAL_NUMBER_FAILED, 
	NO_AVAIL_LICENSE_KEY
};

enum {
	PCB_TEST = 0,
	PRODUCT_TEST
};

#if 1/* Seavia 20150810, Config file enum*/
enum {
	CONFIG_NOTIFIER = 0,
	CONFIG_PVC,
	CONFIG_SVC,
	CONFIG_GVC41,
	CONFIG_GVC45,
	CONFIG_MODEL_QTY
};
#endif

#define	FFT_FAILED_AT_1K 0x1
#define	FFT_FAILED_AT_2K 0x2
#define	FFT_FAILED_AT_3K 0x4
#define	FFT_FAILED_AT_OTHER_FREQ 0x8


#define PSKEY_USER40 0x02b2

#if 1 /*Seavia 20150903 add project information, model name and FW version, store in pskey USER34*/

#define PSKEY_USER34 0x02ac
enum {
	MVS01 = 0,
	MNR01,
	MVS02, /*MVS02 & MVR02*/
	GVS02,
	MODEL_INFO_QTY
};
#endif


#if 0 /* Seavia 20150810, read model list from models.txt, change NUM_OF_MODELS to be a variable*/
#define NUM_OF_MODELS 3
#endif
#if 1 /* Seavia 20150810, add Test software Version */
	  /* John 20150818, V58 fix serial number, add logs to failure of serial number */
	  /* John 20150824, V60 put logs in timestamp folder */
	  /* John 20150827, V61 add serial number to log file and Main log */
	  /* Seavia 20150903, V62 Fix serial number issue : can't represent Sep., miss 9 in the month array  */
	  /* Seavia 20150903, V63 per Winner request, standby current <= 0 should return fail  */
	  /* Seavia 20150903, V64 per Winner request, fix peak current read error  */
	  /* Seavia 20150903, V65 per Richard request, add project information, model, and FW version  */
	  /* Winner 20151015, V66 per add 50mA Test current fix offset current" */
#define TEST_SW_VERSION "(V66)"
#endif

	                                       
										  
                                         

// CWatchBT_ProductionTestDlg dialog
class CWatchBT_ProductionTestDlg : public CDialog
{
// Construction
public:
	CWatchBT_ProductionTestDlg(CWnd* pParent = NULL);	// standard constructor
	CBrush* brush;
	~CWatchBT_ProductionTestDlg();
// Dialog Data
	enum { IDD = IDD_WATCHBT_PRODUCTIONTEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCheck3();
	afx_msg void OnBnClickedCheck4();
	afx_msg void OnLvnItemchangedList2(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedRestore();
	
	afx_msg void OnBnClickedStartPcbTest();

	afx_msg void OnBnClickedStartProductTest();
//	afx_msg void OnCbnSelchangeComboModelSelection();
//	afx_msg void OnCbnSelchangeComboModelSelection();
	afx_msg void OnCbnSelchangeComboModelSelection();
	afx_msg void OnCbnSelchangeComboTestTypeSelection();
	CString fwVer;
};

