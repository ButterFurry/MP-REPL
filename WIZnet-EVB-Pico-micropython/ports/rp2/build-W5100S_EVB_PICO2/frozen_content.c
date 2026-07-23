//
// Content for MICROPY_MODULE_FROZEN_STR
//
#include <stdint.h>
#define MP_FROZEN_STR_NAMES \

const uint32_t mp_frozen_str_sizes[] = { 0 };
const char mp_frozen_str_content[] = {
"\0"
};

//
// Content for MICROPY_MODULE_FROZEN_MPY
//
#include "py/mpconfig.h"
#include "py/objint.h"
#include "py/objstr.h"
#include "py/emitglue.h"
#include "py/nativeglue.h"

#if MICROPY_LONGINT_IMPL != 2
#error "incompatible MICROPY_LONGINT_IMPL"
#endif

#if MPZ_DIG_SIZE != 16
#error "incompatible MPZ_DIG_SIZE"
#endif

#if MICROPY_PY_BUILTINS_FLOAT
typedef struct _mp_obj_float_t {
    mp_obj_base_t base;
    mp_float_t value;
} mp_obj_float_t;
#endif

#if MICROPY_PY_BUILTINS_COMPLEX
typedef struct _mp_obj_complex_t {
    mp_obj_base_t base;
    mp_float_t real;
    mp_float_t imag;
} mp_obj_complex_t;
#endif

enum {
    MP_QSTR__0x0d__0x0a__0x0d__0x0a_ = MP_QSTRnumber_of,
    MP_QSTR__bang_I,
    MP_QSTR__dot_json,
    MP_QSTR__dot_mpy,
    MP_QSTR__dot_py,
    MP_QSTR__slash__hyphen__slash_raw_slash_,
    MP_QSTR__slash_rom,
    MP_QSTR_0_0x0d__0x0a__0x0d__0x0a_,
    MP_QSTR_0_dot_0_dot_0_dot_0,
    MP_QSTR_0_dot_1_dot_0,
    MP_QSTR_0_dot_1_dot_1,
    MP_QSTR_0_dot_10_dot_2,
    MP_QSTR_0_dot_2_dot_1,
    MP_QSTR_0_dot_4_dot_2,
    MP_QSTR_0_dot_8_dot_0,
    MP_QSTR__colon_,
    MP_QSTR_Authorization,
    MP_QSTR_BASE,
    MP_QSTR_Basic_space__brace_open__brace_close_,
    MP_QSTR_CRC_space_error,
    MP_QSTR_Connection,
    MP_QSTR_Content_hyphen_Length,
    MP_QSTR_Content_hyphen_Type,
    MP_QSTR_Copying_colon_,
    MP_QSTR_DEBUG,
    MP_QSTR_DELETE,
    MP_QSTR_DHT11,
    MP_QSTR_DHT22,
    MP_QSTR_DHTBase,
    MP_QSTR_DS18X20,
    MP_QSTR_Done,
    MP_QSTR_Downloading_space__brace_open__brace_close__space_to_space__brace_open__brace_close_,
    MP_QSTR_Error,
    MP_QSTR_Event,
    MP_QSTR_Exists_colon_,
    MP_QSTR_File_space_not_space_found_colon__space__brace_open__brace_close__space__brace_open__brace_close_,
    MP_QSTR_GET,
    MP_QSTR_H,
    MP_QSTR_HEAD,
    MP_QSTR_Host,
    MP_QSTR_IOQueue,
    MP_QSTR_Installing_space__brace_open__brace_close__space_to_space__brace_open__brace_close_,
    MP_QSTR_LIST,
    MP_QSTR_Lock,
    MP_QSTR_Lock_space_not_space_acquired,
    MP_QSTR_Loop,
    MP_QSTR_MATCH_ROM,
    MP_QSTR_NeoPixel,
    MP_QSTR_ORDER,
    MP_QSTR_OneWire,
    MP_QSTR_OneWireError,
    MP_QSTR_PASS,
    MP_QSTR_PATCH,
    MP_QSTR_PIOASMEmit,
    MP_QSTR_PIOASMError,
    MP_QSTR_PORT,
    MP_QSTR_POST,
    MP_QSTR_PUT,
    MP_QSTR_Package_space_not_space_found_colon_,
    MP_QSTR_Response,
    MP_QSTR_SEARCH_ROM,
    MP_QSTR_SET,
    MP_QSTR_SETTINGS_FILE,
    MP_QSTR_SKIP_ROM,
    MP_QSTR_Sec_hyphen_WebSocket_hyphen_Key_colon_,
    MP_QSTR_Server,
    MP_QSTR_SingletonGenerator,
    MP_QSTR_Stream,
    MP_QSTR_StreamReader,
    MP_QSTR_StreamWriter,
    MP_QSTR_ThreadSafeFlag,
    MP_QSTR_TimeoutError,
    MP_QSTR_Transfer_hyphen_Encoding,
    MP_QSTR_Unsupported_space_,
    MP_QSTR_Unsupported_space_epoch_colon__space__brace_open__brace_close_,
    MP_QSTR_Unsupported_space_protocol_colon__space_,
    MP_QSTR__Remove,
    MP_QSTR___version__,
    MP_QSTR__attrs,
    MP_QSTR__boot_dot_py,
    MP_QSTR__boot_fat_dot_py,
    MP_QSTR__cache,
    MP_QSTR__cached,
    MP_QSTR__check_exists,
    MP_QSTR__chunk,
    MP_QSTR__context,
    MP_QSTR__dequeue,
    MP_QSTR__download_file,
    MP_QSTR__enqueue,
    MP_QSTR__ensure_path_exists,
    MP_QSTR__exc_context,
    MP_QSTR__exc_handler,
    MP_QSTR__install_json,
    MP_QSTR__install_package,
    MP_QSTR__io_queue,
    MP_QSTR__load_from_disk,
    MP_QSTR__lock,
    MP_QSTR__ow,
    MP_QSTR__pio_directives,
    MP_QSTR__pio_funcs,
    MP_QSTR__pio_instructions,
    MP_QSTR__promote_to_task,
    MP_QSTR__rewrite_url,
    MP_QSTR__run,
    MP_QSTR__search_rom,
    MP_QSTR__serve,
    MP_QSTR__stop_task,
    MP_QSTR__stopper,
    MP_QSTR_accept_conn,
    MP_QSTR_accept_handler,
    MP_QSTR_aclose,
    MP_QSTR_all_items,
    MP_QSTR_allow_custom_commands,
    MP_QSTR_allowed_mip_url_prefixes,
    MP_QSTR_application_slash_json,
    MP_QSTR_ascii,
    MP_QSTR_asm_pio,
    MP_QSTR_asyncio,
    MP_QSTR_asyncio_slash___init___dot_py,
    MP_QSTR_asyncio_slash_core_dot_py,
    MP_QSTR_asyncio_slash_event_dot_py,
    MP_QSTR_asyncio_slash_funcs_dot_py,
    MP_QSTR_asyncio_slash_lock_dot_py,
    MP_QSTR_asyncio_slash_stream_dot_py,
    MP_QSTR_attr,
    MP_QSTR_auth,
    MP_QSTR_autopull,
    MP_QSTR_autopush,
    MP_QSTR_aw,
    MP_QSTR_awrite,
    MP_QSTR_awritestr,
    MP_QSTR_backlog,
    MP_QSTR_bdev,
    MP_QSTR_block,
    MP_QSTR_boot_dot_py,
    MP_QSTR_bpp,
    MP_QSTR_branch,
    MP_QSTR_cadata,
    MP_QSTR_cafile,
    MP_QSTR_call_exception_handler,
    MP_QSTR_can_squot_t_space_gather,
    MP_QSTR_cb,
    MP_QSTR_cert,
    MP_QSTR_cert_reqs,
    MP_QSTR_certfile,
    MP_QSTR_checksum_space_error,
    MP_QSTR_chunked,
    MP_QSTR_cl,
    MP_QSTR_client_s,
    MP_QSTR_cond,
    MP_QSTR_config_space_server_space_error_colon_,
    MP_QSTR_config_dot_py,
    MP_QSTR_content,
    MP_QSTR_context,
    MP_QSTR_convert_temp,
    MP_QSTR_core,
    MP_QSTR_coro_equals_,
    MP_QSTR_coroutine_space_expected,
    MP_QSTR_create_task,
    MP_QSTR_current_task,
    MP_QSTR_dec,
    MP_QSTR_default_exception_handler,
    MP_QSTR_delay,
    MP_QSTR_delay_space_too_space_large,
    MP_QSTR_delay_max,
    MP_QSTR_delete,
    MP_QSTR_deps,
    MP_QSTR_dest,
    MP_QSTR_dht_dot_py,
    MP_QSTR_diff,
    MP_QSTR_do_handshake,
    MP_QSTR_drain,
    MP_QSTR_ds18x20_dot_py,
    MP_QSTR_dt,
    MP_QSTR_duplicate_space_label_space__brace_open__brace_close_,
    MP_QSTR_er,
    MP_QSTR_esp,
    MP_QSTR_ethernet_spi,
    MP_QSTR_event,
    MP_QSTR_exc,
    MP_QSTR_exc_type,
    MP_QSTR_exception,
    MP_QSTR_extras_dot_py,
    MP_QSTR_f,
    MP_QSTR_fifo_join,
    MP_QSTR_fs,
    MP_QSTR_funcs,
    MP_QSTR_future,
    MP_QSTR_future_colon_,
    MP_QSTR_gather,
    MP_QSTR_get_event_loop,
    MP_QSTR_get_exception_handler,
    MP_QSTR_get_extra_info,
    MP_QSTR_github_colon_,
    MP_QSTR_gitlab_colon_,
    MP_QSTR_gpio,
    MP_QSTR_hashes,
    MP_QSTR_head,
    MP_QSTR_headers,
    MP_QSTR_host,
    MP_QSTR_http_colon_,
    MP_QSTR_http_colon__slash__slash_,
    MP_QSTR_https_colon_,
    MP_QSTR_https_colon__slash__slash_,
    MP_QSTR_https_colon__slash__slash_gitlab_dot_com_slash_,
    MP_QSTR_humidity,
    MP_QSTR_i,
    MP_QSTR_idx,
    MP_QSTR_ifempty,
    MP_QSTR_iffull,
    MP_QSTR_in_,
    MP_QSTR_install,
    MP_QSTR_instr,
    MP_QSTR_invalid_space_bit_space_count_space__brace_open__brace_close_,
    MP_QSTR_is_set,
    MP_QSTR_isr,
    MP_QSTR_jmp,
    MP_QSTR_keyfile,
    MP_QSTR_l_rom,
    MP_QSTR_labels,
    MP_QSTR_latest,
    MP_QSTR_listen_s,
    MP_QSTR_listen_sock,
    MP_QSTR_loop,
    MP_QSTR_main_task,
    MP_QSTR_measure,
    MP_QSTR_message,
    MP_QSTR_method,
    MP_QSTR_mip_slash___init___dot_py,
    MP_QSTR_mod,
    MP_QSTR_mpy,
    MP_QSTR_n,
    MP_QSTR_neopixel_dot_py,
    MP_QSTR_new_event_loop,
    MP_QSTR_nic,
    MP_QSTR_no_space_running_space_event_space_loop,
    MP_QSTR_no_space_sideset,
    MP_QSTR_noblock,
    MP_QSTR_not_osre,
    MP_QSTR_not_x,
    MP_QSTR_not_y,
    MP_QSTR_ntptime_dot_py,
    MP_QSTR_null,
    MP_QSTR_num_instr,
    MP_QSTR_num_sideset,
    MP_QSTR_onewire_dot_py,
    MP_QSTR_open_connection,
    MP_QSTR_osr,
    MP_QSTR_out,
    MP_QSTR_out_buf,
    MP_QSTR_out_init,
    MP_QSTR_ow,
    MP_QSTR_package,
    MP_QSTR_package_dot_json,
    MP_QSTR_package_json_url,
    MP_QSTR_parse_headers,
    MP_QSTR_pass_,
    MP_QSTR_passwrd1,
    MP_QSTR_patch,
    MP_QSTR_pc,
    MP_QSTR_peername,
    MP_QSTR_pin,
    MP_QSTR_pindirs,
    MP_QSTR_pins,
    MP_QSTR_poller,
    MP_QSTR_pool_dot_ntp_dot_org,
    MP_QSTR_port,
    MP_QSTR_post,
    MP_QSTR_py,
    MP_QSTR_pyb,
    MP_QSTR_pyboard,
    MP_QSTR_queue_read,
    MP_QSTR_queue_write,
    MP_QSTR_raw,
    MP_QSTR_read_scratch,
    MP_QSTR_read_temp,
    MP_QSTR_readexactly,
    MP_QSTR_reason,
    MP_QSTR_rejected,
    MP_QSTR_rel,
    MP_QSTR_repl_space_password,
    MP_QSTR_repl_password,
    MP_QSTR_req,
    MP_QSTR_request,
    MP_QSTR_requesting,
    MP_QSTR_requests,
    MP_QSTR_requests_slash___init___dot_py,
    MP_QSTR_required,
    MP_QSTR_respkey_colon_,
    MP_QSTR_retry_count,
    MP_QSTR_retrys,
    MP_QSTR_return_exceptions,
    MP_QSTR_rom,
    MP_QSTR_rp2_dot_py,
    MP_QSTR_run,
    MP_QSTR_run_forever,
    MP_QSTR_run_until_complete,
    MP_QSTR_runq_len,
    MP_QSTR_rwb,
    MP_QSTR_s,
    MP_QSTR_select_rom,
    MP_QSTR_send_html,
    MP_QSTR_server_handshake,
    MP_QSTR_set_exception_handler,
    MP_QSTR_set_init,
    MP_QSTR_settime,
    MP_QSTR_settings,
    MP_QSTR_settings_dot_json,
    MP_QSTR_settings_dot_py,
    MP_QSTR_setup_conn,
    MP_QSTR_sgen,
    MP_QSTR_short_hash,
    MP_QSTR_side,
    MP_QSTR_side_pindir,
    MP_QSTR_sideset_space_too_space_large,
    MP_QSTR_sideset_count,
    MP_QSTR_sideset_init,
    MP_QSTR_sideset_opt,
    MP_QSTR_sock,
    MP_QSTR_src,
    MP_QSTR_ssl,
    MP_QSTR_ssl_dot_py,
    MP_QSTR_start_foreground,
    MP_QSTR_start_pass,
    MP_QSTR_start_server,
    MP_QSTR_static_host,
    MP_QSTR_stats,
    MP_QSTR_status_code,
    MP_QSTR_stream,
    MP_QSTR_stream_awrite,
    MP_QSTR_sz,
    MP_QSTR_t,
    MP_QSTR_target,
    MP_QSTR_task,
    MP_QSTR_tb,
    MP_QSTR_tcp_config,
    MP_QSTR_tcp_config_dot_py,
    MP_QSTR_temperature,
    MP_QSTR_ticks,
    MP_QSTR_timing,
    MP_QSTR_uasyncio_dot_py,
    MP_QSTR_unknown_space_label_space__brace_open__brace_close_,
    MP_QSTR_urequests_dot_py,
    MP_QSTR_url,
    MP_QSTR_urls,
    MP_QSTR_v,
    MP_QSTR_val,
    MP_QSTR_value2,
    MP_QSTR_w,
    MP_QSTR_wait,
    MP_QSTR_wait_closed,
    MP_QSTR_wait_for,
    MP_QSTR_wait_for_ms,
    MP_QSTR_wait_io_event,
    MP_QSTR_waiter,
    MP_QSTR_waiting,
    MP_QSTR_waitq_len,
    MP_QSTR_webrepl,
    MP_QSTR_webrepl_dot_py,
    MP_QSTR_webrepl_cfg,
    MP_QSTR_webrepl_cfg_dot_py,
    MP_QSTR_word,
    MP_QSTR_wrap,
    MP_QSTR_wrap_target,
    MP_QSTR_wrap_used,
    MP_QSTR_write_scratch,
    MP_QSTR_x,
    MP_QSTR_x_dec,
    MP_QSTR_x_not_y,
    MP_QSTR_y,
    MP_QSTR_y_dec,
    MP_QSTR__brace_open__brace_close__slash_file_slash__brace_open__brace_close__slash__brace_open__brace_close_,
    MP_QSTR__brace_open__brace_close__slash_package_slash__brace_open__brace_close__slash__brace_open__brace_close__slash__brace_open__brace_close__dot_json,
    MP_QSTR__brace_open__brace_close__slash__brace_open__brace_close_,
    MP_QSTR__brace_open__brace_close__equals__brace_open__brace_close__0x0a_,
};

const qstr_hash_t mp_qstr_frozen_const_hashes[] = {
    197,
    77,
    115,
    143,
    130,
    195,
    218,
    85,
    203,
    20,
    21,
    102,
    22,
    19,
    29,
    159,
    190,
    240,
    153,
    79,
    211,
    221,
    25,
    218,
    52,
    28,
    93,
    253,
    40,
    1,
    37,
    202,
    221,
    233,
    191,
    26,
    19,
    237,
    237,
    5,
    146,
    95,
    39,
    142,
    167,
    25,
    185,
    105,
    75,
    104,
    80,
    180,
    235,
    121,
    244,
    28,
    61,
    148,
    38,
    198,
    164,
    7,
    249,
    203,
    168,
    160,
    57,
    57,
    156,
    54,
    86,
    102,
    192,
    144,
    189,
    60,
    124,
    63,
    26,
    171,
    71,
    118,
    82,
    35,
    129,
    37,
    106,
    55,
    192,
    173,
    36,
    131,
    92,
    254,
    210,
    191,
    81,
    130,
    23,
    254,
    248,
    82,
    164,
    179,
    251,
    173,
    16,
    37,
    86,
    194,
    82,
    189,
    123,
    27,
    40,
    84,
    19,
    69,
    183,
    118,
    1,
    32,
    102,
    113,
    182,
    173,
    47,
    20,
    51,
    249,
    236,
    106,
    112,
    236,
    116,
    199,
    17,
    247,
    33,
    232,
    183,
    228,
    37,
    239,
    227,
    48,
    255,
    234,
    208,
    35,
    72,
    8,
    172,
    250,
    65,
    190,
    9,
    41,
    147,
    30,
    103,
    65,
    80,
    57,
    123,
    156,
    135,
    35,
    90,
    200,
    134,
    117,
    166,
    149,
    82,
    178,
    99,
    65,
    201,
    219,
    252,
    210,
    171,
    195,
    30,
    80,
    8,
    1,
    58,
    136,
    3,
    188,
    199,
    186,
    42,
    84,
    65,
    237,
    169,
    37,
    7,
    231,
    52,
    212,
    1,
    124,
    204,
    80,
    63,
    121,
    61,
    4,
    151,
    14,
    194,
    109,
    114,
    116,
    38,
    208,
    254,
    1,
    199,
    57,
    252,
    29,
    110,
    154,
    3,
    227,
    193,
    203,
    174,
    137,
    225,
    211,
    253,
    13,
    4,
    183,
    182,
    93,
    222,
    62,
    85,
    15,
    216,
    235,
    43,
    133,
    206,
    125,
    191,
    137,
    44,
    163,
    107,
    4,
    139,
    22,
    128,
    242,
    190,
    65,
    237,
    233,
    92,
    61,
    12,
    238,
    86,
    121,
    22,
    225,
    84,
    228,
    201,
    193,
    75,
    126,
    49,
    78,
    99,
    116,
    212,
    135,
    117,
    44,
    188,
    81,
    62,
    212,
    181,
    18,
    108,
    204,
    239,
    37,
    162,
    214,
    226,
    251,
    200,
    168,
    66,
    18,
    160,
    182,
    135,
    113,
    154,
    26,
    126,
    137,
    85,
    192,
    57,
    232,
    209,
    7,
    233,
    46,
    161,
    203,
    191,
    162,
    196,
    99,
    89,
    90,
    236,
    209,
    244,
    40,
    147,
    247,
    240,
    233,
    67,
    53,
    23,
    13,
    53,
    142,
    61,
    211,
    254,
    60,
    210,
    142,
    227,
    42,
    203,
    36,
    249,
    238,
    135,
    254,
    153,
    35,
    164,
    43,
    81,
    95,
    233,
    59,
    221,
    96,
    49,
    220,
    161,
    74,
    41,
    10,
    146,
};

const qstr_len_t mp_qstr_frozen_const_lengths[] = {
    4,
    2,
    5,
    4,
    3,
    7,
    4,
    5,
    7,
    5,
    5,
    6,
    5,
    5,
    5,
    1,
    13,
    4,
    8,
    9,
    10,
    14,
    12,
    8,
    5,
    6,
    5,
    5,
    7,
    7,
    4,
    20,
    5,
    5,
    7,
    21,
    3,
    1,
    4,
    4,
    7,
    19,
    4,
    4,
    17,
    4,
    9,
    8,
    5,
    7,
    12,
    4,
    5,
    10,
    11,
    4,
    4,
    3,
    18,
    8,
    10,
    3,
    13,
    8,
    18,
    6,
    18,
    6,
    12,
    12,
    14,
    12,
    17,
    12,
    21,
    22,
    7,
    11,
    6,
    8,
    12,
    6,
    7,
    13,
    6,
    8,
    8,
    14,
    8,
    19,
    12,
    12,
    13,
    16,
    9,
    15,
    5,
    3,
    15,
    10,
    17,
    16,
    12,
    4,
    11,
    6,
    10,
    8,
    11,
    14,
    6,
    9,
    21,
    24,
    16,
    5,
    7,
    7,
    19,
    15,
    16,
    16,
    15,
    17,
    4,
    4,
    8,
    8,
    2,
    6,
    9,
    7,
    4,
    5,
    7,
    3,
    6,
    6,
    6,
    22,
    12,
    2,
    4,
    9,
    8,
    14,
    7,
    2,
    8,
    4,
    20,
    9,
    7,
    7,
    12,
    4,
    5,
    18,
    11,
    12,
    3,
    25,
    5,
    15,
    9,
    6,
    4,
    4,
    6,
    4,
    12,
    5,
    10,
    2,
    18,
    2,
    3,
    12,
    5,
    3,
    8,
    9,
    9,
    1,
    9,
    2,
    5,
    6,
    7,
    6,
    14,
    21,
    14,
    7,
    7,
    4,
    6,
    4,
    7,
    4,
    5,
    7,
    6,
    8,
    19,
    8,
    1,
    3,
    7,
    6,
    3,
    7,
    5,
    20,
    6,
    3,
    3,
    7,
    5,
    6,
    6,
    8,
    11,
    4,
    9,
    7,
    7,
    6,
    15,
    3,
    3,
    1,
    11,
    14,
    3,
    21,
    10,
    7,
    8,
    5,
    5,
    10,
    4,
    9,
    11,
    10,
    15,
    3,
    3,
    7,
    8,
    2,
    7,
    12,
    16,
    13,
    5,
    8,
    5,
    2,
    8,
    3,
    7,
    4,
    6,
    12,
    4,
    4,
    2,
    3,
    7,
    10,
    11,
    3,
    12,
    9,
    11,
    6,
    8,
    3,
    13,
    13,
    3,
    7,
    10,
    8,
    20,
    8,
    8,
    11,
    6,
    17,
    3,
    6,
    3,
    11,
    18,
    8,
    3,
    1,
    10,
    9,
    16,
    21,
    8,
    7,
    8,
    13,
    11,
    10,
    4,
    10,
    4,
    11,
    17,
    13,
    12,
    11,
    4,
    3,
    3,
    6,
    16,
    10,
    12,
    11,
    5,
    11,
    6,
    13,
    2,
    1,
    6,
    4,
    2,
    10,
    13,
    11,
    5,
    6,
    11,
    16,
    12,
    3,
    4,
    1,
    3,
    6,
    1,
    4,
    11,
    8,
    11,
    13,
    6,
    7,
    9,
    7,
    10,
    11,
    14,
    4,
    4,
    11,
    9,
    13,
    1,
    5,
    7,
    1,
    5,
    13,
    24,
    5,
    6,
};

extern const qstr_pool_t mp_qstr_const_pool;
const qstr_pool_t mp_qstr_frozen_const_pool = {
    &mp_qstr_const_pool, // previous pool
    MP_QSTRnumber_of, // previous pool size
    true, // is_sorted
    10, // allocated entries
    375, // used entries
    (qstr_hash_t *)mp_qstr_frozen_const_hashes,
    (qstr_len_t *)mp_qstr_frozen_const_lengths,
    {
        "\x0d\x0a\x0d\x0a",
        "!I",
        ".json",
        ".mpy",
        ".py",
        "/-/raw/",
        "/rom",
        "\x30\x0d\x0a\x0d\x0a",
        "0.0.0.0",
        "0.1.0",
        "0.1.1",
        "0.10.2",
        "0.2.1",
        "0.4.2",
        "0.8.0",
        ":",
        "Authorization",
        "BASE",
        "Basic {}",
        "CRC error",
        "Connection",
        "Content-Length",
        "Content-Type",
        "Copying:",
        "DEBUG",
        "DELETE",
        "DHT11",
        "DHT22",
        "DHTBase",
        "DS18X20",
        "Done",
        "Downloading {} to {}",
        "Error",
        "Event",
        "Exists:",
        "File not found: {} {}",
        "GET",
        "H",
        "HEAD",
        "Host",
        "IOQueue",
        "Installing {} to {}",
        "LIST",
        "Lock",
        "Lock not acquired",
        "Loop",
        "MATCH_ROM",
        "NeoPixel",
        "ORDER",
        "OneWire",
        "OneWireError",
        "PASS",
        "PATCH",
        "PIOASMEmit",
        "PIOASMError",
        "PORT",
        "POST",
        "PUT",
        "Package not found:",
        "Response",
        "SEARCH_ROM",
        "SET",
        "SETTINGS_FILE",
        "SKIP_ROM",
        "Sec-WebSocket-Key:",
        "Server",
        "SingletonGenerator",
        "Stream",
        "StreamReader",
        "StreamWriter",
        "ThreadSafeFlag",
        "TimeoutError",
        "Transfer-Encoding",
        "Unsupported ",
        "Unsupported epoch: {}",
        "Unsupported protocol: ",
        "_Remove",
        "__version__",
        "_attrs",
        "_boot.py",
        "_boot_fat.py",
        "_cache",
        "_cached",
        "_check_exists",
        "_chunk",
        "_context",
        "_dequeue",
        "_download_file",
        "_enqueue",
        "_ensure_path_exists",
        "_exc_context",
        "_exc_handler",
        "_install_json",
        "_install_package",
        "_io_queue",
        "_load_from_disk",
        "_lock",
        "_ow",
        "_pio_directives",
        "_pio_funcs",
        "_pio_instructions",
        "_promote_to_task",
        "_rewrite_url",
        "_run",
        "_search_rom",
        "_serve",
        "_stop_task",
        "_stopper",
        "accept_conn",
        "accept_handler",
        "aclose",
        "all_items",
        "allow_custom_commands",
        "allowed_mip_url_prefixes",
        "application/json",
        "ascii",
        "asm_pio",
        "asyncio",
        "asyncio/__init__.py",
        "asyncio/core.py",
        "asyncio/event.py",
        "asyncio/funcs.py",
        "asyncio/lock.py",
        "asyncio/stream.py",
        "attr",
        "auth",
        "autopull",
        "autopush",
        "aw",
        "awrite",
        "awritestr",
        "backlog",
        "bdev",
        "block",
        "boot.py",
        "bpp",
        "branch",
        "cadata",
        "cafile",
        "call_exception_handler",
        "can't gather",
        "cb",
        "cert",
        "cert_reqs",
        "certfile",
        "checksum error",
        "chunked",
        "cl",
        "client_s",
        "cond",
        "config server error:",
        "config.py",
        "content",
        "context",
        "convert_temp",
        "core",
        "coro=",
        "coroutine expected",
        "create_task",
        "current_task",
        "dec",
        "default_exception_handler",
        "delay",
        "delay too large",
        "delay_max",
        "delete",
        "deps",
        "dest",
        "dht.py",
        "diff",
        "do_handshake",
        "drain",
        "ds18x20.py",
        "dt",
        "duplicate label {}",
        "er",
        "esp",
        "ethernet_spi",
        "event",
        "exc",
        "exc_type",
        "exception",
        "extras.py",
        "f",
        "fifo_join",
        "fs",
        "funcs",
        "future",
        "future:",
        "gather",
        "get_event_loop",
        "get_exception_handler",
        "get_extra_info",
        "github:",
        "gitlab:",
        "gpio",
        "hashes",
        "head",
        "headers",
        "host",
        "http:",
        "http://",
        "https:",
        "https://",
        "https://gitlab.com/",
        "humidity",
        "i",
        "idx",
        "ifempty",
        "iffull",
        "in_",
        "install",
        "instr",
        "invalid bit count {}",
        "is_set",
        "isr",
        "jmp",
        "keyfile",
        "l_rom",
        "labels",
        "latest",
        "listen_s",
        "listen_sock",
        "loop",
        "main_task",
        "measure",
        "message",
        "method",
        "mip/__init__.py",
        "mod",
        "mpy",
        "n",
        "neopixel.py",
        "new_event_loop",
        "nic",
        "no running event loop",
        "no sideset",
        "noblock",
        "not_osre",
        "not_x",
        "not_y",
        "ntptime.py",
        "null",
        "num_instr",
        "num_sideset",
        "onewire.py",
        "open_connection",
        "osr",
        "out",
        "out_buf",
        "out_init",
        "ow",
        "package",
        "package.json",
        "package_json_url",
        "parse_headers",
        "pass_",
        "passwrd1",
        "patch",
        "pc",
        "peername",
        "pin",
        "pindirs",
        "pins",
        "poller",
        "pool.ntp.org",
        "port",
        "post",
        "py",
        "pyb",
        "pyboard",
        "queue_read",
        "queue_write",
        "raw",
        "read_scratch",
        "read_temp",
        "readexactly",
        "reason",
        "rejected",
        "rel",
        "repl password",
        "repl_password",
        "req",
        "request",
        "requesting",
        "requests",
        "requests/__init__.py",
        "required",
        "respkey:",
        "retry_count",
        "retrys",
        "return_exceptions",
        "rom",
        "rp2.py",
        "run",
        "run_forever",
        "run_until_complete",
        "runq_len",
        "rwb",
        "s",
        "select_rom",
        "send_html",
        "server_handshake",
        "set_exception_handler",
        "set_init",
        "settime",
        "settings",
        "settings.json",
        "settings.py",
        "setup_conn",
        "sgen",
        "short_hash",
        "side",
        "side_pindir",
        "sideset too large",
        "sideset_count",
        "sideset_init",
        "sideset_opt",
        "sock",
        "src",
        "ssl",
        "ssl.py",
        "start_foreground",
        "start_pass",
        "start_server",
        "static_host",
        "stats",
        "status_code",
        "stream",
        "stream_awrite",
        "sz",
        "t",
        "target",
        "task",
        "tb",
        "tcp_config",
        "tcp_config.py",
        "temperature",
        "ticks",
        "timing",
        "uasyncio.py",
        "unknown label {}",
        "urequests.py",
        "url",
        "urls",
        "v",
        "val",
        "value2",
        "w",
        "wait",
        "wait_closed",
        "wait_for",
        "wait_for_ms",
        "wait_io_event",
        "waiter",
        "waiting",
        "waitq_len",
        "webrepl",
        "webrepl.py",
        "webrepl_cfg",
        "webrepl_cfg.py",
        "word",
        "wrap",
        "wrap_target",
        "wrap_used",
        "write_scratch",
        "x",
        "x_dec",
        "x_not_y",
        "y",
        "y_dec",
        "{}/file/{}/{}",
        "{}/package/{}/{}/{}.json",
        "{}/{}",
        "\x7b\x7d\x3d\x7b\x7d\x0a",
    },
};

////////////////////////////////////////////////////////////////////////////////
// frozen module _boot_fat
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/_boot_fat.mpy
// - frozen file name: _boot_fat.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file _boot_fat.py, scope _boot_fat__lt_module_gt_
static const byte fun_data__boot_fat__lt_module_gt_[96] = {
    0x3c,0x12, // prelude
    0x01, // names: <module>
    0x26,0x6c,0x20,0x28,0x22,0x54,0x2b,0x54, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'vfs'
    0x16,0x02, // STORE_NAME 'vfs'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'machine'
    0x16,0x03, // STORE_NAME 'machine'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x04, // IMPORT_NAME 'rp2'
    0x16,0x04, // STORE_NAME 'rp2'
    0x11,0x04, // LOAD_NAME 'rp2'
    0x14,0x05, // LOAD_METHOD 'Flash'
    0x36,0x00, // CALL_METHOD 0
    0x16,0x0a, // STORE_NAME 'bdev'
    0x48,0x13, // SETUP_EXCEPT 19
    0x11,0x02, // LOAD_NAME 'vfs'
    0x14,0x06, // LOAD_METHOD 'mount'
    0x11,0x02, // LOAD_NAME 'vfs'
    0x14,0x07, // LOAD_METHOD 'VfsFat'
    0x11,0x0a, // LOAD_NAME 'bdev'
    0x36,0x01, // CALL_METHOD 1
    0x10,0x08, // LOAD_CONST_STRING '/'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x4a,0x20, // POP_EXCEPT_JUMP 32
    0x59, // POP_TOP
    0x11,0x02, // LOAD_NAME 'vfs'
    0x13,0x07, // LOAD_ATTR 'VfsFat'
    0x14,0x09, // LOAD_METHOD 'mkfs'
    0x11,0x0a, // LOAD_NAME 'bdev'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x11,0x02, // LOAD_NAME 'vfs'
    0x14,0x06, // LOAD_METHOD 'mount'
    0x11,0x02, // LOAD_NAME 'vfs'
    0x14,0x07, // LOAD_METHOD 'VfsFat'
    0x11,0x0a, // LOAD_NAME 'bdev'
    0x36,0x01, // CALL_METHOD 1
    0x10,0x08, // LOAD_CONST_STRING '/'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x19,0x02, // DELETE_NAME 'vfs'
    0x19,0x0a, // DELETE_NAME 'bdev'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun__boot_fat__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data__boot_fat__lt_module_gt_,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 96,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data__boot_fat__lt_module_gt_ + 3,
        .line_info_top = fun_data__boot_fat__lt_module_gt_ + 11,
        .opcodes = fun_data__boot_fat__lt_module_gt_ + 11,
    },
    #endif
    #endif
};
#else
#define proto_fun__boot_fat__lt_module_gt_ fun_data__boot_fat__lt_module_gt_[0]
#endif

static const qstr_short_t const_qstr_table_data__boot_fat[11] = {
    MP_QSTR__boot_fat_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_vfs,
    MP_QSTR_machine,
    MP_QSTR_rp2,
    MP_QSTR_Flash,
    MP_QSTR_mount,
    MP_QSTR_VfsFat,
    MP_QSTR__slash_,
    MP_QSTR_mkfs,
    MP_QSTR_bdev,
};

static const mp_frozen_module_t frozen_module__boot_fat = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data__boot_fat,
        .obj_table = NULL,
    },
    .proto_fun = &proto_fun__boot_fat__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module _boot
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/_boot.mpy
// - frozen file name: _boot.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file _boot.py, scope _boot__lt_module_gt_
static const byte fun_data__boot__lt_module_gt_[114] = {
    0x3c,0x14, // prelude
    0x01, // names: <module>
    0x26,0x6c,0x40,0x28,0x22,0x53,0x31,0x33,0x4b, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'vfs'
    0x16,0x02, // STORE_NAME 'vfs'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'machine'
    0x16,0x03, // STORE_NAME 'machine'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x04, // IMPORT_NAME 'rp2'
    0x16,0x04, // STORE_NAME 'rp2'
    0x11,0x04, // LOAD_NAME 'rp2'
    0x14,0x05, // LOAD_METHOD 'Flash'
    0x36,0x00, // CALL_METHOD 0
    0x16,0x0b, // STORE_NAME 'bdev'
    0x48,0x12, // SETUP_EXCEPT 18
    0x11,0x02, // LOAD_NAME 'vfs'
    0x14,0x06, // LOAD_METHOD 'VfsLfs2'
    0x11,0x0b, // LOAD_NAME 'bdev'
    0x10,0x07, // LOAD_CONST_STRING 'progsize'
    0x22,0x82,0x00, // LOAD_CONST_SMALL_INT 256
    0x36,0x82,0x01, // CALL_METHOD 257
    0x16,0x0c, // STORE_NAME 'fs'
    0x4a,0x25, // POP_EXCEPT_JUMP 37
    0x59, // POP_TOP
    0x11,0x02, // LOAD_NAME 'vfs'
    0x13,0x06, // LOAD_ATTR 'VfsLfs2'
    0x14,0x08, // LOAD_METHOD 'mkfs'
    0x11,0x0b, // LOAD_NAME 'bdev'
    0x10,0x07, // LOAD_CONST_STRING 'progsize'
    0x22,0x82,0x00, // LOAD_CONST_SMALL_INT 256
    0x36,0x82,0x01, // CALL_METHOD 257
    0x59, // POP_TOP
    0x11,0x02, // LOAD_NAME 'vfs'
    0x14,0x06, // LOAD_METHOD 'VfsLfs2'
    0x11,0x0b, // LOAD_NAME 'bdev'
    0x10,0x07, // LOAD_CONST_STRING 'progsize'
    0x22,0x82,0x00, // LOAD_CONST_SMALL_INT 256
    0x36,0x82,0x01, // CALL_METHOD 257
    0x16,0x0c, // STORE_NAME 'fs'
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x11,0x02, // LOAD_NAME 'vfs'
    0x14,0x09, // LOAD_METHOD 'mount'
    0x11,0x0c, // LOAD_NAME 'fs'
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x19,0x02, // DELETE_NAME 'vfs'
    0x19,0x0b, // DELETE_NAME 'bdev'
    0x19,0x0c, // DELETE_NAME 'fs'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun__boot__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data__boot__lt_module_gt_,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 114,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data__boot__lt_module_gt_ + 3,
        .line_info_top = fun_data__boot__lt_module_gt_ + 12,
        .opcodes = fun_data__boot__lt_module_gt_ + 12,
    },
    #endif
    #endif
};
#else
#define proto_fun__boot__lt_module_gt_ fun_data__boot__lt_module_gt_[0]
#endif

static const qstr_short_t const_qstr_table_data__boot[13] = {
    MP_QSTR__boot_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_vfs,
    MP_QSTR_machine,
    MP_QSTR_rp2,
    MP_QSTR_Flash,
    MP_QSTR_VfsLfs2,
    MP_QSTR_progsize,
    MP_QSTR_mkfs,
    MP_QSTR_mount,
    MP_QSTR__slash_,
    MP_QSTR_bdev,
    MP_QSTR_fs,
};

static const mp_frozen_module_t frozen_module__boot = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data__boot,
        .obj_table = NULL,
    },
    .proto_fun = &proto_fun__boot__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module rp2
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/rp2.mpy
// - frozen file name: rp2.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file rp2.py, scope rp2__lt_module_gt_
static const byte fun_data_rp2__lt_module_gt_[228] = {
    0x18,0x5e, // prelude
    0x01, // names: <module>
    0x60,0x28,0x8c,0x0e,0x6b,0x20,0x89,0x9f,0x42,0x64,0x20,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x44,0x25,0x45,0x24,0x24,0x24,0x24,0x24,0x24,0x44,0x24,0x24,0x26,0x66,0x20,0x26,0x67,0x20,0x40,0x64,0x40,0x40,0x84,0x0d,0x84,0x20, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME '_rp2'
    0x69, // IMPORT_STAR
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x04, // LOAD_CONST_STRING 'const'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x05, // IMPORT_NAME 'micropython'
    0x1c,0x04, // IMPORT_FROM 'const'
    0x16,0x04, // STORE_NAME 'const'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x06, // LOAD_CONST_STRING 'PIOASMError'
    0x11,0x58, // LOAD_NAME 'Exception'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x06, // STORE_NAME 'PIOASMError'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x07, // LOAD_CONST_STRING 'PIOASMEmit'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x07, // STORE_NAME 'PIOASMEmit'
    0x2c,0x1a, // BUILD_MAP 26
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x08, // LOAD_CONST_STRING 'gpio'
    0x62, // STORE_MAP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x09, // LOAD_CONST_STRING 'pins'
    0x62, // STORE_MAP
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x0a, // LOAD_CONST_STRING 'x'
    0x62, // STORE_MAP
    0x82, // LOAD_CONST_SMALL_INT 2
    0x10,0x0b, // LOAD_CONST_STRING 'y'
    0x62, // STORE_MAP
    0x83, // LOAD_CONST_SMALL_INT 3
    0x10,0x0c, // LOAD_CONST_STRING 'null'
    0x62, // STORE_MAP
    0x84, // LOAD_CONST_SMALL_INT 4
    0x10,0x0d, // LOAD_CONST_STRING 'pindirs'
    0x62, // STORE_MAP
    0x85, // LOAD_CONST_SMALL_INT 5
    0x10,0x0e, // LOAD_CONST_STRING 'pc'
    0x62, // STORE_MAP
    0x85, // LOAD_CONST_SMALL_INT 5
    0x10,0x0f, // LOAD_CONST_STRING 'status'
    0x62, // STORE_MAP
    0x86, // LOAD_CONST_SMALL_INT 6
    0x10,0x10, // LOAD_CONST_STRING 'isr'
    0x62, // STORE_MAP
    0x87, // LOAD_CONST_SMALL_INT 7
    0x10,0x11, // LOAD_CONST_STRING 'osr'
    0x62, // STORE_MAP
    0x88, // LOAD_CONST_SMALL_INT 8
    0x10,0x12, // LOAD_CONST_STRING 'exec'
    0x62, // STORE_MAP
    0x32,0x02, // MAKE_FUNCTION 2
    0x10,0x13, // LOAD_CONST_STRING 'invert'
    0x62, // STORE_MAP
    0x32,0x03, // MAKE_FUNCTION 3
    0x10,0x14, // LOAD_CONST_STRING 'reverse'
    0x62, // STORE_MAP
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x15, // LOAD_CONST_STRING 'not_x'
    0x62, // STORE_MAP
    0x82, // LOAD_CONST_SMALL_INT 2
    0x10,0x16, // LOAD_CONST_STRING 'x_dec'
    0x62, // STORE_MAP
    0x83, // LOAD_CONST_SMALL_INT 3
    0x10,0x17, // LOAD_CONST_STRING 'not_y'
    0x62, // STORE_MAP
    0x84, // LOAD_CONST_SMALL_INT 4
    0x10,0x18, // LOAD_CONST_STRING 'y_dec'
    0x62, // STORE_MAP
    0x85, // LOAD_CONST_SMALL_INT 5
    0x10,0x19, // LOAD_CONST_STRING 'x_not_y'
    0x62, // STORE_MAP
    0x86, // LOAD_CONST_SMALL_INT 6
    0x10,0x1a, // LOAD_CONST_STRING 'pin'
    0x62, // STORE_MAP
    0x87, // LOAD_CONST_SMALL_INT 7
    0x10,0x1b, // LOAD_CONST_STRING 'not_osre'
    0x62, // STORE_MAP
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x1c, // LOAD_CONST_STRING 'noblock'
    0x62, // STORE_MAP
    0xa1, // LOAD_CONST_SMALL_INT 33
    0x10,0x1d, // LOAD_CONST_STRING 'block'
    0x62, // STORE_MAP
    0x22,0x80,0x40, // LOAD_CONST_SMALL_INT 64
    0x10,0x1e, // LOAD_CONST_STRING 'iffull'
    0x62, // STORE_MAP
    0x22,0x80,0x40, // LOAD_CONST_SMALL_INT 64
    0x10,0x1f, // LOAD_CONST_STRING 'ifempty'
    0x62, // STORE_MAP
    0x22,0x80,0x40, // LOAD_CONST_SMALL_INT 64
    0x10,0x20, // LOAD_CONST_STRING 'clear'
    0x62, // STORE_MAP
    0x32,0x04, // MAKE_FUNCTION 4
    0x10,0x21, // LOAD_CONST_STRING 'rel'
    0x62, // STORE_MAP
    0x16,0x59, // STORE_NAME '_pio_funcs'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x16,0x5a, // STORE_NAME '_pio_directives'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x16,0x5b, // STORE_NAME '_pio_instructions'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x30, // STORE_NAME 'asm_pio'
    0x50, // LOAD_CONST_FALSE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x06, // MAKE_FUNCTION_DEFARGS 6
    0x16,0x31, // STORE_NAME 'asm_pio_encode'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of rp2__lt_module_gt_
// frozen bytecode for file rp2.py, scope rp2_PIOASMError
static const byte fun_data_rp2_PIOASMError[15] = {
    0x00,0x06, // prelude
    0x06, // names: PIOASMError
    0x88,0x13, // code info
    0x11,0x5c, // LOAD_NAME '__name__'
    0x16,0x5d, // STORE_NAME '__module__'
    0x10,0x06, // LOAD_CONST_STRING 'PIOASMError'
    0x16,0x5e, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_PIOASMError = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_PIOASMError,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 15,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_rp2_PIOASMError + 3,
        .line_info_top = fun_data_rp2_PIOASMError + 5,
        .opcodes = fun_data_rp2_PIOASMError + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_PIOASMError fun_data_rp2_PIOASMError[0]
#endif

// child of rp2__lt_module_gt_
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit
static const byte fun_data_rp2_PIOASMEmit[208] = {
    0x18,0x54, // prelude
    0x07, // names: PIOASMEmit
    0x88,0x17,0x73,0x60,0x20,0x27,0x77,0x40,0x8b,0x1c,0x84,0x0f,0x64,0x84,0x07,0x84,0x0b,0x64,0x64,0x40,0x64,0x60,0x88,0x0c,0x64,0x68,0x60,0x84,0x07,0x64,0x40,0x84,0x07,0x69,0x60,0x69,0x60,0x64,0x40,0x68,0x60, // code info
    0x11,0x5c, // LOAD_NAME '__name__'
    0x16,0x5d, // STORE_NAME '__module__'
    0x10,0x07, // LOAD_CONST_STRING 'PIOASMEmit'
    0x16,0x5e, // STORE_NAME '__qualname__'
    0x53, // LOAD_NULL
    0x2c,0x00, // BUILD_MAP 0
    0x51, // LOAD_CONST_NONE
    0x10,0x22, // LOAD_CONST_STRING 'out_init'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x23, // LOAD_CONST_STRING 'set_init'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x24, // LOAD_CONST_STRING 'sideset_init'
    0x62, // STORE_MAP
    0x50, // LOAD_CONST_FALSE
    0x10,0x25, // LOAD_CONST_STRING 'side_pindir'
    0x62, // STORE_MAP
    0x11,0x5f, // LOAD_NAME 'PIO'
    0x13,0x26, // LOAD_ATTR 'SHIFT_LEFT'
    0x10,0x27, // LOAD_CONST_STRING 'in_shiftdir'
    0x62, // STORE_MAP
    0x11,0x5f, // LOAD_NAME 'PIO'
    0x13,0x26, // LOAD_ATTR 'SHIFT_LEFT'
    0x10,0x28, // LOAD_CONST_STRING 'out_shiftdir'
    0x62, // STORE_MAP
    0x50, // LOAD_CONST_FALSE
    0x10,0x29, // LOAD_CONST_STRING 'autopush'
    0x62, // STORE_MAP
    0x50, // LOAD_CONST_FALSE
    0x10,0x2a, // LOAD_CONST_STRING 'autopull'
    0x62, // STORE_MAP
    0xa0, // LOAD_CONST_SMALL_INT 32
    0x10,0x2b, // LOAD_CONST_STRING 'push_thresh'
    0x62, // STORE_MAP
    0xa0, // LOAD_CONST_SMALL_INT 32
    0x10,0x2c, // LOAD_CONST_STRING 'pull_thresh'
    0x62, // STORE_MAP
    0x11,0x5f, // LOAD_NAME 'PIO'
    0x13,0x2d, // LOAD_ATTR 'JOIN_NONE'
    0x10,0x2e, // LOAD_CONST_STRING 'fifo_join'
    0x62, // STORE_MAP
    0x33,0x00, // MAKE_FUNCTION_DEFARGS 0
    0x16,0x3a, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x3f, // STORE_NAME 'start_pass'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x41, // STORE_NAME '__getitem__'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x42, // STORE_NAME 'delay'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x43, // STORE_NAME 'side'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x45, // STORE_NAME 'wrap_target'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x40, // STORE_NAME 'wrap'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x47, // STORE_NAME 'label'
    0x51, // LOAD_CONST_NONE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x08, // MAKE_FUNCTION_DEFARGS 8
    0x16,0x49, // STORE_NAME 'word'
    0x32,0x09, // MAKE_FUNCTION 9
    0x16,0x4b, // STORE_NAME 'nop'
    0x51, // LOAD_CONST_NONE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x0a, // MAKE_FUNCTION_DEFARGS 10
    0x16,0x38, // STORE_NAME 'jmp'
    0x32,0x0b, // MAKE_FUNCTION 11
    0x16,0x4c, // STORE_NAME 'wait'
    0x32,0x0c, // MAKE_FUNCTION 12
    0x16,0x4d, // STORE_NAME 'in_'
    0x32,0x0d, // MAKE_FUNCTION 13
    0x16,0x4e, // STORE_NAME 'out'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x0e, // MAKE_FUNCTION_DEFARGS 14
    0x16,0x4f, // STORE_NAME 'push'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x0f, // MAKE_FUNCTION_DEFARGS 15
    0x16,0x50, // STORE_NAME 'pull'
    0x32,0x10, // MAKE_FUNCTION 16
    0x16,0x51, // STORE_NAME 'mov'
    0x51, // LOAD_CONST_NONE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x11, // MAKE_FUNCTION_DEFARGS 17
    0x16,0x52, // STORE_NAME 'irq'
    0x32,0x12, // MAKE_FUNCTION 18
    0x16,0x53, // STORE_NAME 'set'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit___init__
static const byte fun_data_rp2_PIOASMEmit___init__[148] = {
    0xb9,0x98,0x88,0x80,0x48,0x40, // prelude
    0x3a,0x63,0x22,0x23,0x24,0x25,0x27,0x28,0x29,0x2a,0x2b,0x2c,0x2e, // names: __init__, self, out_init, set_init, sideset_init, side_pindir, in_shiftdir, out_shiftdir, autopush, autopull, push_thresh, pull_thresh, fifo_join
    0x80,0x28,0x4b,0x25,0x24,0x20,0x23,0x26,0x26,0x24,0x24,0x24,0x45,0x52,0x44,0x25,0x26,0x29,0x46, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x3b, // LOAD_CONST_STRING 'array'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x3b, // IMPORT_NAME 'array'
    0x1c,0x3b, // IMPORT_FROM 'array'
    0xcc, // STORE_FAST 12
    0x59, // POP_TOP
    0x2c,0x00, // BUILD_MAP 0
    0xb0, // LOAD_FAST 0
    0x18,0x3c, // STORE_ATTR 'labels'
    0xb4, // LOAD_FAST 4
    0x9d, // LOAD_CONST_SMALL_INT 29
    0xf0, // BINARY_OP 25 __lshift__
    0xcd, // STORE_FAST 13
    0xbb, // LOAD_FAST 11
    0x9e, // LOAD_CONST_SMALL_INT 30
    0xf0, // BINARY_OP 25 __lshift__
    0xba, // LOAD_FAST 10
    0x9f, // LOAD_CONST_SMALL_INT 31
    0xef, // BINARY_OP 24 __and__
    0x99, // LOAD_CONST_SMALL_INT 25
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb9, // LOAD_FAST 9
    0x9f, // LOAD_CONST_SMALL_INT 31
    0xef, // BINARY_OP 24 __and__
    0x94, // LOAD_CONST_SMALL_INT 20
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb6, // LOAD_FAST 6
    0x93, // LOAD_CONST_SMALL_INT 19
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb5, // LOAD_FAST 5
    0x92, // LOAD_CONST_SMALL_INT 18
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb8, // LOAD_FAST 8
    0x91, // LOAD_CONST_SMALL_INT 17
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb7, // LOAD_FAST 7
    0x90, // LOAD_CONST_SMALL_INT 16
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xce, // STORE_FAST 14
    0xbc, // LOAD_FAST 12
    0x10,0x3d, // LOAD_CONST_STRING 'H'
    0x34,0x01, // CALL_FUNCTION 1
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x7f, // LOAD_CONST_SMALL_INT -1
    0xbd, // LOAD_FAST 13
    0xbe, // LOAD_FAST 14
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0x2b,0x09, // BUILD_LIST 9
    0xb0, // LOAD_FAST 0
    0x18,0x39, // STORE_ATTR 'prog'
    0x50, // LOAD_CONST_FALSE
    0xb0, // LOAD_FAST 0
    0x18,0x3e, // STORE_ATTR 'wrap_used'
    0xb3, // LOAD_FAST 3
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x32, // STORE_ATTR 'sideset_count'
    0x42,0x57, // JUMP 23
    0x12,0x64, // LOAD_GLOBAL 'isinstance'
    0xb3, // LOAD_FAST 3
    0x12,0x65, // LOAD_GLOBAL 'int'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb0, // LOAD_FAST 0
    0x18,0x32, // STORE_ATTR 'sideset_count'
    0x42,0x48, // JUMP 8
    0x12,0x62, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x18,0x32, // STORE_ATTR 'sideset_count'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_PIOASMEmit___init__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_PIOASMEmit___init__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 148,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 24,
        .n_exc_stack = 0,
        .scope_flags = 8,
        .n_pos_args = 1,
        .n_kwonly_args = 11,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 58,
        .line_info = fun_data_rp2_PIOASMEmit___init__ + 19,
        .line_info_top = fun_data_rp2_PIOASMEmit___init__ + 38,
        .opcodes = fun_data_rp2_PIOASMEmit___init__ + 38,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_PIOASMEmit___init__ fun_data_rp2_PIOASMEmit___init__[0]
#endif

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_start_pass
static const byte fun_data_rp2_PIOASMEmit_start_pass[110] = {
    0x2a,0x22, // prelude
    0x3f,0x63,0x35, // names: start_pass, self, pass_
    0x80,0x41,0x26,0x2a,0x26,0x24,0x25,0x2a,0x25,0x2b,0x29,0x2b,0x24,0x24, // code info
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xd9, // BINARY_OP 2 __eq__
    0x44,0xc7,0x80, // POP_JUMP_IF_FALSE 71
    0xb0, // LOAD_FAST 0
    0x13,0x3e, // LOAD_ATTR 'wrap_used'
    0x43,0x4b, // POP_JUMP_IF_TRUE 11
    0xb0, // LOAD_FAST 0
    0x13,0x36, // LOAD_ATTR 'num_instr'
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb0, // LOAD_FAST 0
    0x14,0x40, // LOAD_METHOD 'wrap'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x9f, // LOAD_CONST_SMALL_INT 31
    0xb0, // LOAD_FAST 0
    0x18,0x34, // STORE_ATTR 'delay_max'
    0xb0, // LOAD_FAST 0
    0x13,0x32, // LOAD_ATTR 'sideset_count'
    0x44,0x6e, // POP_JUMP_IF_FALSE 46
    0xb0, // LOAD_FAST 0
    0x13,0x37, // LOAD_ATTR 'num_sideset'
    0xb0, // LOAD_FAST 0
    0x13,0x36, // LOAD_ATTR 'num_instr'
    0xdc, // BINARY_OP 5 __ne__
    0xb0, // LOAD_FAST 0
    0x18,0x33, // STORE_ATTR 'sideset_opt'
    0xb0, // LOAD_FAST 0
    0x13,0x33, // LOAD_ATTR 'sideset_opt'
    0x44,0x54, // POP_JUMP_IF_FALSE 20
    0xb0, // LOAD_FAST 0
    0x13,0x39, // LOAD_ATTR 'prog'
    0x84, // LOAD_CONST_SMALL_INT 4
    0x58, // DUP_TOP_TWO
    0x55, // LOAD_SUBSCR
    0x23,0x03, // LOAD_CONST_OBJ 3
    0xe0, // BINARY_OP 9 __ior__
    0x5b, // ROT_THREE
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x57, // DUP_TOP
    0x13,0x32, // LOAD_ATTR 'sideset_count'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x5a, // ROT_TWO
    0x18,0x32, // STORE_ATTR 'sideset_count'
    0xb0, // LOAD_FAST 0
    0x57, // DUP_TOP
    0x13,0x34, // LOAD_ATTR 'delay_max'
    0xb0, // LOAD_FAST 0
    0x13,0x32, // LOAD_ATTR 'sideset_count'
    0xe4, // BINARY_OP 13 __irshift__
    0x5a, // ROT_TWO
    0x18,0x34, // STORE_ATTR 'delay_max'
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x35, // STORE_ATTR 'pass_'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x36, // STORE_ATTR 'num_instr'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x37, // STORE_ATTR 'num_sideset'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_PIOASMEmit_start_pass = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_PIOASMEmit_start_pass,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 110,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 63,
        .line_info = fun_data_rp2_PIOASMEmit_start_pass + 5,
        .line_info_top = fun_data_rp2_PIOASMEmit_start_pass + 19,
        .opcodes = fun_data_rp2_PIOASMEmit_start_pass + 19,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_PIOASMEmit_start_pass fun_data_rp2_PIOASMEmit_start_pass[0]
#endif

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit___getitem__
static const byte fun_data_rp2_PIOASMEmit___getitem__[14] = {
    0x22,0x0a, // prelude
    0x41,0x63,0x66, // names: __getitem__, self, key
    0x80,0x50, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x42, // LOAD_METHOD 'delay'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_PIOASMEmit___getitem__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_PIOASMEmit___getitem__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 14,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 65,
        .line_info = fun_data_rp2_PIOASMEmit___getitem__ + 5,
        .line_info_top = fun_data_rp2_PIOASMEmit___getitem__ + 7,
        .opcodes = fun_data_rp2_PIOASMEmit___getitem__ + 7,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_PIOASMEmit___getitem__ fun_data_rp2_PIOASMEmit___getitem__[0]
#endif

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_delay
static const byte fun_data_rp2_PIOASMEmit_delay[48] = {
    0x32,0x12, // prelude
    0x42,0x63,0x42, // names: delay, self, delay
    0x80,0x53,0x27,0x27,0x27,0x2e, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x35, // LOAD_ATTR 'pass_'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd8, // BINARY_OP 1 __gt__
    0x44,0x5c, // POP_JUMP_IF_FALSE 28
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x13,0x34, // LOAD_ATTR 'delay_max'
    0xd8, // BINARY_OP 1 __gt__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x06, // LOAD_GLOBAL 'PIOASMError'
    0x23,0x04, // LOAD_CONST_OBJ 4
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x13,0x39, // LOAD_ATTR 'prog'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x58, // DUP_TOP_TWO
    0x55, // LOAD_SUBSCR
    0xb1, // LOAD_FAST 1
    0x88, // LOAD_CONST_SMALL_INT 8
    0xf0, // BINARY_OP 25 __lshift__
    0xe0, // BINARY_OP 9 __ior__
    0x5b, // ROT_THREE
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_PIOASMEmit_delay = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_PIOASMEmit_delay,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 48,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 66,
        .line_info = fun_data_rp2_PIOASMEmit_delay + 5,
        .line_info_top = fun_data_rp2_PIOASMEmit_delay + 11,
        .opcodes = fun_data_rp2_PIOASMEmit_delay + 11,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_PIOASMEmit_delay fun_data_rp2_PIOASMEmit_delay[0]
#endif

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_side
static const byte fun_data_rp2_PIOASMEmit_side[89] = {
    0x42,0x1a, // prelude
    0x43,0x63,0x67, // names: side, self, value
    0x80,0x5a,0x29,0x27,0x27,0x27,0x29,0x27,0x26,0x34, // code info
    0xb0, // LOAD_FAST 0
    0x57, // DUP_TOP
    0x13,0x37, // LOAD_ATTR 'num_sideset'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x5a, // ROT_TWO
    0x18,0x37, // STORE_ATTR 'num_sideset'
    0xb0, // LOAD_FAST 0
    0x13,0x35, // LOAD_ATTR 'pass_'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd8, // BINARY_OP 1 __gt__
    0x44,0x78, // POP_JUMP_IF_FALSE 56
    0xb0, // LOAD_FAST 0
    0x13,0x32, // LOAD_ATTR 'sideset_count'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x06, // LOAD_GLOBAL 'PIOASMError'
    0x10,0x44, // LOAD_CONST_STRING 'no sideset'
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb0, // LOAD_FAST 0
    0x13,0x32, // LOAD_ATTR 'sideset_count'
    0xf0, // BINARY_OP 25 __lshift__
    0xdb, // BINARY_OP 4 __ge__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x06, // LOAD_GLOBAL 'PIOASMError'
    0x23,0x05, // LOAD_CONST_OBJ 5
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x8d, // LOAD_CONST_SMALL_INT 13
    0xb0, // LOAD_FAST 0
    0x13,0x32, // LOAD_ATTR 'sideset_count'
    0xf3, // BINARY_OP 28 __sub__
    0xc2, // STORE_FAST 2
    0xb0, // LOAD_FAST 0
    0x13,0x39, // LOAD_ATTR 'prog'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x58, // DUP_TOP_TWO
    0x55, // LOAD_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x33, // LOAD_ATTR 'sideset_opt'
    0x8c, // LOAD_CONST_SMALL_INT 12
    0xf0, // BINARY_OP 25 __lshift__
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xe0, // BINARY_OP 9 __ior__
    0x5b, // ROT_THREE
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_PIOASMEmit_side = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_PIOASMEmit_side,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 89,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 67,
        .line_info = fun_data_rp2_PIOASMEmit_side + 5,
        .line_info_top = fun_data_rp2_PIOASMEmit_side + 15,
        .opcodes = fun_data_rp2_PIOASMEmit_side + 15,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_PIOASMEmit_side fun_data_rp2_PIOASMEmit_side[0]
#endif

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_wrap_target
static const byte fun_data_rp2_PIOASMEmit_wrap_target[22] = {
    0x29,0x08, // prelude
    0x45,0x63, // names: wrap_target, self
    0x80,0x65, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x39, // LOAD_ATTR 'prog'
    0x84, // LOAD_CONST_SMALL_INT 4
    0x58, // DUP_TOP_TWO
    0x55, // LOAD_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x36, // LOAD_ATTR 'num_instr'
    0x87, // LOAD_CONST_SMALL_INT 7
    0xf0, // BINARY_OP 25 __lshift__
    0xe0, // BINARY_OP 9 __ior__
    0x5b, // ROT_THREE
    0x56, // STORE_SUBSCR
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_PIOASMEmit_wrap_target = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_PIOASMEmit_wrap_target,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 22,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 69,
        .line_info = fun_data_rp2_PIOASMEmit_wrap_target + 4,
        .line_info_top = fun_data_rp2_PIOASMEmit_wrap_target + 6,
        .opcodes = fun_data_rp2_PIOASMEmit_wrap_target + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_PIOASMEmit_wrap_target fun_data_rp2_PIOASMEmit_wrap_target[0]
#endif

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_wrap
static const byte fun_data_rp2_PIOASMEmit_wrap[38] = {
    0x29,0x0c, // prelude
    0x40,0x63, // names: wrap, self
    0x80,0x68,0x28,0x30, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x36, // LOAD_ATTR 'num_instr'
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x46, // LOAD_GLOBAL 'AssertionError'
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x13,0x39, // LOAD_ATTR 'prog'
    0x84, // LOAD_CONST_SMALL_INT 4
    0x58, // DUP_TOP_TWO
    0x55, // LOAD_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x36, // LOAD_ATTR 'num_instr'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf3, // BINARY_OP 28 __sub__
    0x8c, // LOAD_CONST_SMALL_INT 12
    0xf0, // BINARY_OP 25 __lshift__
    0xe0, // BINARY_OP 9 __ior__
    0x5b, // ROT_THREE
    0x56, // STORE_SUBSCR
    0x52, // LOAD_CONST_TRUE
    0xb0, // LOAD_FAST 0
    0x18,0x3e, // STORE_ATTR 'wrap_used'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_PIOASMEmit_wrap = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_PIOASMEmit_wrap,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 38,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 64,
        .line_info = fun_data_rp2_PIOASMEmit_wrap + 4,
        .line_info_top = fun_data_rp2_PIOASMEmit_wrap + 8,
        .opcodes = fun_data_rp2_PIOASMEmit_wrap + 8,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_PIOASMEmit_wrap fun_data_rp2_PIOASMEmit_wrap[0]
#endif

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_label
static const byte fun_data_rp2_PIOASMEmit_label[46] = {
    0x2a,0x10, // prelude
    0x47,0x63,0x47, // names: label, self, label
    0x80,0x6d,0x27,0x27,0x2c, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x35, // LOAD_ATTR 'pass_'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x5b, // POP_JUMP_IF_FALSE 27
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x13,0x3c, // LOAD_ATTR 'labels'
    0xdd, // BINARY_OP 6 <in>
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x12,0x06, // LOAD_GLOBAL 'PIOASMError'
    0x23,0x06, // LOAD_CONST_OBJ 6
    0x14,0x48, // LOAD_METHOD 'format'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x13,0x36, // LOAD_ATTR 'num_instr'
    0xb0, // LOAD_FAST 0
    0x13,0x3c, // LOAD_ATTR 'labels'
    0xb1, // LOAD_FAST 1
    0x56, // STORE_SUBSCR
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_PIOASMEmit_label = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_PIOASMEmit_label,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 46,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 71,
        .line_info = fun_data_rp2_PIOASMEmit_label + 5,
        .line_info_top = fun_data_rp2_PIOASMEmit_label + 10,
        .opcodes = fun_data_rp2_PIOASMEmit_label + 10,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_PIOASMEmit_label fun_data_rp2_PIOASMEmit_label[0]
#endif

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_word
static const byte fun_data_rp2_PIOASMEmit_word[83] = {
    0xb3,0x01,0x1c, // prelude
    0x49,0x63,0x60,0x47, // names: word, self, instr, label
    0x80,0x73,0x29,0x27,0x25,0x44,0x28,0x2c,0x26,0x2d, // code info
    0xb0, // LOAD_FAST 0
    0x57, // DUP_TOP
    0x13,0x36, // LOAD_ATTR 'num_instr'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x5a, // ROT_TWO
    0x18,0x36, // STORE_ATTR 'num_instr'
    0xb0, // LOAD_FAST 0
    0x13,0x35, // LOAD_ATTR 'pass_'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd8, // BINARY_OP 1 __gt__
    0x44,0x70, // POP_JUMP_IF_FALSE 48
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc2, // STORE_FAST 2
    0x42,0x5a, // JUMP 26
    0xb2, // LOAD_FAST 2
    0xb0, // LOAD_FAST 0
    0x13,0x3c, // LOAD_ATTR 'labels'
    0xdd, // BINARY_OP 6 <in>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x12,0x06, // LOAD_GLOBAL 'PIOASMError'
    0x23,0x07, // LOAD_CONST_OBJ 7
    0x14,0x48, // LOAD_METHOD 'format'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x13,0x3c, // LOAD_ATTR 'labels'
    0xb2, // LOAD_FAST 2
    0x55, // LOAD_SUBSCR
    0xc2, // STORE_FAST 2
    0xb0, // LOAD_FAST 0
    0x13,0x39, // LOAD_ATTR 'prog'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x14,0x4a, // LOAD_METHOD 'append'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xed, // BINARY_OP 22 __or__
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_PIOASMEmit_word = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_PIOASMEmit_word,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 83,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 73,
        .line_info = fun_data_rp2_PIOASMEmit_word + 7,
        .line_info_top = fun_data_rp2_PIOASMEmit_word + 17,
        .opcodes = fun_data_rp2_PIOASMEmit_word + 17,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_PIOASMEmit_word fun_data_rp2_PIOASMEmit_word[0]
#endif

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_nop
static const byte fun_data_rp2_PIOASMEmit_nop[16] = {
    0x19,0x08, // prelude
    0x4b,0x63, // names: nop, self
    0x80,0x7f, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x49, // LOAD_METHOD 'word'
    0x22,0x82,0xc0,0x42, // LOAD_CONST_SMALL_INT 41026
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_PIOASMEmit_nop = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_PIOASMEmit_nop,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 16,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 75,
        .line_info = fun_data_rp2_PIOASMEmit_nop + 4,
        .line_info_top = fun_data_rp2_PIOASMEmit_nop + 6,
        .opcodes = fun_data_rp2_PIOASMEmit_nop + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_PIOASMEmit_nop fun_data_rp2_PIOASMEmit_nop[0]
#endif

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_jmp
static const byte fun_data_rp2_PIOASMEmit_jmp[33] = {
    0xbb,0x01,0x12, // prelude
    0x38,0x63,0x68,0x47, // names: jmp, self, cond, label
    0x80,0x82,0x25,0x22,0x22, // code info
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0xb1, // LOAD_FAST 1
    0xc2, // STORE_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x14,0x49, // LOAD_METHOD 'word'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb1, // LOAD_FAST 1
    0x85, // LOAD_CONST_SMALL_INT 5
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_PIOASMEmit_jmp = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_PIOASMEmit_jmp,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 33,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 56,
        .line_info = fun_data_rp2_PIOASMEmit_jmp + 7,
        .line_info_top = fun_data_rp2_PIOASMEmit_jmp + 12,
        .opcodes = fun_data_rp2_PIOASMEmit_jmp + 12,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_PIOASMEmit_jmp fun_data_rp2_PIOASMEmit_jmp[0]
#endif

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_wait
static const byte fun_data_rp2_PIOASMEmit_wait[52] = {
    0xc0,0x04,0x16, // prelude
    0x4c,0x63,0x69,0x6a,0x6b, // names: wait, self, polarity, src, index
    0x80,0x88,0x25,0x24,0x25,0x24, // code info
    0xb2, // LOAD_FAST 2
    0x86, // LOAD_CONST_SMALL_INT 6
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0xc2, // STORE_FAST 2
    0x42,0x49, // JUMP 9
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x82, // LOAD_CONST_SMALL_INT 2
    0xc2, // STORE_FAST 2
    0x42,0x40, // JUMP 0
    0xb0, // LOAD_FAST 0
    0x14,0x49, // LOAD_METHOD 'word'
    0x22,0x80,0xc0,0x00, // LOAD_CONST_SMALL_INT 8192
    0xb1, // LOAD_FAST 1
    0x87, // LOAD_CONST_SMALL_INT 7
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb2, // LOAD_FAST 2
    0x85, // LOAD_CONST_SMALL_INT 5
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb3, // LOAD_FAST 3
    0xed, // BINARY_OP 22 __or__
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_PIOASMEmit_wait = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_PIOASMEmit_wait,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 52,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 76,
        .line_info = fun_data_rp2_PIOASMEmit_wait + 8,
        .line_info_top = fun_data_rp2_PIOASMEmit_wait + 14,
        .opcodes = fun_data_rp2_PIOASMEmit_wait + 14,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_PIOASMEmit_wait fun_data_rp2_PIOASMEmit_wait[0]
#endif

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_in_
static const byte fun_data_rp2_PIOASMEmit_in_[55] = {
    0x3b,0x10, // prelude
    0x4d,0x63,0x6a,0x6c, // names: in_, self, src, data
    0x80,0x8f,0x2f,0x2c, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb2, // LOAD_FAST 2
    0x57, // DUP_TOP
    0x5b, // ROT_THREE
    0xd7, // BINARY_OP 0 __lt__
    0x46,0x04, // JUMP_IF_FALSE_OR_POP 4
    0xa0, // LOAD_CONST_SMALL_INT 32
    0xda, // BINARY_OP 3 __le__
    0x42,0x42, // JUMP 2
    0x5a, // ROT_TWO
    0x59, // POP_TOP
    0x43,0x4c, // POP_JUMP_IF_TRUE 12
    0x12,0x06, // LOAD_GLOBAL 'PIOASMError'
    0x23,0x08, // LOAD_CONST_OBJ 8
    0x14,0x48, // LOAD_METHOD 'format'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x14,0x49, // LOAD_METHOD 'word'
    0x22,0x81,0x80,0x00, // LOAD_CONST_SMALL_INT 16384
    0xb1, // LOAD_FAST 1
    0x85, // LOAD_CONST_SMALL_INT 5
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb2, // LOAD_FAST 2
    0x9f, // LOAD_CONST_SMALL_INT 31
    0xef, // BINARY_OP 24 __and__
    0xed, // BINARY_OP 22 __or__
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_PIOASMEmit_in_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_PIOASMEmit_in_,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 55,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 77,
        .line_info = fun_data_rp2_PIOASMEmit_in_ + 6,
        .line_info_top = fun_data_rp2_PIOASMEmit_in_ + 10,
        .opcodes = fun_data_rp2_PIOASMEmit_in_ + 10,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_PIOASMEmit_in_ fun_data_rp2_PIOASMEmit_in_[0]
#endif

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_out
static const byte fun_data_rp2_PIOASMEmit_out[64] = {
    0x3b,0x14, // prelude
    0x4e,0x63,0x6d,0x6c, // names: out, self, dest, data
    0x80,0x94,0x25,0x22,0x2f,0x2c, // code info
    0xb1, // LOAD_FAST 1
    0x88, // LOAD_CONST_SMALL_INT 8
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x87, // LOAD_CONST_SMALL_INT 7
    0xc1, // STORE_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb2, // LOAD_FAST 2
    0x57, // DUP_TOP
    0x5b, // ROT_THREE
    0xd7, // BINARY_OP 0 __lt__
    0x46,0x04, // JUMP_IF_FALSE_OR_POP 4
    0xa0, // LOAD_CONST_SMALL_INT 32
    0xda, // BINARY_OP 3 __le__
    0x42,0x42, // JUMP 2
    0x5a, // ROT_TWO
    0x59, // POP_TOP
    0x43,0x4c, // POP_JUMP_IF_TRUE 12
    0x12,0x06, // LOAD_GLOBAL 'PIOASMError'
    0x23,0x08, // LOAD_CONST_OBJ 8
    0x14,0x48, // LOAD_METHOD 'format'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x14,0x49, // LOAD_METHOD 'word'
    0x22,0x81,0xc0,0x00, // LOAD_CONST_SMALL_INT 24576
    0xb1, // LOAD_FAST 1
    0x85, // LOAD_CONST_SMALL_INT 5
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb2, // LOAD_FAST 2
    0x9f, // LOAD_CONST_SMALL_INT 31
    0xef, // BINARY_OP 24 __and__
    0xed, // BINARY_OP 22 __or__
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_PIOASMEmit_out = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_PIOASMEmit_out,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 64,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 78,
        .line_info = fun_data_rp2_PIOASMEmit_out + 6,
        .line_info_top = fun_data_rp2_PIOASMEmit_out + 12,
        .opcodes = fun_data_rp2_PIOASMEmit_out + 12,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_PIOASMEmit_out fun_data_rp2_PIOASMEmit_out[0]
#endif

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_push
static const byte fun_data_rp2_PIOASMEmit_push[42] = {
    0xbb,0x80,0x01,0x12, // prelude
    0x4f,0x63,0x67,0x6e, // names: push, self, value, value2
    0x80,0x9b,0x24,0x25,0x24, // code info
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xe0, // BINARY_OP 9 __ior__
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xef, // BINARY_OP 24 __and__
    0x43,0x44, // POP_JUMP_IF_TRUE 4
    0xb1, // LOAD_FAST 1
    0xa0, // LOAD_CONST_SMALL_INT 32
    0xe0, // BINARY_OP 9 __ior__
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x14,0x49, // LOAD_METHOD 'word'
    0x22,0x82,0x80,0x00, // LOAD_CONST_SMALL_INT 32768
    0xb1, // LOAD_FAST 1
    0x22,0x80,0x60, // LOAD_CONST_SMALL_INT 96
    0xef, // BINARY_OP 24 __and__
    0xed, // BINARY_OP 22 __or__
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_PIOASMEmit_push = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_PIOASMEmit_push,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 42,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 79,
        .line_info = fun_data_rp2_PIOASMEmit_push + 8,
        .line_info_top = fun_data_rp2_PIOASMEmit_push + 13,
        .opcodes = fun_data_rp2_PIOASMEmit_push + 13,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_PIOASMEmit_push fun_data_rp2_PIOASMEmit_push[0]
#endif

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_pull
static const byte fun_data_rp2_PIOASMEmit_pull[42] = {
    0xbb,0x80,0x01,0x12, // prelude
    0x50,0x63,0x67,0x6e, // names: pull, self, value, value2
    0x80,0xa1,0x24,0x25,0x24, // code info
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xe0, // BINARY_OP 9 __ior__
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xef, // BINARY_OP 24 __and__
    0x43,0x44, // POP_JUMP_IF_TRUE 4
    0xb1, // LOAD_FAST 1
    0xa0, // LOAD_CONST_SMALL_INT 32
    0xe0, // BINARY_OP 9 __ior__
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x14,0x49, // LOAD_METHOD 'word'
    0x22,0x82,0x81,0x00, // LOAD_CONST_SMALL_INT 32896
    0xb1, // LOAD_FAST 1
    0x22,0x80,0x60, // LOAD_CONST_SMALL_INT 96
    0xef, // BINARY_OP 24 __and__
    0xed, // BINARY_OP 22 __or__
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_PIOASMEmit_pull = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_PIOASMEmit_pull,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 42,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 80,
        .line_info = fun_data_rp2_PIOASMEmit_pull + 8,
        .line_info_top = fun_data_rp2_PIOASMEmit_pull + 13,
        .opcodes = fun_data_rp2_PIOASMEmit_pull + 13,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_PIOASMEmit_pull fun_data_rp2_PIOASMEmit_pull[0]
#endif

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_mov
static const byte fun_data_rp2_PIOASMEmit_mov[33] = {
    0x3b,0x10, // prelude
    0x51,0x63,0x6d,0x6a, // names: mov, self, dest, src
    0x80,0xa7,0x25,0x22, // code info
    0xb1, // LOAD_FAST 1
    0x88, // LOAD_CONST_SMALL_INT 8
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x84, // LOAD_CONST_SMALL_INT 4
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x14,0x49, // LOAD_METHOD 'word'
    0x22,0x82,0xc0,0x00, // LOAD_CONST_SMALL_INT 40960
    0xb1, // LOAD_FAST 1
    0x85, // LOAD_CONST_SMALL_INT 5
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb2, // LOAD_FAST 2
    0xed, // BINARY_OP 22 __or__
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_PIOASMEmit_mov = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_PIOASMEmit_mov,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 33,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 81,
        .line_info = fun_data_rp2_PIOASMEmit_mov + 6,
        .line_info_top = fun_data_rp2_PIOASMEmit_mov + 10,
        .opcodes = fun_data_rp2_PIOASMEmit_mov + 10,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_PIOASMEmit_mov fun_data_rp2_PIOASMEmit_mov[0]
#endif

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_irq
static const byte fun_data_rp2_PIOASMEmit_irq[39] = {
    0xbb,0x01,0x12, // prelude
    0x52,0x63,0x6f,0x6b, // names: irq, self, mod, index
    0x80,0xac,0x25,0x22,0x22, // code info
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0xb1, // LOAD_FAST 1
    0xc2, // STORE_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x14,0x49, // LOAD_METHOD 'word'
    0x22,0x83,0x80,0x00, // LOAD_CONST_SMALL_INT 49152
    0xb1, // LOAD_FAST 1
    0x22,0x80,0x60, // LOAD_CONST_SMALL_INT 96
    0xef, // BINARY_OP 24 __and__
    0xed, // BINARY_OP 22 __or__
    0xb2, // LOAD_FAST 2
    0xed, // BINARY_OP 22 __or__
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_PIOASMEmit_irq = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_PIOASMEmit_irq,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 39,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 82,
        .line_info = fun_data_rp2_PIOASMEmit_irq + 7,
        .line_info_top = fun_data_rp2_PIOASMEmit_irq + 12,
        .opcodes = fun_data_rp2_PIOASMEmit_irq + 12,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_PIOASMEmit_irq fun_data_rp2_PIOASMEmit_irq[0]
#endif

// child of rp2_PIOASMEmit
// frozen bytecode for file rp2.py, scope rp2_PIOASMEmit_set
static const byte fun_data_rp2_PIOASMEmit_set[24] = {
    0x3b,0x0c, // prelude
    0x53,0x63,0x6d,0x6c, // names: set, self, dest, data
    0x80,0xb2, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x49, // LOAD_METHOD 'word'
    0x22,0x83,0xc0,0x00, // LOAD_CONST_SMALL_INT 57344
    0xb1, // LOAD_FAST 1
    0x85, // LOAD_CONST_SMALL_INT 5
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb2, // LOAD_FAST 2
    0xed, // BINARY_OP 22 __or__
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_PIOASMEmit_set = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_PIOASMEmit_set,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 24,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 83,
        .line_info = fun_data_rp2_PIOASMEmit_set + 6,
        .line_info_top = fun_data_rp2_PIOASMEmit_set + 8,
        .opcodes = fun_data_rp2_PIOASMEmit_set + 8,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_PIOASMEmit_set fun_data_rp2_PIOASMEmit_set[0]
#endif

static const mp_raw_code_t *const children_rp2_PIOASMEmit[] = {
    (const mp_raw_code_t *)&proto_fun_rp2_PIOASMEmit___init__,
    (const mp_raw_code_t *)&proto_fun_rp2_PIOASMEmit_start_pass,
    (const mp_raw_code_t *)&proto_fun_rp2_PIOASMEmit___getitem__,
    (const mp_raw_code_t *)&proto_fun_rp2_PIOASMEmit_delay,
    (const mp_raw_code_t *)&proto_fun_rp2_PIOASMEmit_side,
    (const mp_raw_code_t *)&proto_fun_rp2_PIOASMEmit_wrap_target,
    (const mp_raw_code_t *)&proto_fun_rp2_PIOASMEmit_wrap,
    (const mp_raw_code_t *)&proto_fun_rp2_PIOASMEmit_label,
    (const mp_raw_code_t *)&proto_fun_rp2_PIOASMEmit_word,
    (const mp_raw_code_t *)&proto_fun_rp2_PIOASMEmit_nop,
    (const mp_raw_code_t *)&proto_fun_rp2_PIOASMEmit_jmp,
    (const mp_raw_code_t *)&proto_fun_rp2_PIOASMEmit_wait,
    (const mp_raw_code_t *)&proto_fun_rp2_PIOASMEmit_in_,
    (const mp_raw_code_t *)&proto_fun_rp2_PIOASMEmit_out,
    (const mp_raw_code_t *)&proto_fun_rp2_PIOASMEmit_push,
    (const mp_raw_code_t *)&proto_fun_rp2_PIOASMEmit_pull,
    (const mp_raw_code_t *)&proto_fun_rp2_PIOASMEmit_mov,
    (const mp_raw_code_t *)&proto_fun_rp2_PIOASMEmit_irq,
    (const mp_raw_code_t *)&proto_fun_rp2_PIOASMEmit_set,
};

static const mp_raw_code_truncated_t proto_fun_rp2_PIOASMEmit = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_PIOASMEmit,
    .children = (void *)&children_rp2_PIOASMEmit,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 208,
    .n_children = 19,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 7,
        .line_info = fun_data_rp2_PIOASMEmit + 3,
        .line_info_top = fun_data_rp2_PIOASMEmit + 44,
        .opcodes = fun_data_rp2_PIOASMEmit + 44,
    },
    #endif
    #endif
};

// child of rp2__lt_module_gt_
// frozen bytecode for file rp2.py, scope rp2__lt_lambda_gt_
static const byte fun_data_rp2__lt_lambda_gt_[10] = {
    0x11,0x08, // prelude
    0x2f,0x0a, // names: <lambda>, x
    0x80,0xc6, // code info
    0xb0, // LOAD_FAST 0
    0x88, // LOAD_CONST_SMALL_INT 8
    0xed, // BINARY_OP 22 __or__
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2__lt_lambda_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2__lt_lambda_gt_,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 10,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 47,
        .line_info = fun_data_rp2__lt_lambda_gt_ + 4,
        .line_info_top = fun_data_rp2__lt_lambda_gt_ + 6,
        .opcodes = fun_data_rp2__lt_lambda_gt_ + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2__lt_lambda_gt_ fun_data_rp2__lt_lambda_gt_[0]
#endif

// child of rp2__lt_module_gt_
// frozen bytecode for file rp2.py, scope rp2__lt_lambda_gt_2
static const byte fun_data_rp2__lt_lambda_gt_2[10] = {
    0x11,0x08, // prelude
    0x2f,0x0a, // names: <lambda>, x
    0x80,0xc7, // code info
    0xb0, // LOAD_FAST 0
    0x90, // LOAD_CONST_SMALL_INT 16
    0xed, // BINARY_OP 22 __or__
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2__lt_lambda_gt_2 = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2__lt_lambda_gt_2,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 10,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 47,
        .line_info = fun_data_rp2__lt_lambda_gt_2 + 4,
        .line_info_top = fun_data_rp2__lt_lambda_gt_2 + 6,
        .opcodes = fun_data_rp2__lt_lambda_gt_2 + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2__lt_lambda_gt_2 fun_data_rp2__lt_lambda_gt_2[0]
#endif

// child of rp2__lt_module_gt_
// frozen bytecode for file rp2.py, scope rp2__lt_lambda_gt_3
static const byte fun_data_rp2__lt_lambda_gt_3[10] = {
    0x11,0x08, // prelude
    0x2f,0x0a, // names: <lambda>, x
    0x80,0xd9, // code info
    0xb0, // LOAD_FAST 0
    0x90, // LOAD_CONST_SMALL_INT 16
    0xed, // BINARY_OP 22 __or__
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2__lt_lambda_gt_3 = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2__lt_lambda_gt_3,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 10,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 47,
        .line_info = fun_data_rp2__lt_lambda_gt_3 + 4,
        .line_info_top = fun_data_rp2__lt_lambda_gt_3 + 6,
        .opcodes = fun_data_rp2__lt_lambda_gt_3 + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2__lt_lambda_gt_3 fun_data_rp2__lt_lambda_gt_3[0]
#endif

// child of rp2__lt_module_gt_
// frozen bytecode for file rp2.py, scope rp2_asm_pio
static const byte fun_data_rp2_asm_pio[28] = {
    0xb0,0x80,0x40,0x0d, // prelude
    0x30, // names: asm_pio
    0x80,0xf4,0x4a,0x85,0x19,0x02, // code info
    0x12,0x07, // LOAD_GLOBAL 'PIOASMEmit'
    0x53, // LOAD_NULL
    0xb0, // LOAD_FAST 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0x35,0x82,0x00, // CALL_FUNCTION_VAR_KW 256
    0x27,0x02, // STORE_DEREF 2
    0xb2, // LOAD_FAST 2
    0x20,0x00,0x01, // MAKE_CLOSURE 0
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
};
// child of rp2_asm_pio
// frozen bytecode for file rp2.py, scope rp2_asm_pio_dec
static const byte fun_data_rp2_asm_pio_dec[129] = {
    0x76,0x2a, // prelude
    0x54,0x02,0x70, // names: dec, *, f
    0x80,0xf7,0x40,0x24,0x26,0x46,0x22,0x28,0x26,0x2c,0x26,0x4c,0x28,0x44,0x28,0x45,0x26,0x48, // code info
    0xb1, // LOAD_FAST 1
    0x13,0x55, // LOAD_ATTR '__globals__'
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x14,0x56, // LOAD_METHOD 'copy'
    0x36,0x00, // CALL_METHOD 0
    0xc3, // STORE_FAST 3
    0xb2, // LOAD_FAST 2
    0x14,0x20, // LOAD_METHOD 'clear'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x49,0x45, // SETUP_FINALLY 69
    0xb2, // LOAD_FAST 2
    0x14,0x57, // LOAD_METHOD 'update'
    0x12,0x59, // LOAD_GLOBAL '_pio_funcs'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x5a, // LOAD_GLOBAL '_pio_directives'
    0x5f, // GET_ITER_STACK
    0x4b,0x0d, // FOR_ITER 13
    0xc4, // STORE_FAST 4
    0x12,0x61, // LOAD_GLOBAL 'getattr'
    0x25,0x00, // LOAD_DEREF 0
    0xb4, // LOAD_FAST 4
    0x34,0x02, // CALL_FUNCTION 2
    0xb2, // LOAD_FAST 2
    0xb4, // LOAD_FAST 4
    0x56, // STORE_SUBSCR
    0x42,0x31, // JUMP -15
    0x12,0x5b, // LOAD_GLOBAL '_pio_instructions'
    0x5f, // GET_ITER_STACK
    0x4b,0x0d, // FOR_ITER 13
    0xc4, // STORE_FAST 4
    0x12,0x61, // LOAD_GLOBAL 'getattr'
    0x25,0x00, // LOAD_DEREF 0
    0xb4, // LOAD_FAST 4
    0x34,0x02, // CALL_FUNCTION 2
    0xb2, // LOAD_FAST 2
    0xb4, // LOAD_FAST 4
    0x56, // STORE_SUBSCR
    0x42,0x31, // JUMP -15
    0x25,0x00, // LOAD_DEREF 0
    0x14,0x3f, // LOAD_METHOD 'start_pass'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x34,0x00, // CALL_FUNCTION 0
    0x59, // POP_TOP
    0x25,0x00, // LOAD_DEREF 0
    0x14,0x3f, // LOAD_METHOD 'start_pass'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x34,0x00, // CALL_FUNCTION 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0xb2, // LOAD_FAST 2
    0x14,0x20, // LOAD_METHOD 'clear'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb2, // LOAD_FAST 2
    0x14,0x57, // LOAD_METHOD 'update'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x5d, // END_FINALLY
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x39, // LOAD_ATTR 'prog'
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_asm_pio_dec = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_asm_pio_dec,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 129,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 84,
        .line_info = fun_data_rp2_asm_pio_dec + 5,
        .line_info_top = fun_data_rp2_asm_pio_dec + 23,
        .opcodes = fun_data_rp2_asm_pio_dec + 23,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_asm_pio_dec fun_data_rp2_asm_pio_dec[0]
#endif

static const mp_raw_code_t *const children_rp2_asm_pio[] = {
    (const mp_raw_code_t *)&proto_fun_rp2_asm_pio_dec,
};

static const mp_raw_code_truncated_t proto_fun_rp2_asm_pio = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_asm_pio,
    .children = (void *)&children_rp2_asm_pio,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 28,
    .n_children = 1,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 2,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 48,
        .line_info = fun_data_rp2_asm_pio + 5,
        .line_info_top = fun_data_rp2_asm_pio + 10,
        .opcodes = fun_data_rp2_asm_pio + 11,
    },
    #endif
    #endif
};

// child of rp2__lt_module_gt_
// frozen bytecode for file rp2.py, scope rp2_asm_pio_encode
static const byte fun_data_rp2_asm_pio_encode[142] = {
    0xf7,0x01,0x2e, // prelude
    0x31,0x60,0x32,0x33, // names: asm_pio_encode, instr, sideset_count, sideset_opt
    0x90,0x14,0x25,0x24,0x26,0x2c,0x24,0x24,0x44,0x23,0x26,0x2b,0x45,0x22,0x48,0x26,0x48,0x2d,0x27, // code info
    0x12,0x07, // LOAD_GLOBAL 'PIOASMEmit'
    0x34,0x00, // CALL_FUNCTION 0
    0xc3, // STORE_FAST 3
    0xb1, // LOAD_FAST 1
    0xb3, // LOAD_FAST 3
    0x18,0x32, // STORE_ATTR 'sideset_count'
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xdc, // BINARY_OP 5 __ne__
    0xb3, // LOAD_FAST 3
    0x18,0x33, // STORE_ATTR 'sideset_opt'
    0x9f, // LOAD_CONST_SMALL_INT 31
    0xb3, // LOAD_FAST 3
    0x13,0x32, // LOAD_ATTR 'sideset_count'
    0xb3, // LOAD_FAST 3
    0x13,0x33, // LOAD_ATTR 'sideset_opt'
    0xf2, // BINARY_OP 27 __add__
    0xf1, // BINARY_OP 26 __rshift__
    0xb3, // LOAD_FAST 3
    0x18,0x34, // STORE_ATTR 'delay_max'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb3, // LOAD_FAST 3
    0x18,0x35, // STORE_ATTR 'pass_'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb3, // LOAD_FAST 3
    0x18,0x36, // STORE_ATTR 'num_instr'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb3, // LOAD_FAST 3
    0x18,0x37, // STORE_ATTR 'num_sideset'
    0x12,0x59, // LOAD_GLOBAL '_pio_funcs'
    0xc4, // STORE_FAST 4
    0x12,0x5b, // LOAD_GLOBAL '_pio_instructions'
    0x5f, // GET_ITER_STACK
    0x4b,0x0c, // FOR_ITER 12
    0xc5, // STORE_FAST 5
    0x12,0x61, // LOAD_GLOBAL 'getattr'
    0xb3, // LOAD_FAST 3
    0xb5, // LOAD_FAST 5
    0x34,0x02, // CALL_FUNCTION 2
    0xb4, // LOAD_FAST 4
    0xb5, // LOAD_FAST 5
    0x56, // STORE_SUBSCR
    0x42,0x32, // JUMP -14
    0x51, // LOAD_CONST_NONE
    0xb4, // LOAD_FAST 4
    0x10,0x38, // LOAD_CONST_STRING 'jmp'
    0x56, // STORE_SUBSCR
    0x49,0x08, // SETUP_FINALLY 8
    0x12,0x12, // LOAD_GLOBAL 'exec'
    0xb0, // LOAD_FAST 0
    0xb4, // LOAD_FAST 4
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x12,0x5b, // LOAD_GLOBAL '_pio_instructions'
    0x5f, // GET_ITER_STACK
    0x4b,0x08, // FOR_ITER 8
    0xc5, // STORE_FAST 5
    0xb4, // LOAD_FAST 4
    0xb5, // LOAD_FAST 5
    0x53, // LOAD_NULL
    0x5b, // ROT_THREE
    0x56, // STORE_SUBSCR
    0x42,0x36, // JUMP -10
    0x5d, // END_FINALLY
    0x12,0x62, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x13,0x39, // LOAD_ATTR 'prog'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x34,0x01, // CALL_FUNCTION 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x06, // LOAD_GLOBAL 'PIOASMError'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb3, // LOAD_FAST 3
    0x13,0x39, // LOAD_ATTR 'prog'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_rp2_asm_pio_encode = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2_asm_pio_encode,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 142,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 49,
        .line_info = fun_data_rp2_asm_pio_encode + 7,
        .line_info_top = fun_data_rp2_asm_pio_encode + 26,
        .opcodes = fun_data_rp2_asm_pio_encode + 26,
    },
    #endif
    #endif
};
#else
#define proto_fun_rp2_asm_pio_encode fun_data_rp2_asm_pio_encode[0]
#endif

static const mp_raw_code_t *const children_rp2__lt_module_gt_[] = {
    (const mp_raw_code_t *)&proto_fun_rp2_PIOASMError,
    (const mp_raw_code_t *)&proto_fun_rp2_PIOASMEmit,
    (const mp_raw_code_t *)&proto_fun_rp2__lt_lambda_gt_,
    (const mp_raw_code_t *)&proto_fun_rp2__lt_lambda_gt_2,
    (const mp_raw_code_t *)&proto_fun_rp2__lt_lambda_gt_3,
    (const mp_raw_code_t *)&proto_fun_rp2_asm_pio,
    (const mp_raw_code_t *)&proto_fun_rp2_asm_pio_encode,
};

static const mp_raw_code_truncated_t proto_fun_rp2__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_rp2__lt_module_gt_,
    .children = (void *)&children_rp2__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 228,
    .n_children = 7,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_rp2__lt_module_gt_ + 3,
        .line_info_top = fun_data_rp2__lt_module_gt_ + 49,
        .opcodes = fun_data_rp2__lt_module_gt_ + 49,
    },
    #endif
    #endif
};

static const qstr_short_t const_qstr_table_data_rp2[113] = {
    MP_QSTR_rp2_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR__star_,
    MP_QSTR__rp2,
    MP_QSTR_const,
    MP_QSTR_micropython,
    MP_QSTR_PIOASMError,
    MP_QSTR_PIOASMEmit,
    MP_QSTR_gpio,
    MP_QSTR_pins,
    MP_QSTR_x,
    MP_QSTR_y,
    MP_QSTR_null,
    MP_QSTR_pindirs,
    MP_QSTR_pc,
    MP_QSTR_status,
    MP_QSTR_isr,
    MP_QSTR_osr,
    MP_QSTR_exec,
    MP_QSTR_invert,
    MP_QSTR_reverse,
    MP_QSTR_not_x,
    MP_QSTR_x_dec,
    MP_QSTR_not_y,
    MP_QSTR_y_dec,
    MP_QSTR_x_not_y,
    MP_QSTR_pin,
    MP_QSTR_not_osre,
    MP_QSTR_noblock,
    MP_QSTR_block,
    MP_QSTR_iffull,
    MP_QSTR_ifempty,
    MP_QSTR_clear,
    MP_QSTR_rel,
    MP_QSTR_out_init,
    MP_QSTR_set_init,
    MP_QSTR_sideset_init,
    MP_QSTR_side_pindir,
    MP_QSTR_SHIFT_LEFT,
    MP_QSTR_in_shiftdir,
    MP_QSTR_out_shiftdir,
    MP_QSTR_autopush,
    MP_QSTR_autopull,
    MP_QSTR_push_thresh,
    MP_QSTR_pull_thresh,
    MP_QSTR_JOIN_NONE,
    MP_QSTR_fifo_join,
    MP_QSTR__lt_lambda_gt_,
    MP_QSTR_asm_pio,
    MP_QSTR_asm_pio_encode,
    MP_QSTR_sideset_count,
    MP_QSTR_sideset_opt,
    MP_QSTR_delay_max,
    MP_QSTR_pass_,
    MP_QSTR_num_instr,
    MP_QSTR_num_sideset,
    MP_QSTR_jmp,
    MP_QSTR_prog,
    MP_QSTR___init__,
    MP_QSTR_array,
    MP_QSTR_labels,
    MP_QSTR_H,
    MP_QSTR_wrap_used,
    MP_QSTR_start_pass,
    MP_QSTR_wrap,
    MP_QSTR___getitem__,
    MP_QSTR_delay,
    MP_QSTR_side,
    MP_QSTR_no_space_sideset,
    MP_QSTR_wrap_target,
    MP_QSTR_AssertionError,
    MP_QSTR_label,
    MP_QSTR_format,
    MP_QSTR_word,
    MP_QSTR_append,
    MP_QSTR_nop,
    MP_QSTR_wait,
    MP_QSTR_in_,
    MP_QSTR_out,
    MP_QSTR_push,
    MP_QSTR_pull,
    MP_QSTR_mov,
    MP_QSTR_irq,
    MP_QSTR_set,
    MP_QSTR_dec,
    MP_QSTR___globals__,
    MP_QSTR_copy,
    MP_QSTR_update,
    MP_QSTR_Exception,
    MP_QSTR__pio_funcs,
    MP_QSTR__pio_directives,
    MP_QSTR__pio_instructions,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_PIO,
    MP_QSTR_instr,
    MP_QSTR_getattr,
    MP_QSTR_len,
    MP_QSTR_self,
    MP_QSTR_isinstance,
    MP_QSTR_int,
    MP_QSTR_key,
    MP_QSTR_value,
    MP_QSTR_cond,
    MP_QSTR_polarity,
    MP_QSTR_src,
    MP_QSTR_index,
    MP_QSTR_data,
    MP_QSTR_dest,
    MP_QSTR_value2,
    MP_QSTR_mod,
    MP_QSTR_f,
};

// constants
static const mp_rom_obj_tuple_t const_obj_rp2_0 = {{&mp_type_tuple}, 3, {
    MP_ROM_QSTR(MP_QSTR_wrap_target),
    MP_ROM_QSTR(MP_QSTR_wrap),
    MP_ROM_QSTR(MP_QSTR_label),
}};
static const mp_rom_obj_tuple_t const_obj_rp2_1 = {{&mp_type_tuple}, 11, {
    MP_ROM_QSTR(MP_QSTR_word),
    MP_ROM_QSTR(MP_QSTR_nop),
    MP_ROM_QSTR(MP_QSTR_jmp),
    MP_ROM_QSTR(MP_QSTR_wait),
    MP_ROM_QSTR(MP_QSTR_in_),
    MP_ROM_QSTR(MP_QSTR_out),
    MP_ROM_QSTR(MP_QSTR_push),
    MP_ROM_QSTR(MP_QSTR_pull),
    MP_ROM_QSTR(MP_QSTR_mov),
    MP_ROM_QSTR(MP_QSTR_irq),
    MP_ROM_QSTR(MP_QSTR_set),
}};
static const mp_obj_str_t const_obj_rp2_2 = {{&mp_type_str}, 13, 31, (const byte*)"\x65\x78\x70\x65\x63\x74\x69\x6e\x67\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x31\x20\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e"};
static const mp_obj_int_t const_obj_rp2_3 = {{&mp_type_int}, {.neg=0, .fixed_dig=1, .alloc=2, .len=2, .dig=(uint16_t*)(const uint16_t[]){0x0,0x4000}}};

// constant table
static const mp_rom_obj_t const_obj_table_data_rp2[9] = {
    MP_ROM_PTR(&const_obj_rp2_0),
    MP_ROM_PTR(&const_obj_rp2_1),
    MP_ROM_PTR(&const_obj_rp2_2),
    MP_ROM_PTR(&const_obj_rp2_3),
    MP_ROM_QSTR(MP_QSTR_delay_space_too_space_large),
    MP_ROM_QSTR(MP_QSTR_sideset_space_too_space_large),
    MP_ROM_QSTR(MP_QSTR_duplicate_space_label_space__brace_open__brace_close_),
    MP_ROM_QSTR(MP_QSTR_unknown_space_label_space__brace_open__brace_close_),
    MP_ROM_QSTR(MP_QSTR_invalid_space_bit_space_count_space__brace_open__brace_close_),
};

static const mp_frozen_module_t frozen_module_rp2 = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_rp2,
        .obj_table = (mp_obj_t *)&const_obj_table_data_rp2,
    },
    .proto_fun = &proto_fun_rp2__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module asyncio___init__
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/asyncio/__init__.mpy
// - frozen file name: asyncio/__init__.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file asyncio/__init__.py, scope asyncio___init____lt_module_gt_
static const byte fun_data_asyncio___init____lt_module_gt_[75] = {
    0x10,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x02, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME 'core'
    0x69, // IMPORT_STAR
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x16,0x0e, // STORE_NAME '__version__'
    0x2c,0x0a, // BUILD_MAP 10
    0x10,0x04, // LOAD_CONST_STRING 'funcs'
    0x10,0x05, // LOAD_CONST_STRING 'wait_for'
    0x62, // STORE_MAP
    0x10,0x04, // LOAD_CONST_STRING 'funcs'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x62, // STORE_MAP
    0x10,0x04, // LOAD_CONST_STRING 'funcs'
    0x10,0x06, // LOAD_CONST_STRING 'gather'
    0x62, // STORE_MAP
    0x10,0x07, // LOAD_CONST_STRING 'event'
    0x10,0x08, // LOAD_CONST_STRING 'Event'
    0x62, // STORE_MAP
    0x10,0x07, // LOAD_CONST_STRING 'event'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x62, // STORE_MAP
    0x10,0x09, // LOAD_CONST_STRING 'lock'
    0x10,0x0a, // LOAD_CONST_STRING 'Lock'
    0x62, // STORE_MAP
    0x10,0x0b, // LOAD_CONST_STRING 'stream'
    0x23,0x03, // LOAD_CONST_OBJ 3
    0x62, // STORE_MAP
    0x10,0x0b, // LOAD_CONST_STRING 'stream'
    0x23,0x04, // LOAD_CONST_OBJ 4
    0x62, // STORE_MAP
    0x10,0x0b, // LOAD_CONST_STRING 'stream'
    0x23,0x05, // LOAD_CONST_OBJ 5
    0x62, // STORE_MAP
    0x10,0x0b, // LOAD_CONST_STRING 'stream'
    0x23,0x06, // LOAD_CONST_OBJ 6
    0x62, // STORE_MAP
    0x16,0x0f, // STORE_NAME '_attrs'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x0c, // STORE_NAME '__getattr__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio___init____lt_module_gt_
// frozen bytecode for file asyncio/__init__.py, scope asyncio___init_____getattr__
static const byte fun_data_asyncio___init_____getattr__[51] = {
    0x49,0x04, // prelude
    0x0c,0x10, // names: __getattr__, attr
     // code info
    0x12,0x0f, // LOAD_GLOBAL '_attrs'
    0x14,0x0d, // LOAD_METHOD 'get'
    0xb0, // LOAD_FAST 0
    0x51, // LOAD_CONST_NONE
    0x36,0x02, // CALL_METHOD 2
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x12,0x11, // LOAD_GLOBAL 'AttributeError'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x12,0x12, // LOAD_GLOBAL 'getattr'
    0x12,0x13, // LOAD_GLOBAL '__import__'
    0xb1, // LOAD_FAST 1
    0x12,0x14, // LOAD_GLOBAL 'globals'
    0x34,0x00, // CALL_FUNCTION 0
    0x51, // LOAD_CONST_NONE
    0x52, // LOAD_CONST_TRUE
    0x81, // LOAD_CONST_SMALL_INT 1
    0x34,0x05, // CALL_FUNCTION 5
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x12,0x14, // LOAD_GLOBAL 'globals'
    0x34,0x00, // CALL_FUNCTION 0
    0xb0, // LOAD_FAST 0
    0x56, // STORE_SUBSCR
    0xb2, // LOAD_FAST 2
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio___init_____getattr__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio___init_____getattr__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 51,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_asyncio___init_____getattr__ + 4,
        .line_info_top = fun_data_asyncio___init_____getattr__ + 4,
        .opcodes = fun_data_asyncio___init_____getattr__ + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio___init_____getattr__ fun_data_asyncio___init_____getattr__[0]
#endif

static const mp_raw_code_t *const children_asyncio___init____lt_module_gt_[] = {
    (const mp_raw_code_t *)&proto_fun_asyncio___init_____getattr__,
};

static const mp_raw_code_truncated_t proto_fun_asyncio___init____lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio___init____lt_module_gt_,
    .children = (void *)&children_asyncio___init____lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 75,
    .n_children = 1,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_asyncio___init____lt_module_gt_ + 3,
        .line_info_top = fun_data_asyncio___init____lt_module_gt_ + 3,
        .opcodes = fun_data_asyncio___init____lt_module_gt_ + 3,
    },
    #endif
    #endif
};

static const qstr_short_t const_qstr_table_data_asyncio___init__[21] = {
    MP_QSTR_asyncio_slash___init___dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR__star_,
    MP_QSTR_core,
    MP_QSTR_funcs,
    MP_QSTR_wait_for,
    MP_QSTR_gather,
    MP_QSTR_event,
    MP_QSTR_Event,
    MP_QSTR_lock,
    MP_QSTR_Lock,
    MP_QSTR_stream,
    MP_QSTR___getattr__,
    MP_QSTR_get,
    MP_QSTR___version__,
    MP_QSTR__attrs,
    MP_QSTR_attr,
    MP_QSTR_AttributeError,
    MP_QSTR_getattr,
    MP_QSTR___import__,
    MP_QSTR_globals,
};

// constants
static const mp_rom_obj_tuple_t const_obj_asyncio___init___0 = {{&mp_type_tuple}, 3, {
    MP_ROM_INT(3),
    MP_ROM_INT(0),
    MP_ROM_INT(0),
}};

// constant table
static const mp_rom_obj_t const_obj_table_data_asyncio___init__[7] = {
    MP_ROM_PTR(&const_obj_asyncio___init___0),
    MP_ROM_QSTR(MP_QSTR_wait_for_ms),
    MP_ROM_QSTR(MP_QSTR_ThreadSafeFlag),
    MP_ROM_QSTR(MP_QSTR_open_connection),
    MP_ROM_QSTR(MP_QSTR_start_server),
    MP_ROM_QSTR(MP_QSTR_StreamReader),
    MP_ROM_QSTR(MP_QSTR_StreamWriter),
};

static const mp_frozen_module_t frozen_module_asyncio___init__ = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_asyncio___init__,
        .obj_table = (mp_obj_t *)&const_obj_table_data_asyncio___init__,
    },
    .proto_fun = &proto_fun_asyncio___init____lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module asyncio_core
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/asyncio/core.mpy
// - frozen file name: asyncio/core.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file asyncio/core.py, scope asyncio_core__lt_module_gt_
static const byte fun_data_asyncio_core__lt_module_gt_[218] = {
    0x2c,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING 'ticks_ms'
    0x10,0x03, // LOAD_CONST_STRING 'ticks_diff'
    0x10,0x04, // LOAD_CONST_STRING 'ticks_add'
    0x2a,0x03, // BUILD_TUPLE 3
    0x1b,0x05, // IMPORT_NAME 'time'
    0x1c,0x02, // IMPORT_FROM 'ticks_ms'
    0x16,0x49, // STORE_NAME 'ticks'
    0x1c,0x03, // IMPORT_FROM 'ticks_diff'
    0x16,0x03, // STORE_NAME 'ticks_diff'
    0x1c,0x04, // IMPORT_FROM 'ticks_add'
    0x16,0x04, // STORE_NAME 'ticks_add'
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x06, // IMPORT_NAME 'sys'
    0x16,0x06, // STORE_NAME 'sys'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x07, // IMPORT_NAME 'select'
    0x16,0x07, // STORE_NAME 'select'
    0x48,0x14, // SETUP_EXCEPT 20
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x08, // LOAD_CONST_STRING 'TaskQueue'
    0x10,0x09, // LOAD_CONST_STRING 'Task'
    0x2a,0x02, // BUILD_TUPLE 2
    0x1b,0x0a, // IMPORT_NAME '_asyncio'
    0x1c,0x08, // IMPORT_FROM 'TaskQueue'
    0x16,0x08, // STORE_NAME 'TaskQueue'
    0x1c,0x09, // IMPORT_FROM 'Task'
    0x16,0x09, // STORE_NAME 'Task'
    0x59, // POP_TOP
    0x4a,0x16, // POP_EXCEPT_JUMP 22
    0x59, // POP_TOP
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x08, // LOAD_CONST_STRING 'TaskQueue'
    0x10,0x09, // LOAD_CONST_STRING 'Task'
    0x2a,0x02, // BUILD_TUPLE 2
    0x1b,0x0b, // IMPORT_NAME 'task'
    0x1c,0x08, // IMPORT_FROM 'TaskQueue'
    0x16,0x08, // STORE_NAME 'TaskQueue'
    0x1c,0x09, // IMPORT_FROM 'Task'
    0x16,0x09, // STORE_NAME 'Task'
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x0c, // LOAD_CONST_STRING 'CancelledError'
    0x11,0x4a, // LOAD_NAME 'BaseException'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x0c, // STORE_NAME 'CancelledError'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x0d, // LOAD_CONST_STRING 'TimeoutError'
    0x11,0x4b, // LOAD_NAME 'Exception'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x0d, // STORE_NAME 'TimeoutError'
    0x2c,0x03, // BUILD_MAP 3
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x10,0x0e, // LOAD_CONST_STRING 'message'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x0f, // LOAD_CONST_STRING 'exception'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x10, // LOAD_CONST_STRING 'future'
    0x62, // STORE_MAP
    0x16,0x4c, // STORE_NAME '_exc_context'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x02, // MAKE_FUNCTION 2
    0x10,0x11, // LOAD_CONST_STRING 'SingletonGenerator'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x11, // STORE_NAME 'SingletonGenerator'
    0x11,0x11, // LOAD_NAME 'SingletonGenerator'
    0x34,0x00, // CALL_FUNCTION 0
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x03, // MAKE_FUNCTION_DEFARGS 3
    0x16,0x14, // STORE_NAME 'sleep_ms'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x16, // STORE_NAME 'sleep'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x05, // MAKE_FUNCTION 5
    0x10,0x12, // LOAD_CONST_STRING 'IOQueue'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x12, // STORE_NAME 'IOQueue'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x17, // STORE_NAME '_promote_to_task'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x18, // STORE_NAME 'create_task'
    0x51, // LOAD_CONST_NONE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x08, // MAKE_FUNCTION_DEFARGS 8
    0x16,0x1b, // STORE_NAME 'run_until_complete'
    0x32,0x09, // MAKE_FUNCTION 9
    0x16,0x26, // STORE_NAME 'run'
    0x32,0x0a, // MAKE_FUNCTION 10
    0x16,0x27, // STORE_NAME '_stopper'
    0x51, // LOAD_CONST_NONE
    0x17,0x4d, // STORE_GLOBAL 'cur_task'
    0x51, // LOAD_CONST_NONE
    0x17,0x4e, // STORE_GLOBAL '_stop_task'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x0b, // MAKE_FUNCTION 11
    0x10,0x13, // LOAD_CONST_STRING 'Loop'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x13, // STORE_NAME 'Loop'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x0c, // MAKE_FUNCTION_DEFARGS 12
    0x16,0x28, // STORE_NAME 'get_event_loop'
    0x32,0x0d, // MAKE_FUNCTION 13
    0x16,0x29, // STORE_NAME 'current_task'
    0x32,0x0e, // MAKE_FUNCTION 14
    0x16,0x2a, // STORE_NAME 'new_event_loop'
    0x11,0x2a, // LOAD_NAME 'new_event_loop'
    0x34,0x00, // CALL_FUNCTION 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_CancelledError
static const byte fun_data_asyncio_core_CancelledError[13] = {
    0x00,0x02, // prelude
    0x0c, // names: CancelledError
     // code info
    0x11,0x4f, // LOAD_NAME '__name__'
    0x16,0x50, // STORE_NAME '__module__'
    0x10,0x0c, // LOAD_CONST_STRING 'CancelledError'
    0x16,0x51, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_CancelledError = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_CancelledError,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 13,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_asyncio_core_CancelledError + 3,
        .line_info_top = fun_data_asyncio_core_CancelledError + 3,
        .opcodes = fun_data_asyncio_core_CancelledError + 3,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_CancelledError fun_data_asyncio_core_CancelledError[0]
#endif

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_TimeoutError
static const byte fun_data_asyncio_core_TimeoutError[13] = {
    0x00,0x02, // prelude
    0x0d, // names: TimeoutError
     // code info
    0x11,0x4f, // LOAD_NAME '__name__'
    0x16,0x50, // STORE_NAME '__module__'
    0x10,0x0d, // LOAD_CONST_STRING 'TimeoutError'
    0x16,0x51, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_TimeoutError = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_TimeoutError,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 13,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_asyncio_core_TimeoutError + 3,
        .line_info_top = fun_data_asyncio_core_TimeoutError + 3,
        .opcodes = fun_data_asyncio_core_TimeoutError + 3,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_TimeoutError fun_data_asyncio_core_TimeoutError[0]
#endif

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_SingletonGenerator
static const byte fun_data_asyncio_core_SingletonGenerator[25] = {
    0x00,0x02, // prelude
    0x11, // names: SingletonGenerator
     // code info
    0x11,0x4f, // LOAD_NAME '__name__'
    0x16,0x50, // STORE_NAME '__module__'
    0x10,0x11, // LOAD_CONST_STRING 'SingletonGenerator'
    0x16,0x51, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x2b, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x2d, // STORE_NAME '__iter__'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x2e, // STORE_NAME '__next__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_core_SingletonGenerator
// frozen bytecode for file asyncio/core.py, scope asyncio_core_SingletonGenerator___init__
static const byte fun_data_asyncio_core_SingletonGenerator___init__[17] = {
    0x11,0x04, // prelude
    0x2b,0x63, // names: __init__, self
     // code info
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x15, // STORE_ATTR 'state'
    0x12,0x5d, // LOAD_GLOBAL 'StopIteration'
    0x34,0x00, // CALL_FUNCTION 0
    0xb0, // LOAD_FAST 0
    0x18,0x2c, // STORE_ATTR 'exc'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_SingletonGenerator___init__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_SingletonGenerator___init__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 17,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 43,
        .line_info = fun_data_asyncio_core_SingletonGenerator___init__ + 4,
        .line_info_top = fun_data_asyncio_core_SingletonGenerator___init__ + 4,
        .opcodes = fun_data_asyncio_core_SingletonGenerator___init__ + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_SingletonGenerator___init__ fun_data_asyncio_core_SingletonGenerator___init__[0]
#endif

// child of asyncio_core_SingletonGenerator
// frozen bytecode for file asyncio/core.py, scope asyncio_core_SingletonGenerator___iter__
static const byte fun_data_asyncio_core_SingletonGenerator___iter__[6] = {
    0x09,0x04, // prelude
    0x2d,0x63, // names: __iter__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_SingletonGenerator___iter__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_SingletonGenerator___iter__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 6,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 45,
        .line_info = fun_data_asyncio_core_SingletonGenerator___iter__ + 4,
        .line_info_top = fun_data_asyncio_core_SingletonGenerator___iter__ + 4,
        .opcodes = fun_data_asyncio_core_SingletonGenerator___iter__ + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_SingletonGenerator___iter__ fun_data_asyncio_core_SingletonGenerator___iter__[0]
#endif

// child of asyncio_core_SingletonGenerator
// frozen bytecode for file asyncio/core.py, scope asyncio_core_SingletonGenerator___next__
static const byte fun_data_asyncio_core_SingletonGenerator___next__[42] = {
    0x21,0x04, // prelude
    0x2e,0x63, // names: __next__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x15, // LOAD_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x52, // POP_JUMP_IF_FALSE 18
    0x12,0x5b, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0x12,0x4d, // LOAD_GLOBAL 'cur_task'
    0xb0, // LOAD_FAST 0
    0x13,0x15, // LOAD_ATTR 'state'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x15, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x13,0x2c, // LOAD_ATTR 'exc'
    0x18,0x2f, // STORE_ATTR '__traceback__'
    0xb0, // LOAD_FAST 0
    0x13,0x2c, // LOAD_ATTR 'exc'
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_SingletonGenerator___next__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_SingletonGenerator___next__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 42,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 46,
        .line_info = fun_data_asyncio_core_SingletonGenerator___next__ + 4,
        .line_info_top = fun_data_asyncio_core_SingletonGenerator___next__ + 4,
        .opcodes = fun_data_asyncio_core_SingletonGenerator___next__ + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_SingletonGenerator___next__ fun_data_asyncio_core_SingletonGenerator___next__[0]
#endif

static const mp_raw_code_t *const children_asyncio_core_SingletonGenerator[] = {
    (const mp_raw_code_t *)&proto_fun_asyncio_core_SingletonGenerator___init__,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_SingletonGenerator___iter__,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_SingletonGenerator___next__,
};

static const mp_raw_code_truncated_t proto_fun_asyncio_core_SingletonGenerator = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_SingletonGenerator,
    .children = (void *)&children_asyncio_core_SingletonGenerator,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 25,
    .n_children = 3,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_asyncio_core_SingletonGenerator + 3,
        .line_info_top = fun_data_asyncio_core_SingletonGenerator + 3,
        .opcodes = fun_data_asyncio_core_SingletonGenerator + 3,
    },
    #endif
    #endif
};

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_sleep_ms
static const byte fun_data_asyncio_core_sleep_ms[25] = {
    0xb2,0x01,0x06, // prelude
    0x14,0x52,0x53, // names: sleep_ms, t, sgen
     // code info
    0x12,0x04, // LOAD_GLOBAL 'ticks_add'
    0x12,0x49, // LOAD_GLOBAL 'ticks'
    0x34,0x00, // CALL_FUNCTION 0
    0x12,0x54, // LOAD_GLOBAL 'max'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0x34,0x02, // CALL_FUNCTION 2
    0xb1, // LOAD_FAST 1
    0x18,0x15, // STORE_ATTR 'state'
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_sleep_ms = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_sleep_ms,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 25,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_asyncio_core_sleep_ms + 6,
        .line_info_top = fun_data_asyncio_core_sleep_ms + 6,
        .opcodes = fun_data_asyncio_core_sleep_ms + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_sleep_ms fun_data_asyncio_core_sleep_ms[0]
#endif

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_sleep
static const byte fun_data_asyncio_core_sleep[18] = {
    0x21,0x04, // prelude
    0x16,0x52, // names: sleep, t
     // code info
    0x12,0x14, // LOAD_GLOBAL 'sleep_ms'
    0x12,0x55, // LOAD_GLOBAL 'int'
    0xb0, // LOAD_FAST 0
    0x22,0x87,0x68, // LOAD_CONST_SMALL_INT 1000
    0xf4, // BINARY_OP 29 __mul__
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_sleep = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_sleep,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 18,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 22,
        .line_info = fun_data_asyncio_core_sleep + 4,
        .line_info_top = fun_data_asyncio_core_sleep + 4,
        .opcodes = fun_data_asyncio_core_sleep + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_sleep fun_data_asyncio_core_sleep[0]
#endif

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_IOQueue
static const byte fun_data_asyncio_core_IOQueue[41] = {
    0x00,0x02, // prelude
    0x12, // names: IOQueue
     // code info
    0x11,0x4f, // LOAD_NAME '__name__'
    0x16,0x50, // STORE_NAME '__module__'
    0x10,0x12, // LOAD_CONST_STRING 'IOQueue'
    0x16,0x51, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x2b, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x32, // STORE_NAME '_enqueue'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x37, // STORE_NAME '_dequeue'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x39, // STORE_NAME 'queue_read'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x3a, // STORE_NAME 'queue_write'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x3b, // STORE_NAME 'remove'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x1f, // STORE_NAME 'wait_io_event'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_core_IOQueue
// frozen bytecode for file asyncio/core.py, scope asyncio_core_IOQueue___init__
static const byte fun_data_asyncio_core_IOQueue___init__[20] = {
    0x11,0x04, // prelude
    0x2b,0x63, // names: __init__, self
     // code info
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x14,0x30, // LOAD_METHOD 'poll'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x18,0x31, // STORE_ATTR 'poller'
    0x2c,0x00, // BUILD_MAP 0
    0xb0, // LOAD_FAST 0
    0x18,0x1e, // STORE_ATTR 'map'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_IOQueue___init__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_IOQueue___init__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 20,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 43,
        .line_info = fun_data_asyncio_core_IOQueue___init__ + 4,
        .line_info_top = fun_data_asyncio_core_IOQueue___init__ + 4,
        .opcodes = fun_data_asyncio_core_IOQueue___init__ + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_IOQueue___init__ fun_data_asyncio_core_IOQueue___init__[0]
#endif

// child of asyncio_core_IOQueue
// frozen bytecode for file asyncio/core.py, scope asyncio_core_IOQueue__enqueue
static const byte fun_data_asyncio_core_IOQueue__enqueue[105] = {
    0x4b,0x08, // prelude
    0x32,0x63,0x64,0x65, // names: _enqueue, self, s, idx
     // code info
    0x12,0x66, // LOAD_GLOBAL 'id'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0xdd, // BINARY_OP 6 <in>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x6f, // POP_JUMP_IF_FALSE 47
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xb1, // LOAD_FAST 1
    0x2b,0x03, // BUILD_LIST 3
    0xc3, // STORE_FAST 3
    0x12,0x4d, // LOAD_GLOBAL 'cur_task'
    0xb3, // LOAD_FAST 3
    0xb2, // LOAD_FAST 2
    0x56, // STORE_SUBSCR
    0xb3, // LOAD_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0x12,0x66, // LOAD_GLOBAL 'id'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x33, // LOAD_METHOD 'register'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x34, // LOAD_ATTR 'POLLIN'
    0x42,0x44, // JUMP 4
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x35, // LOAD_ATTR 'POLLOUT'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x42,0x61, // JUMP 33
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0x12,0x66, // LOAD_GLOBAL 'id'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x55, // LOAD_SUBSCR
    0xc4, // STORE_FAST 4
    0x12,0x4d, // LOAD_GLOBAL 'cur_task'
    0xb4, // LOAD_FAST 4
    0xb2, // LOAD_FAST 2
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x36, // LOAD_METHOD 'modify'
    0xb1, // LOAD_FAST 1
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x34, // LOAD_ATTR 'POLLIN'
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x35, // LOAD_ATTR 'POLLOUT'
    0xed, // BINARY_OP 22 __or__
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x12,0x4d, // LOAD_GLOBAL 'cur_task'
    0x18,0x21, // STORE_ATTR 'data'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_IOQueue__enqueue = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_IOQueue__enqueue,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 105,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 50,
        .line_info = fun_data_asyncio_core_IOQueue__enqueue + 6,
        .line_info_top = fun_data_asyncio_core_IOQueue__enqueue + 6,
        .opcodes = fun_data_asyncio_core_IOQueue__enqueue + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_IOQueue__enqueue fun_data_asyncio_core_IOQueue__enqueue[0]
#endif

// child of asyncio_core_IOQueue
// frozen bytecode for file asyncio/core.py, scope asyncio_core_IOQueue__dequeue
static const byte fun_data_asyncio_core_IOQueue__dequeue[27] = {
    0x22,0x06, // prelude
    0x37,0x63,0x64, // names: _dequeue, self, s
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0x12,0x66, // LOAD_GLOBAL 'id'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x53, // LOAD_NULL
    0x5b, // ROT_THREE
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x38, // LOAD_METHOD 'unregister'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_IOQueue__dequeue = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_IOQueue__dequeue,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 27,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 55,
        .line_info = fun_data_asyncio_core_IOQueue__dequeue + 5,
        .line_info_top = fun_data_asyncio_core_IOQueue__dequeue + 5,
        .opcodes = fun_data_asyncio_core_IOQueue__dequeue + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_IOQueue__dequeue fun_data_asyncio_core_IOQueue__dequeue[0]
#endif

// child of asyncio_core_IOQueue
// frozen bytecode for file asyncio/core.py, scope asyncio_core_IOQueue_queue_read
static const byte fun_data_asyncio_core_IOQueue_queue_read[15] = {
    0x2a,0x06, // prelude
    0x39,0x63,0x64, // names: queue_read, self, s
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x32, // LOAD_METHOD '_enqueue'
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_IOQueue_queue_read = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_IOQueue_queue_read,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 15,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 57,
        .line_info = fun_data_asyncio_core_IOQueue_queue_read + 5,
        .line_info_top = fun_data_asyncio_core_IOQueue_queue_read + 5,
        .opcodes = fun_data_asyncio_core_IOQueue_queue_read + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_IOQueue_queue_read fun_data_asyncio_core_IOQueue_queue_read[0]
#endif

// child of asyncio_core_IOQueue
// frozen bytecode for file asyncio/core.py, scope asyncio_core_IOQueue_queue_write
static const byte fun_data_asyncio_core_IOQueue_queue_write[15] = {
    0x2a,0x06, // prelude
    0x3a,0x63,0x64, // names: queue_write, self, s
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x32, // LOAD_METHOD '_enqueue'
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_IOQueue_queue_write = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_IOQueue_queue_write,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 15,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 58,
        .line_info = fun_data_asyncio_core_IOQueue_queue_write + 5,
        .line_info_top = fun_data_asyncio_core_IOQueue_queue_write + 5,
        .opcodes = fun_data_asyncio_core_IOQueue_queue_write + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_IOQueue_queue_write fun_data_asyncio_core_IOQueue_queue_write[0]
#endif

// child of asyncio_core_IOQueue
// frozen bytecode for file asyncio/core.py, scope asyncio_core_IOQueue_remove
static const byte fun_data_asyncio_core_IOQueue_remove[65] = {
    0x6a,0x06, // prelude
    0x3b,0x63,0x0b, // names: remove, self, task
     // code info
    0x51, // LOAD_CONST_NONE
    0xc2, // STORE_FAST 2
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0x5f, // GET_ITER_STACK
    0x4b,0x1f, // FOR_ITER 31
    0xc3, // STORE_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0xb3, // LOAD_FAST 3
    0x55, // LOAD_SUBSCR
    0x30,0x03, // UNPACK_SEQUENCE 3
    0xc4, // STORE_FAST 4
    0xc5, // STORE_FAST 5
    0xc6, // STORE_FAST 6
    0xb4, // LOAD_FAST 4
    0xb1, // LOAD_FAST 1
    0xde, // BINARY_OP 7 <is>
    0x43,0x45, // POP_JUMP_IF_TRUE 5
    0xb5, // LOAD_FAST 5
    0xb1, // LOAD_FAST 1
    0xde, // BINARY_OP 7 <is>
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0xb6, // LOAD_FAST 6
    0xc2, // STORE_FAST 2
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x42,0x42, // JUMP 2
    0x42,0x1f, // JUMP -33
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0xb0, // LOAD_FAST 0
    0x14,0x37, // LOAD_METHOD '_dequeue'
    0xb6, // LOAD_FAST 6
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x42, // JUMP 2
    0x42,0x42, // JUMP 2
    0x42,0x06, // JUMP -58
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_IOQueue_remove = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_IOQueue_remove,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 65,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 14,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 59,
        .line_info = fun_data_asyncio_core_IOQueue_remove + 5,
        .line_info_top = fun_data_asyncio_core_IOQueue_remove + 5,
        .opcodes = fun_data_asyncio_core_IOQueue_remove + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_IOQueue_remove fun_data_asyncio_core_IOQueue_remove[0]
#endif

// child of asyncio_core_IOQueue
// frozen bytecode for file asyncio/core.py, scope asyncio_core_IOQueue_wait_io_event
static const byte fun_data_asyncio_core_IOQueue_wait_io_event[156] = {
    0x62,0x06, // prelude
    0x1f,0x63,0x67, // names: wait_io_event, self, dt
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x3c, // LOAD_METHOD 'ipoll'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x5f, // GET_ITER_STACK
    0x4b,0x89,0x01, // FOR_ITER 137
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc2, // STORE_FAST 2
    0xc3, // STORE_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0x12,0x66, // LOAD_GLOBAL 'id'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0x55, // LOAD_SUBSCR
    0xc4, // STORE_FAST 4
    0xb3, // LOAD_FAST 3
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x35, // LOAD_ATTR 'POLLOUT'
    0xd2, // UNARY_OP 2 __invert__
    0xef, // BINARY_OP 24 __and__
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x12,0x5b, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x56, // STORE_SUBSCR
    0xb3, // LOAD_FAST 3
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x34, // LOAD_ATTR 'POLLIN'
    0xd2, // UNARY_OP 2 __invert__
    0xef, // BINARY_OP 24 __and__
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x12,0x5b, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0x56, // STORE_SUBSCR
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x50, // POP_JUMP_IF_FALSE 16
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0xb0, // LOAD_FAST 0
    0x14,0x37, // LOAD_METHOD '_dequeue'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x63, // JUMP 35
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x36, // LOAD_METHOD 'modify'
    0xb2, // LOAD_FAST 2
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x35, // LOAD_ATTR 'POLLOUT'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x42,0x4d, // JUMP 13
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x36, // LOAD_METHOD 'modify'
    0xb2, // LOAD_FAST 2
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x34, // LOAD_ATTR 'POLLIN'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x42,0xf4,0x7e, // JUMP -140
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_IOQueue_wait_io_event = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_IOQueue_wait_io_event,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 156,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 31,
        .line_info = fun_data_asyncio_core_IOQueue_wait_io_event + 5,
        .line_info_top = fun_data_asyncio_core_IOQueue_wait_io_event + 5,
        .opcodes = fun_data_asyncio_core_IOQueue_wait_io_event + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_IOQueue_wait_io_event fun_data_asyncio_core_IOQueue_wait_io_event[0]
#endif

static const mp_raw_code_t *const children_asyncio_core_IOQueue[] = {
    (const mp_raw_code_t *)&proto_fun_asyncio_core_IOQueue___init__,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_IOQueue__enqueue,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_IOQueue__dequeue,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_IOQueue_queue_read,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_IOQueue_queue_write,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_IOQueue_remove,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_IOQueue_wait_io_event,
};

static const mp_raw_code_truncated_t proto_fun_asyncio_core_IOQueue = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_IOQueue,
    .children = (void *)&children_asyncio_core_IOQueue,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 41,
    .n_children = 7,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_asyncio_core_IOQueue + 3,
        .line_info_top = fun_data_asyncio_core_IOQueue + 3,
        .opcodes = fun_data_asyncio_core_IOQueue + 3,
    },
    #endif
    #endif
};

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core__promote_to_task
static const byte fun_data_asyncio_core__promote_to_task[21] = {
    0x19,0x04, // prelude
    0x17,0x56, // names: _promote_to_task, aw
     // code info
    0x12,0x57, // LOAD_GLOBAL 'isinstance'
    0xb0, // LOAD_FAST 0
    0x12,0x09, // LOAD_GLOBAL 'Task'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
    0x12,0x18, // LOAD_GLOBAL 'create_task'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core__promote_to_task = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core__promote_to_task,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 21,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 23,
        .line_info = fun_data_asyncio_core__promote_to_task + 4,
        .line_info_top = fun_data_asyncio_core__promote_to_task + 4,
        .opcodes = fun_data_asyncio_core__promote_to_task + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core__promote_to_task fun_data_asyncio_core__promote_to_task[0]
#endif

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_create_task
static const byte fun_data_asyncio_core_create_task[40] = {
    0x21,0x04, // prelude
    0x18,0x22, // names: create_task, coro
     // code info
    0x12,0x58, // LOAD_GLOBAL 'hasattr'
    0xb0, // LOAD_FAST 0
    0x10,0x19, // LOAD_CONST_STRING 'send'
    0x34,0x02, // CALL_FUNCTION 2
    0x43,0x47, // POP_JUMP_IF_TRUE 7
    0x12,0x59, // LOAD_GLOBAL 'TypeError'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x12,0x09, // LOAD_GLOBAL 'Task'
    0xb0, // LOAD_FAST 0
    0x12,0x5a, // LOAD_GLOBAL 'globals'
    0x34,0x00, // CALL_FUNCTION 0
    0x34,0x02, // CALL_FUNCTION 2
    0xc1, // STORE_FAST 1
    0x12,0x5b, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_create_task = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_create_task,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 40,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 24,
        .line_info = fun_data_asyncio_core_create_task + 4,
        .line_info_top = fun_data_asyncio_core_create_task + 4,
        .opcodes = fun_data_asyncio_core_create_task + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_create_task fun_data_asyncio_core_create_task[0]
#endif

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_run_until_complete
static const byte fun_data_asyncio_core_run_until_complete[346] = {
    0xf1,0x03,0x04, // prelude
    0x1b,0x5c, // names: run_until_complete, main_task
     // code info
    0x12,0x0c, // LOAD_GLOBAL 'CancelledError'
    0x12,0x4b, // LOAD_GLOBAL 'Exception'
    0x2a,0x02, // BUILD_TUPLE 2
    0xc1, // STORE_FAST 1
    0x12,0x0c, // LOAD_GLOBAL 'CancelledError'
    0x12,0x5d, // LOAD_GLOBAL 'StopIteration'
    0x2a,0x02, // BUILD_TUPLE 2
    0xc2, // STORE_FAST 2
    0x81, // LOAD_CONST_SMALL_INT 1
    0xc3, // STORE_FAST 3
    0x42,0x7e, // JUMP 62
    0x7f, // LOAD_CONST_SMALL_INT -1
    0xc3, // STORE_FAST 3
    0x12,0x5b, // LOAD_GLOBAL '_task_queue'
    0x14,0x1c, // LOAD_METHOD 'peek'
    0x36,0x00, // CALL_METHOD 0
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x44,0x53, // POP_JUMP_IF_FALSE 19
    0x12,0x54, // LOAD_GLOBAL 'max'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x12,0x03, // LOAD_GLOBAL 'ticks_diff'
    0xb4, // LOAD_FAST 4
    0x13,0x1d, // LOAD_ATTR 'ph_key'
    0x12,0x49, // LOAD_GLOBAL 'ticks'
    0x34,0x00, // CALL_FUNCTION 0
    0x34,0x02, // CALL_FUNCTION 2
    0x34,0x02, // CALL_FUNCTION 2
    0xc3, // STORE_FAST 3
    0x42,0x57, // JUMP 23
    0x12,0x5e, // LOAD_GLOBAL '_io_queue'
    0x13,0x1e, // LOAD_ATTR 'map'
    0x43,0x51, // POP_JUMP_IF_TRUE 17
    0x51, // LOAD_CONST_NONE
    0x17,0x4d, // STORE_GLOBAL 'cur_task'
    0xb0, // LOAD_FAST 0
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0xb0, // LOAD_FAST 0
    0x13,0x15, // LOAD_ATTR 'state'
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x83, // LOAD_CONST_SMALL_INT 3
    0xc3, // STORE_FAST 3
    0x42,0x40, // JUMP 0
    0x12,0x5e, // LOAD_GLOBAL '_io_queue'
    0x14,0x1f, // LOAD_METHOD 'wait_io_event'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb3, // LOAD_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd8, // BINARY_OP 1 __gt__
    0x43,0xbc,0x7f, // POP_JUMP_IF_TRUE -68
    0x12,0x5b, // LOAD_GLOBAL '_task_queue'
    0x14,0x20, // LOAD_METHOD 'pop'
    0x36,0x00, // CALL_METHOD 0
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x17,0x4d, // STORE_GLOBAL 'cur_task'
    0x48,0x22, // SETUP_EXCEPT 34
    0xb4, // LOAD_FAST 4
    0x13,0x21, // LOAD_ATTR 'data'
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x43,0x4b, // POP_JUMP_IF_TRUE 11
    0xb4, // LOAD_FAST 4
    0x13,0x22, // LOAD_ATTR 'coro'
    0x14,0x19, // LOAD_METHOD 'send'
    0x51, // LOAD_CONST_NONE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x4d, // JUMP 13
    0x51, // LOAD_CONST_NONE
    0xb4, // LOAD_FAST 4
    0x18,0x21, // STORE_ATTR 'data'
    0xb4, // LOAD_FAST 4
    0x13,0x22, // LOAD_ATTR 'coro'
    0x14,0x23, // LOAD_METHOD 'throw'
    0xb5, // LOAD_FAST 5
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x4a,0xcc,0x01, // POP_EXCEPT_JUMP 204
    0x57, // DUP_TOP
    0xb1, // LOAD_FAST 1
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0xc5,0x81, // POP_JUMP_IF_FALSE 197
    0xc6, // STORE_FAST 6
    0x49,0xba,0x01, // SETUP_FINALLY 186
    0xb4, // LOAD_FAST 4
    0xb0, // LOAD_FAST 0
    0xde, // BINARY_OP 7 <is>
    0xc7, // STORE_FAST 7
    0xb7, // LOAD_FAST 7
    0x44,0x5d, // POP_JUMP_IF_FALSE 29
    0x51, // LOAD_CONST_NONE
    0x17,0x4d, // STORE_GLOBAL 'cur_task'
    0x12,0x57, // LOAD_GLOBAL 'isinstance'
    0xb6, // LOAD_FAST 6
    0x12,0x5d, // LOAD_GLOBAL 'StopIteration'
    0x34,0x02, // CALL_FUNCTION 2
    0x43,0x46, // POP_JUMP_IF_TRUE 6
    0x50, // LOAD_CONST_FALSE
    0xb4, // LOAD_FAST 4
    0x18,0x15, // STORE_ATTR 'state'
    0xb6, // LOAD_FAST 6
    0x65, // RAISE_OBJ
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x50, // LOAD_CONST_FALSE
    0xb4, // LOAD_FAST 4
    0x18,0x15, // STORE_ATTR 'state'
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x44,0xe4,0x80, // POP_JUMP_IF_FALSE 100
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x52, // LOAD_CONST_TRUE
    0xde, // BINARY_OP 7 <is>
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0xb7, // LOAD_FAST 7
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x50, // LOAD_CONST_FALSE
    0x42,0x41, // JUMP 1
    0x51, // LOAD_CONST_NONE
    0xb4, // LOAD_FAST 4
    0x18,0x15, // STORE_ATTR 'state'
    0x42,0x78, // JUMP 56
    0x12,0x5f, // LOAD_GLOBAL 'callable'
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x34,0x01, // CALL_FUNCTION 1
    0x44,0x50, // POP_JUMP_IF_FALSE 16
    0xb4, // LOAD_FAST 4
    0x14,0x15, // LOAD_METHOD 'state'
    0xb4, // LOAD_FAST 4
    0xb6, // LOAD_FAST 6
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0xb4, // LOAD_FAST 4
    0x18,0x15, // STORE_ATTR 'state'
    0x52, // LOAD_CONST_TRUE
    0xc7, // STORE_FAST 7
    0x42,0x5f, // JUMP 31
    0x42,0x50, // JUMP 16
    0x12,0x5b, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x14,0x20, // LOAD_METHOD 'pop'
    0x36,0x00, // CALL_METHOD 0
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x52, // LOAD_CONST_TRUE
    0xc7, // STORE_FAST 7
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x14,0x1c, // LOAD_METHOD 'peek'
    0x36,0x00, // CALL_METHOD 0
    0x43,0x27, // POP_JUMP_IF_TRUE -25
    0x50, // LOAD_CONST_FALSE
    0xb4, // LOAD_FAST 4
    0x18,0x15, // STORE_ATTR 'state'
    0xb7, // LOAD_FAST 7
    0x43,0x50, // POP_JUMP_IF_TRUE 16
    0x12,0x57, // LOAD_GLOBAL 'isinstance'
    0xb6, // LOAD_FAST 6
    0xb2, // LOAD_FAST 2
    0x34,0x02, // CALL_FUNCTION 2
    0x43,0x48, // POP_JUMP_IF_TRUE 8
    0x12,0x5b, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0xb4, // LOAD_FAST 4
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb6, // LOAD_FAST 6
    0xb4, // LOAD_FAST 4
    0x18,0x21, // STORE_ATTR 'data'
    0x42,0x62, // JUMP 34
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x5b, // POP_JUMP_IF_FALSE 27
    0xb5, // LOAD_FAST 5
    0xb4, // LOAD_FAST 4
    0x18,0x21, // STORE_ATTR 'data'
    0xb5, // LOAD_FAST 5
    0x12,0x4c, // LOAD_GLOBAL '_exc_context'
    0x10,0x0f, // LOAD_CONST_STRING 'exception'
    0x56, // STORE_SUBSCR
    0xb4, // LOAD_FAST 4
    0x12,0x4c, // LOAD_GLOBAL '_exc_context'
    0x10,0x10, // LOAD_CONST_STRING 'future'
    0x56, // STORE_SUBSCR
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x14,0x24, // LOAD_METHOD 'call_exception_handler'
    0x12,0x4c, // LOAD_GLOBAL '_exc_context'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x40, // JUMP 0
    0xb4, // LOAD_FAST 4
    0xb0, // LOAD_FAST 0
    0xde, // BINARY_OP 7 <is>
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0xb6, // LOAD_FAST 6
    0x13,0x25, // LOAD_ATTR 'value'
    0x63, // RETURN_VALUE
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc6, // STORE_FAST 6
    0x28,0x06, // DELETE_FAST 6
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x42,0xbb,0x7d, // JUMP -325
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_run_until_complete = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_run_until_complete,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 346,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 27,
        .line_info = fun_data_asyncio_core_run_until_complete + 5,
        .line_info_top = fun_data_asyncio_core_run_until_complete + 5,
        .opcodes = fun_data_asyncio_core_run_until_complete + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_run_until_complete fun_data_asyncio_core_run_until_complete[0]
#endif

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_run
static const byte fun_data_asyncio_core_run[14] = {
    0x19,0x04, // prelude
    0x26,0x22, // names: run, coro
     // code info
    0x12,0x1b, // LOAD_GLOBAL 'run_until_complete'
    0x12,0x18, // LOAD_GLOBAL 'create_task'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_run = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_run,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 14,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 38,
        .line_info = fun_data_asyncio_core_run + 4,
        .line_info_top = fun_data_asyncio_core_run + 4,
        .opcodes = fun_data_asyncio_core_run + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_run fun_data_asyncio_core_run[0]
#endif

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core__stopper
static const byte fun_data_asyncio_core__stopper[6] = {
    0x80,0x40,0x02, // prelude
    0x27, // names: _stopper
     // code info
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core__stopper = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_core__stopper,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 6,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 39,
        .line_info = fun_data_asyncio_core__stopper + 4,
        .line_info_top = fun_data_asyncio_core__stopper + 4,
        .opcodes = fun_data_asyncio_core__stopper + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core__stopper fun_data_asyncio_core__stopper[0]
#endif

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_Loop
static const byte fun_data_asyncio_core_Loop[52] = {
    0x00,0x02, // prelude
    0x13, // names: Loop
     // code info
    0x11,0x4f, // LOAD_NAME '__name__'
    0x16,0x50, // STORE_NAME '__module__'
    0x10,0x13, // LOAD_CONST_STRING 'Loop'
    0x16,0x51, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x16,0x41, // STORE_NAME '_exc_handler'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x18, // STORE_NAME 'create_task'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x3d, // STORE_NAME 'run_forever'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x1b, // STORE_NAME 'run_until_complete'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x3e, // STORE_NAME 'stop'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x3f, // STORE_NAME 'close'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x40, // STORE_NAME 'set_exception_handler'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x42, // STORE_NAME 'get_exception_handler'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x43, // STORE_NAME 'default_exception_handler'
    0x32,0x08, // MAKE_FUNCTION 8
    0x16,0x24, // STORE_NAME 'call_exception_handler'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_core_Loop
// frozen bytecode for file asyncio/core.py, scope asyncio_core_Loop_create_task
static const byte fun_data_asyncio_core_Loop_create_task[10] = {
    0x11,0x04, // prelude
    0x18,0x22, // names: create_task, coro
     // code info
    0x12,0x18, // LOAD_GLOBAL 'create_task'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_Loop_create_task = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_Loop_create_task,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 10,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 24,
        .line_info = fun_data_asyncio_core_Loop_create_task + 4,
        .line_info_top = fun_data_asyncio_core_Loop_create_task + 4,
        .opcodes = fun_data_asyncio_core_Loop_create_task + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_Loop_create_task fun_data_asyncio_core_Loop_create_task[0]
#endif

// child of asyncio_core_Loop
// frozen bytecode for file asyncio/core.py, scope asyncio_core_Loop_run_forever
static const byte fun_data_asyncio_core_Loop_run_forever[26] = {
    0x10,0x02, // prelude
    0x3d, // names: run_forever
     // code info
    0x12,0x09, // LOAD_GLOBAL 'Task'
    0x12,0x27, // LOAD_GLOBAL '_stopper'
    0x34,0x00, // CALL_FUNCTION 0
    0x12,0x5a, // LOAD_GLOBAL 'globals'
    0x34,0x00, // CALL_FUNCTION 0
    0x34,0x02, // CALL_FUNCTION 2
    0x17,0x4e, // STORE_GLOBAL '_stop_task'
    0x12,0x1b, // LOAD_GLOBAL 'run_until_complete'
    0x12,0x4e, // LOAD_GLOBAL '_stop_task'
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_Loop_run_forever = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_Loop_run_forever,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 26,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 61,
        .line_info = fun_data_asyncio_core_Loop_run_forever + 3,
        .line_info_top = fun_data_asyncio_core_Loop_run_forever + 3,
        .opcodes = fun_data_asyncio_core_Loop_run_forever + 3,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_Loop_run_forever fun_data_asyncio_core_Loop_run_forever[0]
#endif

// child of asyncio_core_Loop
// frozen bytecode for file asyncio/core.py, scope asyncio_core_Loop_run_until_complete
static const byte fun_data_asyncio_core_Loop_run_until_complete[14] = {
    0x19,0x04, // prelude
    0x1b,0x56, // names: run_until_complete, aw
     // code info
    0x12,0x1b, // LOAD_GLOBAL 'run_until_complete'
    0x12,0x17, // LOAD_GLOBAL '_promote_to_task'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_Loop_run_until_complete = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_Loop_run_until_complete,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 14,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 27,
        .line_info = fun_data_asyncio_core_Loop_run_until_complete + 4,
        .line_info_top = fun_data_asyncio_core_Loop_run_until_complete + 4,
        .opcodes = fun_data_asyncio_core_Loop_run_until_complete + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_Loop_run_until_complete fun_data_asyncio_core_Loop_run_until_complete[0]
#endif

// child of asyncio_core_Loop
// frozen bytecode for file asyncio/core.py, scope asyncio_core_Loop_stop
static const byte fun_data_asyncio_core_Loop_stop[24] = {
    0x10,0x02, // prelude
    0x3e, // names: stop
     // code info
    0x12,0x4e, // LOAD_GLOBAL '_stop_task'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x12,0x5b, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0x12,0x4e, // LOAD_GLOBAL '_stop_task'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x17,0x4e, // STORE_GLOBAL '_stop_task'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_Loop_stop = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_Loop_stop,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 24,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 62,
        .line_info = fun_data_asyncio_core_Loop_stop + 3,
        .line_info_top = fun_data_asyncio_core_Loop_stop + 3,
        .opcodes = fun_data_asyncio_core_Loop_stop + 3,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_Loop_stop fun_data_asyncio_core_Loop_stop[0]
#endif

// child of asyncio_core_Loop
// frozen bytecode for file asyncio/core.py, scope asyncio_core_Loop_close
static const byte fun_data_asyncio_core_Loop_close[5] = {
    0x00,0x02, // prelude
    0x3f, // names: close
     // code info
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_Loop_close = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_Loop_close,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 5,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 63,
        .line_info = fun_data_asyncio_core_Loop_close + 3,
        .line_info_top = fun_data_asyncio_core_Loop_close + 3,
        .opcodes = fun_data_asyncio_core_Loop_close + 3,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_Loop_close fun_data_asyncio_core_Loop_close[0]
#endif

// child of asyncio_core_Loop
// frozen bytecode for file asyncio/core.py, scope asyncio_core_Loop_set_exception_handler
static const byte fun_data_asyncio_core_Loop_set_exception_handler[11] = {
    0x11,0x04, // prelude
    0x40,0x68, // names: set_exception_handler, handler
     // code info
    0xb0, // LOAD_FAST 0
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x18,0x41, // STORE_ATTR '_exc_handler'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_Loop_set_exception_handler = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_Loop_set_exception_handler,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 11,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 64,
        .line_info = fun_data_asyncio_core_Loop_set_exception_handler + 4,
        .line_info_top = fun_data_asyncio_core_Loop_set_exception_handler + 4,
        .opcodes = fun_data_asyncio_core_Loop_set_exception_handler + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_Loop_set_exception_handler fun_data_asyncio_core_Loop_set_exception_handler[0]
#endif

// child of asyncio_core_Loop
// frozen bytecode for file asyncio/core.py, scope asyncio_core_Loop_get_exception_handler
static const byte fun_data_asyncio_core_Loop_get_exception_handler[8] = {
    0x00,0x02, // prelude
    0x42, // names: get_exception_handler
     // code info
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x13,0x41, // LOAD_ATTR '_exc_handler'
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_Loop_get_exception_handler = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_Loop_get_exception_handler,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 8,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 66,
        .line_info = fun_data_asyncio_core_Loop_get_exception_handler + 3,
        .line_info_top = fun_data_asyncio_core_Loop_get_exception_handler + 3,
        .opcodes = fun_data_asyncio_core_Loop_get_exception_handler + 3,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_Loop_get_exception_handler fun_data_asyncio_core_Loop_get_exception_handler[0]
#endif

// child of asyncio_core_Loop
// frozen bytecode for file asyncio/core.py, scope asyncio_core_Loop_default_exception_handler
static const byte fun_data_asyncio_core_Loop_default_exception_handler[64] = {
    0x42,0x06, // prelude
    0x43,0x69,0x6a, // names: default_exception_handler, loop, context
     // code info
    0x12,0x6b, // LOAD_GLOBAL 'print'
    0xb1, // LOAD_FAST 1
    0x10,0x0e, // LOAD_CONST_STRING 'message'
    0x55, // LOAD_SUBSCR
    0x10,0x44, // LOAD_CONST_STRING 'file'
    0x12,0x06, // LOAD_GLOBAL 'sys'
    0x13,0x45, // LOAD_ATTR 'stderr'
    0x34,0x82,0x01, // CALL_FUNCTION 257
    0x59, // POP_TOP
    0x12,0x6b, // LOAD_GLOBAL 'print'
    0x10,0x46, // LOAD_CONST_STRING 'future:'
    0xb1, // LOAD_FAST 1
    0x10,0x10, // LOAD_CONST_STRING 'future'
    0x55, // LOAD_SUBSCR
    0x10,0x47, // LOAD_CONST_STRING 'coro='
    0xb1, // LOAD_FAST 1
    0x10,0x10, // LOAD_CONST_STRING 'future'
    0x55, // LOAD_SUBSCR
    0x13,0x22, // LOAD_ATTR 'coro'
    0x10,0x44, // LOAD_CONST_STRING 'file'
    0x12,0x06, // LOAD_GLOBAL 'sys'
    0x13,0x45, // LOAD_ATTR 'stderr'
    0x34,0x82,0x04, // CALL_FUNCTION 260
    0x59, // POP_TOP
    0x12,0x06, // LOAD_GLOBAL 'sys'
    0x14,0x48, // LOAD_METHOD 'print_exception'
    0xb1, // LOAD_FAST 1
    0x10,0x0f, // LOAD_CONST_STRING 'exception'
    0x55, // LOAD_SUBSCR
    0x12,0x06, // LOAD_GLOBAL 'sys'
    0x13,0x45, // LOAD_ATTR 'stderr'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_Loop_default_exception_handler = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_Loop_default_exception_handler,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 64,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 67,
        .line_info = fun_data_asyncio_core_Loop_default_exception_handler + 5,
        .line_info_top = fun_data_asyncio_core_Loop_default_exception_handler + 5,
        .opcodes = fun_data_asyncio_core_Loop_default_exception_handler + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_Loop_default_exception_handler fun_data_asyncio_core_Loop_default_exception_handler[0]
#endif

// child of asyncio_core_Loop
// frozen bytecode for file asyncio/core.py, scope asyncio_core_Loop_call_exception_handler
static const byte fun_data_asyncio_core_Loop_call_exception_handler[22] = {
    0x19,0x04, // prelude
    0x24,0x6a, // names: call_exception_handler, context
     // code info
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x13,0x41, // LOAD_ATTR '_exc_handler'
    0x45,0x04, // JUMP_IF_TRUE_OR_POP 4
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x13,0x43, // LOAD_ATTR 'default_exception_handler'
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_Loop_call_exception_handler = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_Loop_call_exception_handler,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 22,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 36,
        .line_info = fun_data_asyncio_core_Loop_call_exception_handler + 4,
        .line_info_top = fun_data_asyncio_core_Loop_call_exception_handler + 4,
        .opcodes = fun_data_asyncio_core_Loop_call_exception_handler + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_Loop_call_exception_handler fun_data_asyncio_core_Loop_call_exception_handler[0]
#endif

static const mp_raw_code_t *const children_asyncio_core_Loop[] = {
    (const mp_raw_code_t *)&proto_fun_asyncio_core_Loop_create_task,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_Loop_run_forever,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_Loop_run_until_complete,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_Loop_stop,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_Loop_close,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_Loop_set_exception_handler,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_Loop_get_exception_handler,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_Loop_default_exception_handler,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_Loop_call_exception_handler,
};

static const mp_raw_code_truncated_t proto_fun_asyncio_core_Loop = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_Loop,
    .children = (void *)&children_asyncio_core_Loop,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 52,
    .n_children = 9,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_asyncio_core_Loop + 3,
        .line_info_top = fun_data_asyncio_core_Loop + 3,
        .opcodes = fun_data_asyncio_core_Loop + 3,
    },
    #endif
    #endif
};

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_get_event_loop
static const byte fun_data_asyncio_core_get_event_loop[10] = {
    0x92,0x80,0x01,0x06, // prelude
    0x28,0x60,0x61, // names: get_event_loop, runq_len, waitq_len
     // code info
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_get_event_loop = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_get_event_loop,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 10,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 40,
        .line_info = fun_data_asyncio_core_get_event_loop + 7,
        .line_info_top = fun_data_asyncio_core_get_event_loop + 7,
        .opcodes = fun_data_asyncio_core_get_event_loop + 7,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_get_event_loop fun_data_asyncio_core_get_event_loop[0]
#endif

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_current_task
static const byte fun_data_asyncio_core_current_task[19] = {
    0x08,0x02, // prelude
    0x29, // names: current_task
     // code info
    0x12,0x4d, // LOAD_GLOBAL 'cur_task'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x62, // LOAD_GLOBAL 'RuntimeError'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x12,0x4d, // LOAD_GLOBAL 'cur_task'
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_current_task = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_current_task,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 19,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 41,
        .line_info = fun_data_asyncio_core_current_task + 3,
        .line_info_top = fun_data_asyncio_core_current_task + 3,
        .opcodes = fun_data_asyncio_core_current_task + 3,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_current_task fun_data_asyncio_core_current_task[0]
#endif

// child of asyncio_core__lt_module_gt_
// frozen bytecode for file asyncio/core.py, scope asyncio_core_new_event_loop
static const byte fun_data_asyncio_core_new_event_loop[18] = {
    0x00,0x02, // prelude
    0x2a, // names: new_event_loop
     // code info
    0x12,0x08, // LOAD_GLOBAL 'TaskQueue'
    0x34,0x00, // CALL_FUNCTION 0
    0x17,0x5b, // STORE_GLOBAL '_task_queue'
    0x12,0x12, // LOAD_GLOBAL 'IOQueue'
    0x34,0x00, // CALL_FUNCTION 0
    0x17,0x5e, // STORE_GLOBAL '_io_queue'
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_core_new_event_loop = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core_new_event_loop,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 18,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 42,
        .line_info = fun_data_asyncio_core_new_event_loop + 3,
        .line_info_top = fun_data_asyncio_core_new_event_loop + 3,
        .opcodes = fun_data_asyncio_core_new_event_loop + 3,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_core_new_event_loop fun_data_asyncio_core_new_event_loop[0]
#endif

static const mp_raw_code_t *const children_asyncio_core__lt_module_gt_[] = {
    (const mp_raw_code_t *)&proto_fun_asyncio_core_CancelledError,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_TimeoutError,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_SingletonGenerator,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_sleep_ms,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_sleep,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_IOQueue,
    (const mp_raw_code_t *)&proto_fun_asyncio_core__promote_to_task,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_create_task,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_run_until_complete,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_run,
    (const mp_raw_code_t *)&proto_fun_asyncio_core__stopper,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_Loop,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_get_event_loop,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_current_task,
    (const mp_raw_code_t *)&proto_fun_asyncio_core_new_event_loop,
};

static const mp_raw_code_truncated_t proto_fun_asyncio_core__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_core__lt_module_gt_,
    .children = (void *)&children_asyncio_core__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 218,
    .n_children = 15,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_asyncio_core__lt_module_gt_ + 3,
        .line_info_top = fun_data_asyncio_core__lt_module_gt_ + 3,
        .opcodes = fun_data_asyncio_core__lt_module_gt_ + 3,
    },
    #endif
    #endif
};

static const qstr_short_t const_qstr_table_data_asyncio_core[108] = {
    MP_QSTR_asyncio_slash_core_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_ticks_ms,
    MP_QSTR_ticks_diff,
    MP_QSTR_ticks_add,
    MP_QSTR_time,
    MP_QSTR_sys,
    MP_QSTR_select,
    MP_QSTR_TaskQueue,
    MP_QSTR_Task,
    MP_QSTR__asyncio,
    MP_QSTR_task,
    MP_QSTR_CancelledError,
    MP_QSTR_TimeoutError,
    MP_QSTR_message,
    MP_QSTR_exception,
    MP_QSTR_future,
    MP_QSTR_SingletonGenerator,
    MP_QSTR_IOQueue,
    MP_QSTR_Loop,
    MP_QSTR_sleep_ms,
    MP_QSTR_state,
    MP_QSTR_sleep,
    MP_QSTR__promote_to_task,
    MP_QSTR_create_task,
    MP_QSTR_send,
    MP_QSTR_push,
    MP_QSTR_run_until_complete,
    MP_QSTR_peek,
    MP_QSTR_ph_key,
    MP_QSTR_map,
    MP_QSTR_wait_io_event,
    MP_QSTR_pop,
    MP_QSTR_data,
    MP_QSTR_coro,
    MP_QSTR_throw,
    MP_QSTR_call_exception_handler,
    MP_QSTR_value,
    MP_QSTR_run,
    MP_QSTR__stopper,
    MP_QSTR_get_event_loop,
    MP_QSTR_current_task,
    MP_QSTR_new_event_loop,
    MP_QSTR___init__,
    MP_QSTR_exc,
    MP_QSTR___iter__,
    MP_QSTR___next__,
    MP_QSTR___traceback__,
    MP_QSTR_poll,
    MP_QSTR_poller,
    MP_QSTR__enqueue,
    MP_QSTR_register,
    MP_QSTR_POLLIN,
    MP_QSTR_POLLOUT,
    MP_QSTR_modify,
    MP_QSTR__dequeue,
    MP_QSTR_unregister,
    MP_QSTR_queue_read,
    MP_QSTR_queue_write,
    MP_QSTR_remove,
    MP_QSTR_ipoll,
    MP_QSTR_run_forever,
    MP_QSTR_stop,
    MP_QSTR_close,
    MP_QSTR_set_exception_handler,
    MP_QSTR__exc_handler,
    MP_QSTR_get_exception_handler,
    MP_QSTR_default_exception_handler,
    MP_QSTR_file,
    MP_QSTR_stderr,
    MP_QSTR_future_colon_,
    MP_QSTR_coro_equals_,
    MP_QSTR_print_exception,
    MP_QSTR_ticks,
    MP_QSTR_BaseException,
    MP_QSTR_Exception,
    MP_QSTR__exc_context,
    MP_QSTR_cur_task,
    MP_QSTR__stop_task,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_t,
    MP_QSTR_sgen,
    MP_QSTR_max,
    MP_QSTR_int,
    MP_QSTR_aw,
    MP_QSTR_isinstance,
    MP_QSTR_hasattr,
    MP_QSTR_TypeError,
    MP_QSTR_globals,
    MP_QSTR__task_queue,
    MP_QSTR_main_task,
    MP_QSTR_StopIteration,
    MP_QSTR__io_queue,
    MP_QSTR_callable,
    MP_QSTR_runq_len,
    MP_QSTR_waitq_len,
    MP_QSTR_RuntimeError,
    MP_QSTR_self,
    MP_QSTR_s,
    MP_QSTR_idx,
    MP_QSTR_id,
    MP_QSTR_dt,
    MP_QSTR_handler,
    MP_QSTR_loop,
    MP_QSTR_context,
    MP_QSTR_print,
};

// constants
static const mp_obj_str_t const_obj_asyncio_core_0 = {{&mp_type_str}, 205, 31, (const byte*)"\x54\x61\x73\x6b\x20\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x20\x77\x61\x73\x6e\x27\x74\x20\x72\x65\x74\x72\x69\x65\x76\x65\x64"};

// constant table
static const mp_rom_obj_t const_obj_table_data_asyncio_core[3] = {
    MP_ROM_PTR(&const_obj_asyncio_core_0),
    MP_ROM_QSTR(MP_QSTR_coroutine_space_expected),
    MP_ROM_QSTR(MP_QSTR_no_space_running_space_event_space_loop),
};

static const mp_frozen_module_t frozen_module_asyncio_core = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_asyncio_core,
        .obj_table = (mp_obj_t *)&const_obj_table_data_asyncio_core,
    },
    .proto_fun = &proto_fun_asyncio_core__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module asyncio_event
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/asyncio/event.mpy
// - frozen file name: asyncio/event.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file asyncio/event.py, scope asyncio_event__lt_module_gt_
static const byte fun_data_asyncio_event__lt_module_gt_[59] = {
    0x2c,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x02, // LOAD_CONST_STRING 'core'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME ''
    0x1c,0x02, // IMPORT_FROM 'core'
    0x16,0x02, // STORE_NAME 'core'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'Event'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'Event'
    0x48,0x15, // SETUP_EXCEPT 21
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x05, // IMPORT_NAME 'io'
    0x16,0x05, // STORE_NAME 'io'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x06, // LOAD_CONST_STRING 'ThreadSafeFlag'
    0x11,0x05, // LOAD_NAME 'io'
    0x13,0x07, // LOAD_ATTR 'IOBase'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x06, // STORE_NAME 'ThreadSafeFlag'
    0x4a,0x0a, // POP_EXCEPT_JUMP 10
    0x57, // DUP_TOP
    0x11,0x19, // LOAD_NAME 'ImportError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_event__lt_module_gt_
// frozen bytecode for file asyncio/event.py, scope asyncio_event_Event
static const byte fun_data_asyncio_event_Event[33] = {
    0x00,0x02, // prelude
    0x04, // names: Event
     // code info
    0x11,0x1a, // LOAD_NAME '__name__'
    0x16,0x1b, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'Event'
    0x16,0x1c, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x08, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x0c, // STORE_NAME 'is_set'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0d, // STORE_NAME 'set'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x12, // STORE_NAME 'clear'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x13, // STORE_NAME 'wait'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_event_Event
// frozen bytecode for file asyncio/event.py, scope asyncio_event_Event___init__
static const byte fun_data_asyncio_event_Event___init__[19] = {
    0x11,0x04, // prelude
    0x08,0x1d, // names: __init__, self
     // code info
    0x50, // LOAD_CONST_FALSE
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x0a, // LOAD_METHOD 'TaskQueue'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x18,0x0b, // STORE_ATTR 'waiting'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_event_Event___init__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_event_Event___init__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 19,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 8,
        .line_info = fun_data_asyncio_event_Event___init__ + 4,
        .line_info_top = fun_data_asyncio_event_Event___init__ + 4,
        .opcodes = fun_data_asyncio_event_Event___init__ + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_event_Event___init__ fun_data_asyncio_event_Event___init__[0]
#endif

// child of asyncio_event_Event
// frozen bytecode for file asyncio/event.py, scope asyncio_event_Event_is_set
static const byte fun_data_asyncio_event_Event_is_set[8] = {
    0x09,0x04, // prelude
    0x0c,0x1d, // names: is_set, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'state'
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_event_Event_is_set = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_event_Event_is_set,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 8,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_asyncio_event_Event_is_set + 4,
        .line_info_top = fun_data_asyncio_event_Event_is_set + 4,
        .opcodes = fun_data_asyncio_event_Event_is_set + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_event_Event_is_set fun_data_asyncio_event_Event_is_set[0]
#endif

// child of asyncio_event_Event
// frozen bytecode for file asyncio/event.py, scope asyncio_event_Event_set
static const byte fun_data_asyncio_event_Event_set[37] = {
    0x21,0x04, // prelude
    0x0d,0x1d, // names: set, self
     // code info
    0x42,0x50, // JUMP 16
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0e, // LOAD_ATTR '_task_queue'
    0x14,0x0f, // LOAD_METHOD 'push'
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'waiting'
    0x14,0x10, // LOAD_METHOD 'pop'
    0x36,0x00, // CALL_METHOD 0
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'waiting'
    0x14,0x11, // LOAD_METHOD 'peek'
    0x36,0x00, // CALL_METHOD 0
    0x43,0x27, // POP_JUMP_IF_TRUE -25
    0x52, // LOAD_CONST_TRUE
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_event_Event_set = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_event_Event_set,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 37,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_asyncio_event_Event_set + 4,
        .line_info_top = fun_data_asyncio_event_Event_set + 4,
        .opcodes = fun_data_asyncio_event_Event_set + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_event_Event_set fun_data_asyncio_event_Event_set[0]
#endif

// child of asyncio_event_Event
// frozen bytecode for file asyncio/event.py, scope asyncio_event_Event_clear
static const byte fun_data_asyncio_event_Event_clear[10] = {
    0x11,0x04, // prelude
    0x12,0x1d, // names: clear, self
     // code info
    0x50, // LOAD_CONST_FALSE
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_event_Event_clear = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_event_Event_clear,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 10,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_asyncio_event_Event_clear + 4,
        .line_info_top = fun_data_asyncio_event_Event_clear + 4,
        .opcodes = fun_data_asyncio_event_Event_clear + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_event_Event_clear fun_data_asyncio_event_Event_clear[0]
#endif

// child of asyncio_event_Event
// frozen bytecode for file asyncio/event.py, scope asyncio_event_Event_wait
static const byte fun_data_asyncio_event_Event_wait[36] = {
    0x99,0x40,0x04, // prelude
    0x13,0x1d, // names: wait, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'state'
    0x43,0x58, // POP_JUMP_IF_TRUE 24
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'waiting'
    0x14,0x0f, // LOAD_METHOD 'push'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR 'cur_task'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'waiting'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR 'cur_task'
    0x18,0x15, // STORE_ATTR 'data'
    0x51, // LOAD_CONST_NONE
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x52, // LOAD_CONST_TRUE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_event_Event_wait = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_event_Event_wait,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 36,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_asyncio_event_Event_wait + 5,
        .line_info_top = fun_data_asyncio_event_Event_wait + 5,
        .opcodes = fun_data_asyncio_event_Event_wait + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_event_Event_wait fun_data_asyncio_event_Event_wait[0]
#endif

static const mp_raw_code_t *const children_asyncio_event_Event[] = {
    (const mp_raw_code_t *)&proto_fun_asyncio_event_Event___init__,
    (const mp_raw_code_t *)&proto_fun_asyncio_event_Event_is_set,
    (const mp_raw_code_t *)&proto_fun_asyncio_event_Event_set,
    (const mp_raw_code_t *)&proto_fun_asyncio_event_Event_clear,
    (const mp_raw_code_t *)&proto_fun_asyncio_event_Event_wait,
};

static const mp_raw_code_truncated_t proto_fun_asyncio_event_Event = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_event_Event,
    .children = (void *)&children_asyncio_event_Event,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 33,
    .n_children = 5,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_asyncio_event_Event + 3,
        .line_info_top = fun_data_asyncio_event_Event + 3,
        .opcodes = fun_data_asyncio_event_Event + 3,
    },
    #endif
    #endif
};

// child of asyncio_event__lt_module_gt_
// frozen bytecode for file asyncio/event.py, scope asyncio_event_ThreadSafeFlag
static const byte fun_data_asyncio_event_ThreadSafeFlag[33] = {
    0x00,0x02, // prelude
    0x06, // names: ThreadSafeFlag
     // code info
    0x11,0x1a, // LOAD_NAME '__name__'
    0x16,0x1b, // STORE_NAME '__module__'
    0x10,0x06, // LOAD_CONST_STRING 'ThreadSafeFlag'
    0x16,0x1c, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x08, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x16, // STORE_NAME 'ioctl'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0d, // STORE_NAME 'set'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x12, // STORE_NAME 'clear'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x13, // STORE_NAME 'wait'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_event_ThreadSafeFlag
// frozen bytecode for file asyncio/event.py, scope asyncio_event_ThreadSafeFlag___init__
static const byte fun_data_asyncio_event_ThreadSafeFlag___init__[10] = {
    0x11,0x04, // prelude
    0x08,0x1d, // names: __init__, self
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_event_ThreadSafeFlag___init__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_event_ThreadSafeFlag___init__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 10,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 8,
        .line_info = fun_data_asyncio_event_ThreadSafeFlag___init__ + 4,
        .line_info_top = fun_data_asyncio_event_ThreadSafeFlag___init__ + 4,
        .opcodes = fun_data_asyncio_event_ThreadSafeFlag___init__ + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_event_ThreadSafeFlag___init__ fun_data_asyncio_event_ThreadSafeFlag___init__[0]
#endif

// child of asyncio_event_ThreadSafeFlag
// frozen bytecode for file asyncio/event.py, scope asyncio_event_ThreadSafeFlag_ioctl
static const byte fun_data_asyncio_event_ThreadSafeFlag_ioctl[19] = {
    0x23,0x08, // prelude
    0x16,0x1d,0x1e,0x1f, // names: ioctl, self, req, flags
     // code info
    0xb1, // LOAD_FAST 1
    0x83, // LOAD_CONST_SMALL_INT 3
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'state'
    0xb2, // LOAD_FAST 2
    0xf4, // BINARY_OP 29 __mul__
    0x63, // RETURN_VALUE
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_event_ThreadSafeFlag_ioctl = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_event_ThreadSafeFlag_ioctl,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 19,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 22,
        .line_info = fun_data_asyncio_event_ThreadSafeFlag_ioctl + 6,
        .line_info_top = fun_data_asyncio_event_ThreadSafeFlag_ioctl + 6,
        .opcodes = fun_data_asyncio_event_ThreadSafeFlag_ioctl + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_event_ThreadSafeFlag_ioctl fun_data_asyncio_event_ThreadSafeFlag_ioctl[0]
#endif

// child of asyncio_event_ThreadSafeFlag
// frozen bytecode for file asyncio/event.py, scope asyncio_event_ThreadSafeFlag_set
static const byte fun_data_asyncio_event_ThreadSafeFlag_set[10] = {
    0x11,0x04, // prelude
    0x0d,0x1d, // names: set, self
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_event_ThreadSafeFlag_set = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_event_ThreadSafeFlag_set,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 10,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_asyncio_event_ThreadSafeFlag_set + 4,
        .line_info_top = fun_data_asyncio_event_ThreadSafeFlag_set + 4,
        .opcodes = fun_data_asyncio_event_ThreadSafeFlag_set + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_event_ThreadSafeFlag_set fun_data_asyncio_event_ThreadSafeFlag_set[0]
#endif

// child of asyncio_event_ThreadSafeFlag
// frozen bytecode for file asyncio/event.py, scope asyncio_event_ThreadSafeFlag_clear
static const byte fun_data_asyncio_event_ThreadSafeFlag_clear[10] = {
    0x11,0x04, // prelude
    0x12,0x1d, // names: clear, self
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_event_ThreadSafeFlag_clear = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_event_ThreadSafeFlag_clear,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 10,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_asyncio_event_ThreadSafeFlag_clear + 4,
        .line_info_top = fun_data_asyncio_event_ThreadSafeFlag_clear + 4,
        .opcodes = fun_data_asyncio_event_ThreadSafeFlag_clear + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_event_ThreadSafeFlag_clear fun_data_asyncio_event_ThreadSafeFlag_clear[0]
#endif

// child of asyncio_event_ThreadSafeFlag
// frozen bytecode for file asyncio/event.py, scope asyncio_event_ThreadSafeFlag_wait
static const byte fun_data_asyncio_event_ThreadSafeFlag_wait[27] = {
    0x99,0x40,0x04, // prelude
    0x13,0x1d, // names: wait, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'state'
    0x43,0x4b, // POP_JUMP_IF_TRUE 11
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x17, // LOAD_ATTR '_io_queue'
    0x14,0x18, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_event_ThreadSafeFlag_wait = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_event_ThreadSafeFlag_wait,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 27,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_asyncio_event_ThreadSafeFlag_wait + 5,
        .line_info_top = fun_data_asyncio_event_ThreadSafeFlag_wait + 5,
        .opcodes = fun_data_asyncio_event_ThreadSafeFlag_wait + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_event_ThreadSafeFlag_wait fun_data_asyncio_event_ThreadSafeFlag_wait[0]
#endif

static const mp_raw_code_t *const children_asyncio_event_ThreadSafeFlag[] = {
    (const mp_raw_code_t *)&proto_fun_asyncio_event_ThreadSafeFlag___init__,
    (const mp_raw_code_t *)&proto_fun_asyncio_event_ThreadSafeFlag_ioctl,
    (const mp_raw_code_t *)&proto_fun_asyncio_event_ThreadSafeFlag_set,
    (const mp_raw_code_t *)&proto_fun_asyncio_event_ThreadSafeFlag_clear,
    (const mp_raw_code_t *)&proto_fun_asyncio_event_ThreadSafeFlag_wait,
};

static const mp_raw_code_truncated_t proto_fun_asyncio_event_ThreadSafeFlag = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_event_ThreadSafeFlag,
    .children = (void *)&children_asyncio_event_ThreadSafeFlag,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 33,
    .n_children = 5,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_asyncio_event_ThreadSafeFlag + 3,
        .line_info_top = fun_data_asyncio_event_ThreadSafeFlag + 3,
        .opcodes = fun_data_asyncio_event_ThreadSafeFlag + 3,
    },
    #endif
    #endif
};

static const mp_raw_code_t *const children_asyncio_event__lt_module_gt_[] = {
    (const mp_raw_code_t *)&proto_fun_asyncio_event_Event,
    (const mp_raw_code_t *)&proto_fun_asyncio_event_ThreadSafeFlag,
};

static const mp_raw_code_truncated_t proto_fun_asyncio_event__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_event__lt_module_gt_,
    .children = (void *)&children_asyncio_event__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 59,
    .n_children = 2,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_asyncio_event__lt_module_gt_ + 3,
        .line_info_top = fun_data_asyncio_event__lt_module_gt_ + 3,
        .opcodes = fun_data_asyncio_event__lt_module_gt_ + 3,
    },
    #endif
    #endif
};

static const qstr_short_t const_qstr_table_data_asyncio_event[32] = {
    MP_QSTR_asyncio_slash_event_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_core,
    MP_QSTR_,
    MP_QSTR_Event,
    MP_QSTR_io,
    MP_QSTR_ThreadSafeFlag,
    MP_QSTR_IOBase,
    MP_QSTR___init__,
    MP_QSTR_state,
    MP_QSTR_TaskQueue,
    MP_QSTR_waiting,
    MP_QSTR_is_set,
    MP_QSTR_set,
    MP_QSTR__task_queue,
    MP_QSTR_push,
    MP_QSTR_pop,
    MP_QSTR_peek,
    MP_QSTR_clear,
    MP_QSTR_wait,
    MP_QSTR_cur_task,
    MP_QSTR_data,
    MP_QSTR_ioctl,
    MP_QSTR__io_queue,
    MP_QSTR_queue_read,
    MP_QSTR_ImportError,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_req,
    MP_QSTR_flags,
};

static const mp_frozen_module_t frozen_module_asyncio_event = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_asyncio_event,
        .obj_table = NULL,
    },
    .proto_fun = &proto_fun_asyncio_event__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module asyncio_funcs
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/asyncio/funcs.mpy
// - frozen file name: asyncio/funcs.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file asyncio/funcs.py, scope asyncio_funcs__lt_module_gt_
static const byte fun_data_asyncio_funcs__lt_module_gt_[56] = {
    0x18,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x02, // LOAD_CONST_STRING 'core'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME ''
    0x1c,0x02, // IMPORT_FROM 'core'
    0x16,0x02, // STORE_NAME 'core'
    0x59, // POP_TOP
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x07, // STORE_NAME '_run'
    0x11,0x02, // LOAD_NAME 'core'
    0x13,0x04, // LOAD_ATTR 'sleep'
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x01, // MAKE_FUNCTION_DEFARGS 1
    0x16,0x0b, // STORE_NAME 'wait_for'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x12, // STORE_NAME 'wait_for_ms'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x03, // MAKE_FUNCTION 3
    0x10,0x05, // LOAD_CONST_STRING '_Remove'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x05, // STORE_NAME '_Remove'
    0x53, // LOAD_NULL
    0x2c,0x00, // BUILD_MAP 0
    0x50, // LOAD_CONST_FALSE
    0x10,0x06, // LOAD_CONST_STRING 'return_exceptions'
    0x62, // STORE_MAP
    0x33,0x04, // MAKE_FUNCTION_DEFARGS 4
    0x16,0x14, // STORE_NAME 'gather'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_funcs__lt_module_gt_
// frozen bytecode for file asyncio/funcs.py, scope asyncio_funcs__run
static const byte fun_data_asyncio_funcs__run[66] = {
    0xd2,0x42,0x06, // prelude
    0x07,0x1b,0x1c, // names: _run, waiter, aw
     // code info
    0x48,0x09, // SETUP_EXCEPT 9
    0xb1, // LOAD_FAST 1
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0xc2, // STORE_FAST 2
    0x52, // LOAD_CONST_TRUE
    0xc3, // STORE_FAST 3
    0x4a,0x16, // POP_EXCEPT_JUMP 22
    0x57, // DUP_TOP
    0x12,0x1d, // LOAD_GLOBAL 'BaseException'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0xc4, // STORE_FAST 4
    0x49,0x05, // SETUP_FINALLY 5
    0x51, // LOAD_CONST_NONE
    0xc2, // STORE_FAST 2
    0xb4, // LOAD_FAST 4
    0xc3, // STORE_FAST 3
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc4, // STORE_FAST 4
    0x28,0x04, // DELETE_FAST 4
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'data'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x52, // POP_JUMP_IF_FALSE 18
    0xb0, // LOAD_FAST 0
    0x14,0x09, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x0a, // LOAD_METHOD 'CancelledError'
    0xb3, // LOAD_FAST 3
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0xb0, // LOAD_FAST 0
    0x18,0x08, // STORE_ATTR 'data'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_funcs__run = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_funcs__run,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 66,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 7,
        .line_info = fun_data_asyncio_funcs__run + 6,
        .line_info_top = fun_data_asyncio_funcs__run + 6,
        .opcodes = fun_data_asyncio_funcs__run + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_funcs__run fun_data_asyncio_funcs__run[0]
#endif

// child of asyncio_funcs__lt_module_gt_
// frozen bytecode for file asyncio/funcs.py, scope asyncio_funcs_wait_for
static const byte fun_data_asyncio_funcs_wait_for[119] = {
    0xdb,0x43,0x08, // prelude
    0x0b,0x1c,0x1e,0x04, // names: wait_for, aw, timeout, sleep
     // code info
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x0c, // LOAD_METHOD '_promote_to_task'
    0xb0, // LOAD_FAST 0
    0x36,0x01, // CALL_METHOD 1
    0xc0, // STORE_FAST 0
    0xb1, // LOAD_FAST 1
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0xb0, // LOAD_FAST 0
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x63, // RETURN_VALUE
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x0d, // LOAD_METHOD 'create_task'
    0x12,0x07, // LOAD_GLOBAL '_run'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0e, // LOAD_ATTR 'cur_task'
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0x48,0x0a, // SETUP_EXCEPT 10
    0xb2, // LOAD_FAST 2
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x4a,0x32, // POP_EXCEPT_JUMP 50
    0x57, // DUP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0a, // LOAD_ATTR 'CancelledError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x69, // POP_JUMP_IF_FALSE 41
    0xc4, // STORE_FAST 4
    0x49,0x1f, // SETUP_FINALLY 31
    0xb4, // LOAD_FAST 4
    0x13,0x0f, // LOAD_ATTR 'value'
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0xb3, // LOAD_FAST 3
    0x14,0x09, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb4, // LOAD_FAST 4
    0x65, // RAISE_OBJ
    0xb5, // LOAD_FAST 5
    0x52, // LOAD_CONST_TRUE
    0xde, // BINARY_OP 7 <is>
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb4, // LOAD_FAST 4
    0x13,0x10, // LOAD_ATTR 'args'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x63, // RETURN_VALUE
    0xb5, // LOAD_FAST 5
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc4, // STORE_FAST 4
    0x28,0x04, // DELETE_FAST 4
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xb3, // LOAD_FAST 3
    0x14,0x09, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb3, // LOAD_FAST 3
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x11, // LOAD_ATTR 'TimeoutError'
    0x65, // RAISE_OBJ
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_funcs_wait_for = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_funcs_wait_for,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 119,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 12,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 11,
        .line_info = fun_data_asyncio_funcs_wait_for + 7,
        .line_info_top = fun_data_asyncio_funcs_wait_for + 7,
        .opcodes = fun_data_asyncio_funcs_wait_for + 7,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_funcs_wait_for fun_data_asyncio_funcs_wait_for[0]
#endif

// child of asyncio_funcs__lt_module_gt_
// frozen bytecode for file asyncio/funcs.py, scope asyncio_funcs_wait_for_ms
static const byte fun_data_asyncio_funcs_wait_for_ms[16] = {
    0x2a,0x06, // prelude
    0x12,0x1c,0x1e, // names: wait_for_ms, aw, timeout
     // code info
    0x12,0x0b, // LOAD_GLOBAL 'wait_for'
    0xb0, // LOAD_FAST 0
    0xb1, // LOAD_FAST 1
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x13, // LOAD_ATTR 'sleep_ms'
    0x34,0x03, // CALL_FUNCTION 3
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_funcs_wait_for_ms = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_funcs_wait_for_ms,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 16,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_asyncio_funcs_wait_for_ms + 5,
        .line_info_top = fun_data_asyncio_funcs_wait_for_ms + 5,
        .opcodes = fun_data_asyncio_funcs_wait_for_ms + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_funcs_wait_for_ms fun_data_asyncio_funcs_wait_for_ms[0]
#endif

// child of asyncio_funcs__lt_module_gt_
// frozen bytecode for file asyncio/funcs.py, scope asyncio_funcs__Remove
static const byte fun_data_asyncio_funcs__Remove[21] = {
    0x08,0x02, // prelude
    0x05, // names: _Remove
     // code info
    0x11,0x1f, // LOAD_NAME '__name__'
    0x16,0x20, // STORE_NAME '__module__'
    0x10,0x05, // LOAD_CONST_STRING '_Remove'
    0x16,0x21, // STORE_NAME '__qualname__'
    0x11,0x22, // LOAD_NAME 'staticmethod'
    0x32,0x00, // MAKE_FUNCTION 0
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x16, // STORE_NAME 'remove'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_funcs__Remove
// frozen bytecode for file asyncio/funcs.py, scope asyncio_funcs__Remove_remove
static const byte fun_data_asyncio_funcs__Remove_remove[6] = {
    0x09,0x04, // prelude
    0x16,0x28, // names: remove, t
     // code info
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_funcs__Remove_remove = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_funcs__Remove_remove,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 6,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 22,
        .line_info = fun_data_asyncio_funcs__Remove_remove + 4,
        .line_info_top = fun_data_asyncio_funcs__Remove_remove + 4,
        .opcodes = fun_data_asyncio_funcs__Remove_remove + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_funcs__Remove_remove fun_data_asyncio_funcs__Remove_remove[0]
#endif

static const mp_raw_code_t *const children_asyncio_funcs__Remove[] = {
    (const mp_raw_code_t *)&proto_fun_asyncio_funcs__Remove_remove,
};

static const mp_raw_code_truncated_t proto_fun_asyncio_funcs__Remove = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_funcs__Remove,
    .children = (void *)&children_asyncio_funcs__Remove,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 21,
    .n_children = 1,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_asyncio_funcs__Remove + 3,
        .line_info_top = fun_data_asyncio_funcs__Remove + 3,
        .opcodes = fun_data_asyncio_funcs__Remove + 3,
    },
    #endif
    #endif
};

// child of asyncio_funcs__lt_module_gt_
// frozen bytecode for file asyncio/funcs.py, scope asyncio_funcs_gather
static const byte fun_data_asyncio_funcs_gather[281] = {
    0xf0,0xca,0x80,0xc0,0x40,0x85,0x01, // prelude
    0x14,0x06, // names: gather, return_exceptions
    0x00,0x07,0x08, // code info
    0xb0, // LOAD_FAST 0
    0xb7, // LOAD_FAST 7
    0xb8, // LOAD_FAST 8
    0x20,0x00,0x03, // MAKE_CLOSURE 0
    0xc2, // STORE_FAST 2
    0x32,0x01, // MAKE_FUNCTION 1
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xc3, // STORE_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0x27,0x07, // STORE_DEREF 7
    0x12,0x23, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0xc4,0x80, // JUMP 68
    0x57, // DUP_TOP
    0xc4, // STORE_FAST 4
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x15, // LOAD_ATTR 'state'
    0x52, // LOAD_CONST_TRUE
    0xde, // BINARY_OP 7 <is>
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x18,0x15, // STORE_ATTR 'state'
    0x25,0x07, // LOAD_DEREF 7
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x27,0x07, // STORE_DEREF 7
    0x42,0x69, // JUMP 41
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x15, // LOAD_ATTR 'state'
    0x43,0x5b, // POP_JUMP_IF_TRUE 27
    0x12,0x24, // LOAD_GLOBAL 'isinstance'
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x08, // LOAD_ATTR 'data'
    0x12,0x25, // LOAD_GLOBAL 'StopIteration'
    0x34,0x02, // CALL_FUNCTION 2
    0x43,0x4c, // POP_JUMP_IF_TRUE 12
    0x25,0x00, // LOAD_DEREF 0
    0x43,0x48, // POP_JUMP_IF_TRUE 8
    0x12,0x23, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0xd1, // UNARY_OP 1 __neg__
    0x27,0x07, // STORE_DEREF 7
    0x42,0x47, // JUMP 7
    0x12,0x26, // LOAD_GLOBAL 'RuntimeError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0xb6,0x7f, // POP_JUMP_IF_TRUE -74
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0e, // LOAD_ATTR 'cur_task'
    0x27,0x08, // STORE_DEREF 8
    0x50, // LOAD_CONST_FALSE
    0xc5, // STORE_FAST 5
    0x25,0x07, // LOAD_DEREF 7
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd8, // BINARY_OP 1 __gt__
    0x44,0x66, // POP_JUMP_IF_FALSE 38
    0x12,0x05, // LOAD_GLOBAL '_Remove'
    0x25,0x08, // LOAD_DEREF 8
    0x18,0x08, // STORE_ATTR 'data'
    0x48,0x05, // SETUP_EXCEPT 5
    0x51, // LOAD_CONST_NONE
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x4a,0x19, // POP_EXCEPT_JUMP 25
    0x57, // DUP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0a, // LOAD_ATTR 'CancelledError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x50, // POP_JUMP_IF_FALSE 16
    0xc6, // STORE_FAST 6
    0x49,0x06, // SETUP_FINALLY 6
    0x52, // LOAD_CONST_TRUE
    0xc5, // STORE_FAST 5
    0xb6, // LOAD_FAST 6
    0x27,0x07, // STORE_DEREF 7
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc6, // STORE_FAST 6
    0x28,0x06, // DELETE_FAST 6
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x12,0x23, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0xda,0x80, // JUMP 90
    0x57, // DUP_TOP
    0xc4, // STORE_FAST 4
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x15, // LOAD_ATTR 'state'
    0xb2, // LOAD_FAST 2
    0xde, // BINARY_OP 7 <is>
    0x44,0x53, // POP_JUMP_IF_FALSE 19
    0x52, // LOAD_CONST_TRUE
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x18,0x15, // STORE_ATTR 'state'
    0xb5, // LOAD_FAST 5
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x14,0x09, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x42,0x7a, // JUMP 58
    0x12,0x24, // LOAD_GLOBAL 'isinstance'
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x08, // LOAD_ATTR 'data'
    0x12,0x25, // LOAD_GLOBAL 'StopIteration'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x08, // LOAD_ATTR 'data'
    0x13,0x0f, // LOAD_ATTR 'value'
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x56, // STORE_SUBSCR
    0x42,0x61, // JUMP 33
    0x25,0x00, // LOAD_DEREF 0
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x08, // LOAD_ATTR 'data'
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x56, // STORE_SUBSCR
    0x42,0x53, // JUMP 19
    0x12,0x24, // LOAD_GLOBAL 'isinstance'
    0x25,0x07, // LOAD_DEREF 7
    0x12,0x27, // LOAD_GLOBAL 'int'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x08, // LOAD_ATTR 'data'
    0x27,0x07, // STORE_DEREF 7
    0x42,0x40, // JUMP 0
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0xa0,0x7f, // POP_JUMP_IF_TRUE -96
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x25,0x07, // LOAD_DEREF 7
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x25,0x07, // LOAD_DEREF 7
    0x65, // RAISE_OBJ
    0xb3, // LOAD_FAST 3
    0x63, // RETURN_VALUE
};
// child of asyncio_funcs_gather
// frozen bytecode for file asyncio/funcs.py, scope asyncio_funcs_gather_done
static const byte fun_data_asyncio_funcs_gather_done[64] = {
    0xb9,0x04,0x0c, // prelude
    0x17,0x29,0x29,0x29,0x28,0x2a, // names: done, *, *, *, t, er
     // code info
    0x25,0x02, // LOAD_DEREF 2
    0x13,0x08, // LOAD_ATTR 'data'
    0x12,0x05, // LOAD_GLOBAL '_Remove'
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x25,0x00, // LOAD_DEREF 0
    0x43,0x4e, // POP_JUMP_IF_TRUE 14
    0x12,0x24, // LOAD_GLOBAL 'isinstance'
    0xb4, // LOAD_FAST 4
    0x12,0x25, // LOAD_GLOBAL 'StopIteration'
    0x34,0x02, // CALL_FUNCTION 2
    0x43,0x45, // POP_JUMP_IF_TRUE 5
    0xb4, // LOAD_FAST 4
    0x27,0x01, // STORE_DEREF 1
    0x42,0x4c, // JUMP 12
    0x25,0x01, // LOAD_DEREF 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe6, // BINARY_OP 15 __isub__
    0x27,0x01, // STORE_DEREF 1
    0x25,0x01, // LOAD_DEREF 1
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x18, // LOAD_ATTR '_task_queue'
    0x14,0x19, // LOAD_METHOD 'push'
    0x25,0x02, // LOAD_DEREF 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_funcs_gather_done = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_funcs_gather_done,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 64,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 23,
        .line_info = fun_data_asyncio_funcs_gather_done + 9,
        .line_info_top = fun_data_asyncio_funcs_gather_done + 9,
        .opcodes = fun_data_asyncio_funcs_gather_done + 9,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_funcs_gather_done fun_data_asyncio_funcs_gather_done[0]
#endif

// child of asyncio_funcs_gather
// frozen bytecode for file asyncio/funcs.py, scope asyncio_funcs_gather__lt_listcomp_gt_
static const byte fun_data_asyncio_funcs_gather__lt_listcomp_gt_[23] = {
    0x49,0x04, // prelude
    0x1a,0x29, // names: <listcomp>, *
     // code info
    0x2b,0x00, // BUILD_LIST 0
    0xb0, // LOAD_FAST 0
    0x5f, // GET_ITER_STACK
    0x4b,0x0c, // FOR_ITER 12
    0xc1, // STORE_FAST 1
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x0c, // LOAD_METHOD '_promote_to_task'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x2f,0x14, // STORE_COMP 20
    0x42,0x32, // JUMP -14
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_funcs_gather__lt_listcomp_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_funcs_gather__lt_listcomp_gt_,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 23,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 26,
        .line_info = fun_data_asyncio_funcs_gather__lt_listcomp_gt_ + 4,
        .line_info_top = fun_data_asyncio_funcs_gather__lt_listcomp_gt_ + 4,
        .opcodes = fun_data_asyncio_funcs_gather__lt_listcomp_gt_ + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_funcs_gather__lt_listcomp_gt_ fun_data_asyncio_funcs_gather__lt_listcomp_gt_[0]
#endif

static const mp_raw_code_t *const children_asyncio_funcs_gather[] = {
    (const mp_raw_code_t *)&proto_fun_asyncio_funcs_gather_done,
    (const mp_raw_code_t *)&proto_fun_asyncio_funcs_gather__lt_listcomp_gt_,
};

static const mp_raw_code_truncated_t proto_fun_asyncio_funcs_gather = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_funcs_gather,
    .children = (void *)&children_asyncio_funcs_gather,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 281,
    .n_children = 2,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 2,
        .scope_flags = 13,
        .n_pos_args = 0,
        .n_kwonly_args = 1,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_asyncio_funcs_gather + 9,
        .line_info_top = fun_data_asyncio_funcs_gather + 9,
        .opcodes = fun_data_asyncio_funcs_gather + 12,
    },
    #endif
    #endif
};

static const mp_raw_code_t *const children_asyncio_funcs__lt_module_gt_[] = {
    (const mp_raw_code_t *)&proto_fun_asyncio_funcs__run,
    (const mp_raw_code_t *)&proto_fun_asyncio_funcs_wait_for,
    (const mp_raw_code_t *)&proto_fun_asyncio_funcs_wait_for_ms,
    (const mp_raw_code_t *)&proto_fun_asyncio_funcs__Remove,
    (const mp_raw_code_t *)&proto_fun_asyncio_funcs_gather,
};

static const mp_raw_code_truncated_t proto_fun_asyncio_funcs__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_funcs__lt_module_gt_,
    .children = (void *)&children_asyncio_funcs__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 56,
    .n_children = 5,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_asyncio_funcs__lt_module_gt_ + 3,
        .line_info_top = fun_data_asyncio_funcs__lt_module_gt_ + 3,
        .opcodes = fun_data_asyncio_funcs__lt_module_gt_ + 3,
    },
    #endif
    #endif
};

static const qstr_short_t const_qstr_table_data_asyncio_funcs[43] = {
    MP_QSTR_asyncio_slash_funcs_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_core,
    MP_QSTR_,
    MP_QSTR_sleep,
    MP_QSTR__Remove,
    MP_QSTR_return_exceptions,
    MP_QSTR__run,
    MP_QSTR_data,
    MP_QSTR_cancel,
    MP_QSTR_CancelledError,
    MP_QSTR_wait_for,
    MP_QSTR__promote_to_task,
    MP_QSTR_create_task,
    MP_QSTR_cur_task,
    MP_QSTR_value,
    MP_QSTR_args,
    MP_QSTR_TimeoutError,
    MP_QSTR_wait_for_ms,
    MP_QSTR_sleep_ms,
    MP_QSTR_gather,
    MP_QSTR_state,
    MP_QSTR_remove,
    MP_QSTR_done,
    MP_QSTR__task_queue,
    MP_QSTR_push,
    MP_QSTR__lt_listcomp_gt_,
    MP_QSTR_waiter,
    MP_QSTR_aw,
    MP_QSTR_BaseException,
    MP_QSTR_timeout,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_staticmethod,
    MP_QSTR_len,
    MP_QSTR_isinstance,
    MP_QSTR_StopIteration,
    MP_QSTR_RuntimeError,
    MP_QSTR_int,
    MP_QSTR_t,
    MP_QSTR__star_,
    MP_QSTR_er,
};

// constants

// constant table
static const mp_rom_obj_t const_obj_table_data_asyncio_funcs[1] = {
    MP_ROM_QSTR(MP_QSTR_can_squot_t_space_gather),
};

static const mp_frozen_module_t frozen_module_asyncio_funcs = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_asyncio_funcs,
        .obj_table = (mp_obj_t *)&const_obj_table_data_asyncio_funcs,
    },
    .proto_fun = &proto_fun_asyncio_funcs__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module asyncio_lock
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/asyncio/lock.mpy
// - frozen file name: asyncio/lock.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file asyncio/lock.py, scope asyncio_lock__lt_module_gt_
static const byte fun_data_asyncio_lock__lt_module_gt_[26] = {
    0x10,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x02, // LOAD_CONST_STRING 'core'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME ''
    0x1c,0x02, // IMPORT_FROM 'core'
    0x16,0x02, // STORE_NAME 'core'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'Lock'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'Lock'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_lock__lt_module_gt_
// frozen bytecode for file asyncio/lock.py, scope asyncio_lock_Lock
static const byte fun_data_asyncio_lock_Lock[37] = {
    0x00,0x02, // prelude
    0x04, // names: Lock
     // code info
    0x11,0x15, // LOAD_NAME '__name__'
    0x16,0x16, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'Lock'
    0x16,0x17, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x05, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x09, // STORE_NAME 'locked'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0a, // STORE_NAME 'release'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x0f, // STORE_NAME 'acquire'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x13, // STORE_NAME '__aenter__'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x14, // STORE_NAME '__aexit__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_lock_Lock
// frozen bytecode for file asyncio/lock.py, scope asyncio_lock_Lock___init__
static const byte fun_data_asyncio_lock_Lock___init__[19] = {
    0x11,0x04, // prelude
    0x05,0x18, // names: __init__, self
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'state'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x07, // LOAD_METHOD 'TaskQueue'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x18,0x08, // STORE_ATTR 'waiting'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_lock_Lock___init__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_lock_Lock___init__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 19,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_asyncio_lock_Lock___init__ + 4,
        .line_info_top = fun_data_asyncio_lock_Lock___init__ + 4,
        .opcodes = fun_data_asyncio_lock_Lock___init__ + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_lock_Lock___init__ fun_data_asyncio_lock_Lock___init__[0]
#endif

// child of asyncio_lock_Lock
// frozen bytecode for file asyncio/lock.py, scope asyncio_lock_Lock_locked
static const byte fun_data_asyncio_lock_Lock_locked[10] = {
    0x11,0x04, // prelude
    0x09,0x18, // names: locked, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'state'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xd9, // BINARY_OP 2 __eq__
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_lock_Lock_locked = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_lock_Lock_locked,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 10,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 9,
        .line_info = fun_data_asyncio_lock_Lock_locked + 4,
        .line_info_top = fun_data_asyncio_lock_Lock_locked + 4,
        .opcodes = fun_data_asyncio_lock_Lock_locked + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_lock_Lock_locked fun_data_asyncio_lock_Lock_locked[0]
#endif

// child of asyncio_lock_Lock
// frozen bytecode for file asyncio/lock.py, scope asyncio_lock_Lock_release
static const byte fun_data_asyncio_lock_Lock_release[57] = {
    0x19,0x04, // prelude
    0x0a,0x18, // names: release, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'state'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x19, // LOAD_GLOBAL 'RuntimeError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'waiting'
    0x14,0x0b, // LOAD_METHOD 'peek'
    0x36,0x00, // CALL_METHOD 0
    0x44,0x58, // POP_JUMP_IF_FALSE 24
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'waiting'
    0x14,0x0c, // LOAD_METHOD 'pop'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'state'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0d, // LOAD_ATTR '_task_queue'
    0x14,0x0e, // LOAD_METHOD 'push'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'state'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x44, // JUMP 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_lock_Lock_release = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_lock_Lock_release,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 57,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_asyncio_lock_Lock_release + 4,
        .line_info_top = fun_data_asyncio_lock_Lock_release + 4,
        .opcodes = fun_data_asyncio_lock_Lock_release + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_lock_Lock_release fun_data_asyncio_lock_Lock_release[0]
#endif

// child of asyncio_lock_Lock
// frozen bytecode for file asyncio/lock.py, scope asyncio_lock_Lock_acquire
static const byte fun_data_asyncio_lock_Lock_acquire[88] = {
    0xb9,0x42,0x04, // prelude
    0x0f,0x18, // names: acquire, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'state'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xdc, // BINARY_OP 5 __ne__
    0x44,0xc5,0x80, // POP_JUMP_IF_FALSE 69
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'waiting'
    0x14,0x0e, // LOAD_METHOD 'push'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x10, // LOAD_ATTR 'cur_task'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'waiting'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x10, // LOAD_ATTR 'cur_task'
    0x18,0x11, // STORE_ATTR 'data'
    0x48,0x05, // SETUP_EXCEPT 5
    0x51, // LOAD_CONST_NONE
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x4a,0x29, // POP_EXCEPT_JUMP 41
    0x57, // DUP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x12, // LOAD_ATTR 'CancelledError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x60, // POP_JUMP_IF_FALSE 32
    0xc1, // STORE_FAST 1
    0x49,0x16, // SETUP_FINALLY 22
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'state'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x10, // LOAD_ATTR 'cur_task'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'state'
    0xb0, // LOAD_FAST 0
    0x14,0x0a, // LOAD_METHOD 'release'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0xc1, // STORE_FAST 1
    0x28,0x01, // DELETE_FAST 1
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'state'
    0x52, // LOAD_CONST_TRUE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_lock_Lock_acquire = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_lock_Lock_acquire,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 88,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 15,
        .line_info = fun_data_asyncio_lock_Lock_acquire + 5,
        .line_info_top = fun_data_asyncio_lock_Lock_acquire + 5,
        .opcodes = fun_data_asyncio_lock_Lock_acquire + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_lock_Lock_acquire fun_data_asyncio_lock_Lock_acquire[0]
#endif

// child of asyncio_lock_Lock
// frozen bytecode for file asyncio/lock.py, scope asyncio_lock_Lock___aenter__
static const byte fun_data_asyncio_lock_Lock___aenter__[14] = {
    0x91,0x40,0x04, // prelude
    0x13,0x18, // names: __aenter__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0f, // LOAD_METHOD 'acquire'
    0x36,0x00, // CALL_METHOD 0
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_lock_Lock___aenter__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_lock_Lock___aenter__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 14,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_asyncio_lock_Lock___aenter__ + 5,
        .line_info_top = fun_data_asyncio_lock_Lock___aenter__ + 5,
        .opcodes = fun_data_asyncio_lock_Lock___aenter__ + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_lock_Lock___aenter__ fun_data_asyncio_lock_Lock___aenter__[0]
#endif

// child of asyncio_lock_Lock
// frozen bytecode for file asyncio/lock.py, scope asyncio_lock_Lock___aexit__
static const byte fun_data_asyncio_lock_Lock___aexit__[14] = {
    0xa8,0x44,0x0a, // prelude
    0x14,0x18,0x1a,0x1b,0x1c, // names: __aexit__, self, exc_type, exc, tb
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0a, // LOAD_METHOD 'release'
    0x36,0x00, // CALL_METHOD 0
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_lock_Lock___aexit__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_lock_Lock___aexit__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 14,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_asyncio_lock_Lock___aexit__ + 8,
        .line_info_top = fun_data_asyncio_lock_Lock___aexit__ + 8,
        .opcodes = fun_data_asyncio_lock_Lock___aexit__ + 8,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_lock_Lock___aexit__ fun_data_asyncio_lock_Lock___aexit__[0]
#endif

static const mp_raw_code_t *const children_asyncio_lock_Lock[] = {
    (const mp_raw_code_t *)&proto_fun_asyncio_lock_Lock___init__,
    (const mp_raw_code_t *)&proto_fun_asyncio_lock_Lock_locked,
    (const mp_raw_code_t *)&proto_fun_asyncio_lock_Lock_release,
    (const mp_raw_code_t *)&proto_fun_asyncio_lock_Lock_acquire,
    (const mp_raw_code_t *)&proto_fun_asyncio_lock_Lock___aenter__,
    (const mp_raw_code_t *)&proto_fun_asyncio_lock_Lock___aexit__,
};

static const mp_raw_code_truncated_t proto_fun_asyncio_lock_Lock = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_lock_Lock,
    .children = (void *)&children_asyncio_lock_Lock,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 37,
    .n_children = 6,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_asyncio_lock_Lock + 3,
        .line_info_top = fun_data_asyncio_lock_Lock + 3,
        .opcodes = fun_data_asyncio_lock_Lock + 3,
    },
    #endif
    #endif
};

static const mp_raw_code_t *const children_asyncio_lock__lt_module_gt_[] = {
    (const mp_raw_code_t *)&proto_fun_asyncio_lock_Lock,
};

static const mp_raw_code_truncated_t proto_fun_asyncio_lock__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_lock__lt_module_gt_,
    .children = (void *)&children_asyncio_lock__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 26,
    .n_children = 1,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_asyncio_lock__lt_module_gt_ + 3,
        .line_info_top = fun_data_asyncio_lock__lt_module_gt_ + 3,
        .opcodes = fun_data_asyncio_lock__lt_module_gt_ + 3,
    },
    #endif
    #endif
};

static const qstr_short_t const_qstr_table_data_asyncio_lock[29] = {
    MP_QSTR_asyncio_slash_lock_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_core,
    MP_QSTR_,
    MP_QSTR_Lock,
    MP_QSTR___init__,
    MP_QSTR_state,
    MP_QSTR_TaskQueue,
    MP_QSTR_waiting,
    MP_QSTR_locked,
    MP_QSTR_release,
    MP_QSTR_peek,
    MP_QSTR_pop,
    MP_QSTR__task_queue,
    MP_QSTR_push,
    MP_QSTR_acquire,
    MP_QSTR_cur_task,
    MP_QSTR_data,
    MP_QSTR_CancelledError,
    MP_QSTR___aenter__,
    MP_QSTR___aexit__,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_RuntimeError,
    MP_QSTR_exc_type,
    MP_QSTR_exc,
    MP_QSTR_tb,
};

// constants

// constant table
static const mp_rom_obj_t const_obj_table_data_asyncio_lock[1] = {
    MP_ROM_QSTR(MP_QSTR_Lock_space_not_space_acquired),
};

static const mp_frozen_module_t frozen_module_asyncio_lock = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_asyncio_lock,
        .obj_table = (mp_obj_t *)&const_obj_table_data_asyncio_lock,
    },
    .proto_fun = &proto_fun_asyncio_lock__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module asyncio_stream
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/asyncio/stream.mpy
// - frozen file name: asyncio/stream.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file asyncio/stream.py, scope asyncio_stream__lt_module_gt_
static const byte fun_data_asyncio_stream__lt_module_gt_[90] = {
    0x10,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x02, // LOAD_CONST_STRING 'core'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME ''
    0x1c,0x02, // IMPORT_FROM 'core'
    0x16,0x02, // STORE_NAME 'core'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'Stream'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'Stream'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x16,0x3c, // STORE_NAME 'StreamReader'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x16,0x3d, // STORE_NAME 'StreamWriter'
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x01, // MAKE_FUNCTION_DEFARGS 1
    0x16,0x0a, // STORE_NAME 'open_connection'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x02, // MAKE_FUNCTION 2
    0x10,0x05, // LOAD_CONST_STRING 'Server'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x05, // STORE_NAME 'Server'
    0x85, // LOAD_CONST_SMALL_INT 5
    0x51, // LOAD_CONST_NONE
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x03, // MAKE_FUNCTION_DEFARGS 3
    0x16,0x1a, // STORE_NAME 'start_server'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x04, // MAKE_FUNCTION_DEFARGS 4
    0x16,0x26, // STORE_NAME 'stream_awrite'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x13,0x06, // LOAD_ATTR 'wait_closed'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x18,0x07, // STORE_ATTR 'aclose'
    0x11,0x26, // LOAD_NAME 'stream_awrite'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x18,0x08, // STORE_ATTR 'awrite'
    0x11,0x26, // LOAD_NAME 'stream_awrite'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x18,0x09, // STORE_ATTR 'awritestr'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_stream__lt_module_gt_
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream
static const byte fun_data_asyncio_stream_Stream[62] = {
    0x08,0x02, // prelude
    0x04, // names: Stream
     // code info
    0x11,0x3e, // LOAD_NAME '__name__'
    0x16,0x3f, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'Stream'
    0x16,0x40, // STORE_NAME '__qualname__'
    0x2c,0x00, // BUILD_MAP 0
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x00, // MAKE_FUNCTION_DEFARGS 0
    0x16,0x29, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x2d, // STORE_NAME 'get_extra_info'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x2e, // STORE_NAME 'close'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x06, // STORE_NAME 'wait_closed'
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x04, // MAKE_FUNCTION_DEFARGS 4
    0x16,0x2f, // STORE_NAME 'read'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x31, // STORE_NAME 'readinto'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x32, // STORE_NAME 'readexactly'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x33, // STORE_NAME 'readline'
    0x32,0x08, // MAKE_FUNCTION 8
    0x16,0x27, // STORE_NAME 'write'
    0x32,0x09, // MAKE_FUNCTION 9
    0x16,0x28, // STORE_NAME 'drain'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_stream_Stream
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream___init__
static const byte fun_data_asyncio_stream_Stream___init__[22] = {
    0xa3,0x01,0x08, // prelude
    0x29,0x46,0x2a,0x2b, // names: __init__, self, s, e
     // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x2a, // STORE_ATTR 's'
    0xb2, // LOAD_FAST 2
    0xb0, // LOAD_FAST 0
    0x18,0x2b, // STORE_ATTR 'e'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xb0, // LOAD_FAST 0
    0x18,0x2c, // STORE_ATTR 'out_buf'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_stream_Stream___init__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_stream_Stream___init__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 22,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 41,
        .line_info = fun_data_asyncio_stream_Stream___init__ + 7,
        .line_info_top = fun_data_asyncio_stream_Stream___init__ + 7,
        .opcodes = fun_data_asyncio_stream_Stream___init__ + 7,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_stream_Stream___init__ fun_data_asyncio_stream_Stream___init__[0]
#endif

// child of asyncio_stream_Stream
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream_get_extra_info
static const byte fun_data_asyncio_stream_Stream_get_extra_info[11] = {
    0x1a,0x06, // prelude
    0x2d,0x46,0x4c, // names: get_extra_info, self, v
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x2b, // LOAD_ATTR 'e'
    0xb1, // LOAD_FAST 1
    0x55, // LOAD_SUBSCR
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_stream_Stream_get_extra_info = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_stream_Stream_get_extra_info,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 11,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 45,
        .line_info = fun_data_asyncio_stream_Stream_get_extra_info + 5,
        .line_info_top = fun_data_asyncio_stream_Stream_get_extra_info + 5,
        .opcodes = fun_data_asyncio_stream_Stream_get_extra_info + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_stream_Stream_get_extra_info fun_data_asyncio_stream_Stream_get_extra_info[0]
#endif

// child of asyncio_stream_Stream
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream_close
static const byte fun_data_asyncio_stream_Stream_close[6] = {
    0x09,0x04, // prelude
    0x2e,0x46, // names: close, self
     // code info
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_stream_Stream_close = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_stream_Stream_close,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 6,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 46,
        .line_info = fun_data_asyncio_stream_Stream_close + 4,
        .line_info_top = fun_data_asyncio_stream_Stream_close + 4,
        .opcodes = fun_data_asyncio_stream_Stream_close + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_stream_Stream_close fun_data_asyncio_stream_Stream_close[0]
#endif

// child of asyncio_stream_Stream
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream_wait_closed
static const byte fun_data_asyncio_stream_Stream_wait_closed[15] = {
    0x91,0x40,0x04, // prelude
    0x06,0x46, // names: wait_closed, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x14,0x2e, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_stream_Stream_wait_closed = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_stream_Stream_wait_closed,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 15,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_asyncio_stream_Stream_wait_closed + 5,
        .line_info_top = fun_data_asyncio_stream_Stream_wait_closed + 5,
        .opcodes = fun_data_asyncio_stream_Stream_wait_closed + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_stream_Stream_wait_closed fun_data_asyncio_stream_Stream_wait_closed[0]
#endif

// child of asyncio_stream_Stream
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream_read
static const byte fun_data_asyncio_stream_Stream_read[61] = {
    0xb2,0x41,0x06, // prelude
    0x2f,0x46,0x4d, // names: read, self, n
     // code info
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xc2, // STORE_FAST 2
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x18, // LOAD_ATTR '_io_queue'
    0x14,0x30, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x14,0x2f, // LOAD_METHOD 'read'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x54, // POP_JUMP_IF_FALSE 20
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0xdb, // BINARY_OP 4 __ge__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0xb3, // LOAD_FAST 3
    0x63, // RETURN_VALUE
    0x12,0x4b, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0xb2, // LOAD_FAST 2
    0x63, // RETURN_VALUE
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xe5, // BINARY_OP 14 __iadd__
    0xc2, // STORE_FAST 2
    0x42,0x0e, // JUMP -50
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_stream_Stream_read = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_stream_Stream_read,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 61,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 47,
        .line_info = fun_data_asyncio_stream_Stream_read + 6,
        .line_info_top = fun_data_asyncio_stream_Stream_read + 6,
        .opcodes = fun_data_asyncio_stream_Stream_read + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_stream_Stream_read fun_data_asyncio_stream_Stream_read[0]
#endif

// child of asyncio_stream_Stream
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream_readinto
static const byte fun_data_asyncio_stream_Stream_readinto[28] = {
    0xa2,0x40,0x06, // prelude
    0x31,0x46,0x47, // names: readinto, self, buf
     // code info
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x18, // LOAD_ATTR '_io_queue'
    0x14,0x30, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x14,0x31, // LOAD_METHOD 'readinto'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_stream_Stream_readinto = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_stream_Stream_readinto,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 28,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 49,
        .line_info = fun_data_asyncio_stream_Stream_readinto + 6,
        .line_info_top = fun_data_asyncio_stream_Stream_readinto + 6,
        .opcodes = fun_data_asyncio_stream_Stream_readinto + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_stream_Stream_readinto fun_data_asyncio_stream_Stream_readinto[0]
#endif

// child of asyncio_stream_Stream
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream_readexactly
static const byte fun_data_asyncio_stream_Stream_readexactly[66] = {
    0xb2,0x40,0x06, // prelude
    0x32,0x46,0x4d, // names: readexactly, self, n
     // code info
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xc2, // STORE_FAST 2
    0x42,0x72, // JUMP 50
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x18, // LOAD_ATTR '_io_queue'
    0x14,0x30, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x14,0x2f, // LOAD_METHOD 'read'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0x12,0x4b, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x4e, // LOAD_GLOBAL 'EOFError'
    0x65, // RAISE_OBJ
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xe5, // BINARY_OP 14 __iadd__
    0xc2, // STORE_FAST 2
    0xb1, // LOAD_FAST 1
    0x12,0x4b, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0xe6, // BINARY_OP 15 __isub__
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x43,0x0b, // POP_JUMP_IF_TRUE -53
    0xb2, // LOAD_FAST 2
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_stream_Stream_readexactly = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_stream_Stream_readexactly,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 66,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 50,
        .line_info = fun_data_asyncio_stream_Stream_readexactly + 6,
        .line_info_top = fun_data_asyncio_stream_Stream_readexactly + 6,
        .opcodes = fun_data_asyncio_stream_Stream_readexactly + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_stream_Stream_readexactly fun_data_asyncio_stream_Stream_readexactly[0]
#endif

// child of asyncio_stream_Stream
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream_readline
static const byte fun_data_asyncio_stream_Stream_readline[56] = {
    0xa9,0x40,0x04, // prelude
    0x33,0x46, // names: readline, self
     // code info
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xc1, // STORE_FAST 1
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x18, // LOAD_ATTR '_io_queue'
    0x14,0x30, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x14,0x33, // LOAD_METHOD 'readline'
    0x36,0x00, // CALL_METHOD 0
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x42,0x50, // JUMP 16
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xe5, // BINARY_OP 14 __iadd__
    0xc1, // STORE_FAST 1
    0xb2, // LOAD_FAST 2
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0xb1, // LOAD_FAST 1
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0x8a, // LOAD_CONST_SMALL_INT 10
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
    0x42,0x12, // JUMP -46
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_stream_Stream_readline = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_stream_Stream_readline,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 56,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 51,
        .line_info = fun_data_asyncio_stream_Stream_readline + 5,
        .line_info_top = fun_data_asyncio_stream_Stream_readline + 5,
        .opcodes = fun_data_asyncio_stream_Stream_readline + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_stream_Stream_readline fun_data_asyncio_stream_Stream_readline[0]
#endif

// child of asyncio_stream_Stream
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream_write
static const byte fun_data_asyncio_stream_Stream_write[54] = {
    0x2a,0x06, // prelude
    0x27,0x46,0x47, // names: write, self, buf
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x2c, // LOAD_ATTR 'out_buf'
    0x43,0x61, // POP_JUMP_IF_TRUE 33
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x14,0x27, // LOAD_METHOD 'write'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x12,0x4b, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x57, // DUP_TOP
    0x13,0x2c, // LOAD_ATTR 'out_buf'
    0xb1, // LOAD_FAST 1
    0xe5, // BINARY_OP 14 __iadd__
    0x5a, // ROT_TWO
    0x18,0x2c, // STORE_ATTR 'out_buf'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_stream_Stream_write = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_stream_Stream_write,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 54,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 39,
        .line_info = fun_data_asyncio_stream_Stream_write + 5,
        .line_info_top = fun_data_asyncio_stream_Stream_write + 5,
        .opcodes = fun_data_asyncio_stream_Stream_write + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_stream_Stream_write fun_data_asyncio_stream_Stream_write[0]
#endif

// child of asyncio_stream_Stream
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Stream_drain
static const byte fun_data_asyncio_stream_Stream_drain[86] = {
    0xc1,0x40,0x04, // prelude
    0x28,0x46, // names: drain, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x2c, // LOAD_ATTR 'out_buf'
    0x43,0x4b, // POP_JUMP_IF_TRUE 11
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x23, // LOAD_METHOD 'sleep_ms'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x01, // CALL_METHOD 1
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x63, // RETURN_VALUE
    0x12,0x4a, // LOAD_GLOBAL 'memoryview'
    0xb0, // LOAD_FAST 0
    0x13,0x2c, // LOAD_ATTR 'out_buf'
    0x34,0x01, // CALL_FUNCTION 1
    0xc1, // STORE_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc2, // STORE_FAST 2
    0x42,0x65, // JUMP 37
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x18, // LOAD_ATTR '_io_queue'
    0x14,0x19, // LOAD_METHOD 'queue_write'
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x2a, // LOAD_ATTR 's'
    0x14,0x27, // LOAD_METHOD 'write'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xe5, // BINARY_OP 14 __iadd__
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x12,0x4b, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x12, // POP_JUMP_IF_TRUE -46
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xb0, // LOAD_FAST 0
    0x18,0x2c, // STORE_ATTR 'out_buf'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_stream_Stream_drain = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_stream_Stream_drain,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 86,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 40,
        .line_info = fun_data_asyncio_stream_Stream_drain + 5,
        .line_info_top = fun_data_asyncio_stream_Stream_drain + 5,
        .opcodes = fun_data_asyncio_stream_Stream_drain + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_stream_Stream_drain fun_data_asyncio_stream_Stream_drain[0]
#endif

static const mp_raw_code_t *const children_asyncio_stream_Stream[] = {
    (const mp_raw_code_t *)&proto_fun_asyncio_stream_Stream___init__,
    (const mp_raw_code_t *)&proto_fun_asyncio_stream_Stream_get_extra_info,
    (const mp_raw_code_t *)&proto_fun_asyncio_stream_Stream_close,
    (const mp_raw_code_t *)&proto_fun_asyncio_stream_Stream_wait_closed,
    (const mp_raw_code_t *)&proto_fun_asyncio_stream_Stream_read,
    (const mp_raw_code_t *)&proto_fun_asyncio_stream_Stream_readinto,
    (const mp_raw_code_t *)&proto_fun_asyncio_stream_Stream_readexactly,
    (const mp_raw_code_t *)&proto_fun_asyncio_stream_Stream_readline,
    (const mp_raw_code_t *)&proto_fun_asyncio_stream_Stream_write,
    (const mp_raw_code_t *)&proto_fun_asyncio_stream_Stream_drain,
};

static const mp_raw_code_truncated_t proto_fun_asyncio_stream_Stream = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_stream_Stream,
    .children = (void *)&children_asyncio_stream_Stream,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 62,
    .n_children = 10,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_asyncio_stream_Stream + 3,
        .line_info_top = fun_data_asyncio_stream_Stream + 3,
        .opcodes = fun_data_asyncio_stream_Stream + 3,
    },
    #endif
    #endif
};

// child of asyncio_stream__lt_module_gt_
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_open_connection
static const byte fun_data_asyncio_stream_open_connection[171] = {
    0x88,0xd6,0x01,0x0a, // prelude
    0x0a,0x41,0x42,0x12,0x16, // names: open_connection, host, port, ssl, server_hostname
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0b, // LOAD_CONST_STRING 'EINPROGRESS'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0c, // IMPORT_NAME 'errno'
    0x1c,0x0b, // IMPORT_FROM 'EINPROGRESS'
    0xc4, // STORE_FAST 4
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x0d, // IMPORT_NAME 'socket'
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x14,0x0e, // LOAD_METHOD 'getaddrinfo'
    0xb0, // LOAD_FAST 0
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb5, // LOAD_FAST 5
    0x13,0x0f, // LOAD_ATTR 'SOCK_STREAM'
    0x36,0x04, // CALL_METHOD 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xc6, // STORE_FAST 6
    0xb5, // LOAD_FAST 5
    0x14,0x0d, // LOAD_METHOD 'socket'
    0xb6, // LOAD_FAST 6
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xb6, // LOAD_FAST 6
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xb6, // LOAD_FAST 6
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x36,0x03, // CALL_METHOD 3
    0xc7, // STORE_FAST 7
    0xb7, // LOAD_FAST 7
    0x14,0x10, // LOAD_METHOD 'setblocking'
    0x50, // LOAD_CONST_FALSE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x48,0x0b, // SETUP_EXCEPT 11
    0xb7, // LOAD_FAST 7
    0x14,0x11, // LOAD_METHOD 'connect'
    0xb6, // LOAD_FAST 6
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x4a,0x1b, // POP_EXCEPT_JUMP 27
    0x57, // DUP_TOP
    0x12,0x43, // LOAD_GLOBAL 'OSError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x54, // POP_JUMP_IF_FALSE 20
    0xc8, // STORE_FAST 8
    0x49,0x0a, // SETUP_FINALLY 10
    0xb8, // LOAD_FAST 8
    0x13,0x0c, // LOAD_ATTR 'errno'
    0xb4, // LOAD_FAST 4
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0xb8, // LOAD_FAST 8
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc8, // STORE_FAST 8
    0x28,0x08, // DELETE_FAST 8
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xb2, // LOAD_FAST 2
    0x44,0x6d, // POP_JUMP_IF_FALSE 45
    0xb2, // LOAD_FAST 2
    0x52, // LOAD_CONST_TRUE
    0xde, // BINARY_OP 7 <is>
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x12, // IMPORT_NAME 'ssl'
    0xc9, // STORE_FAST 9
    0xb9, // LOAD_FAST 9
    0x14,0x13, // LOAD_METHOD 'SSLContext'
    0xb9, // LOAD_FAST 9
    0x13,0x14, // LOAD_ATTR 'PROTOCOL_TLS_CLIENT'
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0xb3, // LOAD_FAST 3
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0xb0, // LOAD_FAST 0
    0xc3, // STORE_FAST 3
    0xb2, // LOAD_FAST 2
    0x14,0x15, // LOAD_METHOD 'wrap_socket'
    0xb7, // LOAD_FAST 7
    0x10,0x16, // LOAD_CONST_STRING 'server_hostname'
    0xb3, // LOAD_FAST 3
    0x10,0x17, // LOAD_CONST_STRING 'do_handshake_on_connect'
    0x50, // LOAD_CONST_FALSE
    0x36,0x84,0x01, // CALL_METHOD 513
    0xc7, // STORE_FAST 7
    0xb7, // LOAD_FAST 7
    0x14,0x10, // LOAD_METHOD 'setblocking'
    0x50, // LOAD_CONST_FALSE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Stream'
    0xb7, // LOAD_FAST 7
    0x34,0x01, // CALL_FUNCTION 1
    0xca, // STORE_FAST 10
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x18, // LOAD_ATTR '_io_queue'
    0x14,0x19, // LOAD_METHOD 'queue_write'
    0xb7, // LOAD_FAST 7
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xba, // LOAD_FAST 10
    0xba, // LOAD_FAST 10
    0x2a,0x02, // BUILD_TUPLE 2
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_stream_open_connection = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_stream_open_connection,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 171,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 18,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_asyncio_stream_open_connection + 9,
        .line_info_top = fun_data_asyncio_stream_open_connection + 9,
        .opcodes = fun_data_asyncio_stream_open_connection + 9,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_stream_open_connection fun_data_asyncio_stream_open_connection[0]
#endif

// child of asyncio_stream__lt_module_gt_
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Server
static const byte fun_data_asyncio_stream_Server[33] = {
    0x00,0x02, // prelude
    0x05, // names: Server
     // code info
    0x11,0x3e, // LOAD_NAME '__name__'
    0x16,0x3f, // STORE_NAME '__module__'
    0x10,0x05, // LOAD_CONST_STRING 'Server'
    0x16,0x40, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x34, // STORE_NAME '__aenter__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x35, // STORE_NAME '__aexit__'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x2e, // STORE_NAME 'close'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x06, // STORE_NAME 'wait_closed'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x21, // STORE_NAME '_serve'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of asyncio_stream_Server
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Server___aenter__
static const byte fun_data_asyncio_stream_Server___aenter__[7] = {
    0x89,0x40,0x04, // prelude
    0x34,0x46, // names: __aenter__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_stream_Server___aenter__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_stream_Server___aenter__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 7,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 52,
        .line_info = fun_data_asyncio_stream_Server___aenter__ + 5,
        .line_info_top = fun_data_asyncio_stream_Server___aenter__ + 5,
        .opcodes = fun_data_asyncio_stream_Server___aenter__ + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_stream_Server___aenter__ fun_data_asyncio_stream_Server___aenter__[0]
#endif

// child of asyncio_stream_Server
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Server___aexit__
static const byte fun_data_asyncio_stream_Server___aexit__[25] = {
    0xa8,0x44,0x0a, // prelude
    0x35,0x46,0x4f,0x50,0x51, // names: __aexit__, self, exc_type, exc, tb
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x2e, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x06, // LOAD_METHOD 'wait_closed'
    0x36,0x00, // CALL_METHOD 0
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_stream_Server___aexit__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_stream_Server___aexit__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 25,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 53,
        .line_info = fun_data_asyncio_stream_Server___aexit__ + 8,
        .line_info_top = fun_data_asyncio_stream_Server___aexit__ + 8,
        .opcodes = fun_data_asyncio_stream_Server___aexit__ + 8,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_stream_Server___aexit__ fun_data_asyncio_stream_Server___aexit__[0]
#endif

// child of asyncio_stream_Server
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Server_close
static const byte fun_data_asyncio_stream_Server_close[18] = {
    0x11,0x04, // prelude
    0x2e,0x46, // names: close, self
     // code info
    0x52, // LOAD_CONST_TRUE
    0xb0, // LOAD_FAST 0
    0x18,0x36, // STORE_ATTR 'state'
    0xb0, // LOAD_FAST 0
    0x13,0x22, // LOAD_ATTR 'task'
    0x14,0x25, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_stream_Server_close = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_stream_Server_close,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 18,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 46,
        .line_info = fun_data_asyncio_stream_Server_close + 4,
        .line_info_top = fun_data_asyncio_stream_Server_close + 4,
        .opcodes = fun_data_asyncio_stream_Server_close + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_stream_Server_close fun_data_asyncio_stream_Server_close[0]
#endif

// child of asyncio_stream_Server
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Server_wait_closed
static const byte fun_data_asyncio_stream_Server_wait_closed[14] = {
    0x91,0x40,0x04, // prelude
    0x06,0x46, // names: wait_closed, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x22, // LOAD_ATTR 'task'
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_stream_Server_wait_closed = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_stream_Server_wait_closed,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 14,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_asyncio_stream_Server_wait_closed + 5,
        .line_info_top = fun_data_asyncio_stream_Server_wait_closed + 5,
        .opcodes = fun_data_asyncio_stream_Server_wait_closed + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_stream_Server_wait_closed fun_data_asyncio_stream_Server_wait_closed[0]
#endif

// child of asyncio_stream_Server
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_Server__serve
static const byte fun_data_asyncio_stream_Server__serve[174] = {
    0xf8,0x46,0x0a, // prelude
    0x21,0x46,0x2a,0x44,0x12, // names: _serve, self, s, cb, ssl
     // code info
    0x50, // LOAD_CONST_FALSE
    0xb0, // LOAD_FAST 0
    0x18,0x36, // STORE_ATTR 'state'
    0x48,0x0d, // SETUP_EXCEPT 13
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x18, // LOAD_ATTR '_io_queue'
    0x14,0x30, // LOAD_METHOD 'queue_read'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x4a,0x23, // POP_EXCEPT_JUMP 35
    0x57, // DUP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x24, // LOAD_ATTR 'CancelledError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x5a, // POP_JUMP_IF_FALSE 26
    0xc4, // STORE_FAST 4
    0x49,0x10, // SETUP_FINALLY 16
    0xb1, // LOAD_FAST 1
    0x14,0x2e, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x36, // LOAD_ATTR 'state'
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0xb4, // LOAD_FAST 4
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc4, // STORE_FAST 4
    0x28,0x04, // DELETE_FAST 4
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x48,0x0b, // SETUP_EXCEPT 11
    0xb1, // LOAD_FAST 1
    0x14,0x37, // LOAD_METHOD 'accept'
    0x36,0x00, // CALL_METHOD 0
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc5, // STORE_FAST 5
    0xc6, // STORE_FAST 6
    0x4a,0x06, // POP_EXCEPT_JUMP 6
    0x59, // POP_TOP
    0x40,0xda,0x80,0x01, // UNWIND_JUMP 90
    0x5d, // END_FINALLY
    0xb3, // LOAD_FAST 3
    0x44,0x76, // POP_JUMP_IF_FALSE 54
    0x48,0x10, // SETUP_EXCEPT 16
    0xb3, // LOAD_FAST 3
    0x14,0x15, // LOAD_METHOD 'wrap_socket'
    0xb5, // LOAD_FAST 5
    0x10,0x38, // LOAD_CONST_STRING 'server_side'
    0x52, // LOAD_CONST_TRUE
    0x10,0x17, // LOAD_CONST_STRING 'do_handshake_on_connect'
    0x50, // LOAD_CONST_FALSE
    0x36,0x84,0x01, // CALL_METHOD 513
    0xc5, // STORE_FAST 5
    0x4a,0x24, // POP_EXCEPT_JUMP 36
    0x57, // DUP_TOP
    0x12,0x43, // LOAD_GLOBAL 'OSError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x5d, // POP_JUMP_IF_FALSE 29
    0xc7, // STORE_FAST 7
    0x49,0x13, // SETUP_FINALLY 19
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x39, // LOAD_ATTR 'sys'
    0x14,0x3a, // LOAD_METHOD 'print_exception'
    0xb7, // LOAD_FAST 7
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb5, // LOAD_FAST 5
    0x14,0x2e, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x40,0x68,0x02, // UNWIND_JUMP 40
    0x51, // LOAD_CONST_NONE
    0xc7, // STORE_FAST 7
    0x28,0x07, // DELETE_FAST 7
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xb5, // LOAD_FAST 5
    0x14,0x10, // LOAD_METHOD 'setblocking'
    0x50, // LOAD_CONST_FALSE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Stream'
    0xb5, // LOAD_FAST 5
    0x2c,0x01, // BUILD_MAP 1
    0xb6, // LOAD_FAST 6
    0x10,0x3b, // LOAD_CONST_STRING 'peername'
    0x62, // STORE_MAP
    0x34,0x02, // CALL_FUNCTION 2
    0xc8, // STORE_FAST 8
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x20, // LOAD_METHOD 'create_task'
    0xb2, // LOAD_FAST 2
    0xb8, // LOAD_FAST 8
    0xb8, // LOAD_FAST 8
    0x34,0x02, // CALL_FUNCTION 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0xe0,0x7e, // JUMP -160
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_stream_Server__serve = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_stream_Server__serve,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 174,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 16,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 33,
        .line_info = fun_data_asyncio_stream_Server__serve + 8,
        .line_info_top = fun_data_asyncio_stream_Server__serve + 8,
        .opcodes = fun_data_asyncio_stream_Server__serve + 8,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_stream_Server__serve fun_data_asyncio_stream_Server__serve[0]
#endif

static const mp_raw_code_t *const children_asyncio_stream_Server[] = {
    (const mp_raw_code_t *)&proto_fun_asyncio_stream_Server___aenter__,
    (const mp_raw_code_t *)&proto_fun_asyncio_stream_Server___aexit__,
    (const mp_raw_code_t *)&proto_fun_asyncio_stream_Server_close,
    (const mp_raw_code_t *)&proto_fun_asyncio_stream_Server_wait_closed,
    (const mp_raw_code_t *)&proto_fun_asyncio_stream_Server__serve,
};

static const mp_raw_code_truncated_t proto_fun_asyncio_stream_Server = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_stream_Server,
    .children = (void *)&children_asyncio_stream_Server,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 33,
    .n_children = 5,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_asyncio_stream_Server + 3,
        .line_info_top = fun_data_asyncio_stream_Server + 3,
        .opcodes = fun_data_asyncio_stream_Server + 3,
    },
    #endif
    #endif
};

// child of asyncio_stream__lt_module_gt_
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_start_server
static const byte fun_data_asyncio_stream_start_server[138] = {
    0x81,0xd6,0x01,0x0c, // prelude
    0x1a,0x44,0x41,0x42,0x45,0x12, // names: start_server, cb, host, port, backlog, ssl
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x0d, // IMPORT_NAME 'socket'
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x14,0x0e, // LOAD_METHOD 'getaddrinfo'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xc6, // STORE_FAST 6
    0xb5, // LOAD_FAST 5
    0x14,0x0d, // LOAD_METHOD 'socket'
    0xb6, // LOAD_FAST 6
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0xc7, // STORE_FAST 7
    0xb7, // LOAD_FAST 7
    0x14,0x10, // LOAD_METHOD 'setblocking'
    0x50, // LOAD_CONST_FALSE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb7, // LOAD_FAST 7
    0x14,0x1b, // LOAD_METHOD 'setsockopt'
    0xb5, // LOAD_FAST 5
    0x13,0x1c, // LOAD_ATTR 'SOL_SOCKET'
    0xb5, // LOAD_FAST 5
    0x13,0x1d, // LOAD_ATTR 'SO_REUSEADDR'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x03, // CALL_METHOD 3
    0x59, // POP_TOP
    0xb7, // LOAD_FAST 7
    0x14,0x1e, // LOAD_METHOD 'bind'
    0xb6, // LOAD_FAST 6
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb7, // LOAD_FAST 7
    0x14,0x1f, // LOAD_METHOD 'listen'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x05, // LOAD_GLOBAL 'Server'
    0x34,0x00, // CALL_FUNCTION 0
    0xc8, // STORE_FAST 8
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x20, // LOAD_METHOD 'create_task'
    0xb8, // LOAD_FAST 8
    0x14,0x21, // LOAD_METHOD '_serve'
    0xb7, // LOAD_FAST 7
    0xb0, // LOAD_FAST 0
    0xb4, // LOAD_FAST 4
    0x36,0x03, // CALL_METHOD 3
    0x36,0x01, // CALL_METHOD 1
    0xb8, // LOAD_FAST 8
    0x18,0x22, // STORE_ATTR 'task'
    0x48,0x0d, // SETUP_EXCEPT 13
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x23, // LOAD_METHOD 'sleep_ms'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x01, // CALL_METHOD 1
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x4a,0x1d, // POP_EXCEPT_JUMP 29
    0x57, // DUP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x24, // LOAD_ATTR 'CancelledError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x54, // POP_JUMP_IF_FALSE 20
    0xc9, // STORE_FAST 9
    0x49,0x0a, // SETUP_FINALLY 10
    0xb8, // LOAD_FAST 8
    0x13,0x22, // LOAD_ATTR 'task'
    0x14,0x25, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb9, // LOAD_FAST 9
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0xc9, // STORE_FAST 9
    0x28,0x09, // DELETE_FAST 9
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xb8, // LOAD_FAST 8
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_stream_start_server = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_stream_start_server,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 138,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 17,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 26,
        .line_info = fun_data_asyncio_stream_start_server + 10,
        .line_info_top = fun_data_asyncio_stream_start_server + 10,
        .opcodes = fun_data_asyncio_stream_start_server + 10,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_stream_start_server fun_data_asyncio_stream_start_server[0]
#endif

// child of asyncio_stream__lt_module_gt_
// frozen bytecode for file asyncio/stream.py, scope asyncio_stream_stream_awrite
static const byte fun_data_asyncio_stream_stream_awrite[63] = {
    0xb8,0xc4,0x01,0x0a, // prelude
    0x26,0x46,0x47,0x48,0x49, // names: stream_awrite, self, buf, off, sz
     // code info
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xdc, // BINARY_OP 5 __ne__
    0x43,0x45, // POP_JUMP_IF_TRUE 5
    0xb3, // LOAD_FAST 3
    0x7f, // LOAD_CONST_SMALL_INT -1
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x5a, // POP_JUMP_IF_FALSE 26
    0x12,0x4a, // LOAD_GLOBAL 'memoryview'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xc1, // STORE_FAST 1
    0xb3, // LOAD_FAST 3
    0x7f, // LOAD_CONST_SMALL_INT -1
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x12,0x4b, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xc3, // STORE_FAST 3
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xf2, // BINARY_OP 27 __add__
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x14,0x27, // LOAD_METHOD 'write'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x28, // LOAD_METHOD 'drain'
    0x36,0x00, // CALL_METHOD 0
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_asyncio_stream_stream_awrite = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_asyncio_stream_stream_awrite,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 63,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 38,
        .line_info = fun_data_asyncio_stream_stream_awrite + 9,
        .line_info_top = fun_data_asyncio_stream_stream_awrite + 9,
        .opcodes = fun_data_asyncio_stream_stream_awrite + 9,
    },
    #endif
    #endif
};
#else
#define proto_fun_asyncio_stream_stream_awrite fun_data_asyncio_stream_stream_awrite[0]
#endif

static const mp_raw_code_t *const children_asyncio_stream__lt_module_gt_[] = {
    (const mp_raw_code_t *)&proto_fun_asyncio_stream_Stream,
    (const mp_raw_code_t *)&proto_fun_asyncio_stream_open_connection,
    (const mp_raw_code_t *)&proto_fun_asyncio_stream_Server,
    (const mp_raw_code_t *)&proto_fun_asyncio_stream_start_server,
    (const mp_raw_code_t *)&proto_fun_asyncio_stream_stream_awrite,
};

static const mp_raw_code_truncated_t proto_fun_asyncio_stream__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_asyncio_stream__lt_module_gt_,
    .children = (void *)&children_asyncio_stream__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 90,
    .n_children = 5,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_asyncio_stream__lt_module_gt_ + 3,
        .line_info_top = fun_data_asyncio_stream__lt_module_gt_ + 3,
        .opcodes = fun_data_asyncio_stream__lt_module_gt_ + 3,
    },
    #endif
    #endif
};

static const qstr_short_t const_qstr_table_data_asyncio_stream[82] = {
    MP_QSTR_asyncio_slash_stream_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_core,
    MP_QSTR_,
    MP_QSTR_Stream,
    MP_QSTR_Server,
    MP_QSTR_wait_closed,
    MP_QSTR_aclose,
    MP_QSTR_awrite,
    MP_QSTR_awritestr,
    MP_QSTR_open_connection,
    MP_QSTR_EINPROGRESS,
    MP_QSTR_errno,
    MP_QSTR_socket,
    MP_QSTR_getaddrinfo,
    MP_QSTR_SOCK_STREAM,
    MP_QSTR_setblocking,
    MP_QSTR_connect,
    MP_QSTR_ssl,
    MP_QSTR_SSLContext,
    MP_QSTR_PROTOCOL_TLS_CLIENT,
    MP_QSTR_wrap_socket,
    MP_QSTR_server_hostname,
    MP_QSTR_do_handshake_on_connect,
    MP_QSTR__io_queue,
    MP_QSTR_queue_write,
    MP_QSTR_start_server,
    MP_QSTR_setsockopt,
    MP_QSTR_SOL_SOCKET,
    MP_QSTR_SO_REUSEADDR,
    MP_QSTR_bind,
    MP_QSTR_listen,
    MP_QSTR_create_task,
    MP_QSTR__serve,
    MP_QSTR_task,
    MP_QSTR_sleep_ms,
    MP_QSTR_CancelledError,
    MP_QSTR_cancel,
    MP_QSTR_stream_awrite,
    MP_QSTR_write,
    MP_QSTR_drain,
    MP_QSTR___init__,
    MP_QSTR_s,
    MP_QSTR_e,
    MP_QSTR_out_buf,
    MP_QSTR_get_extra_info,
    MP_QSTR_close,
    MP_QSTR_read,
    MP_QSTR_queue_read,
    MP_QSTR_readinto,
    MP_QSTR_readexactly,
    MP_QSTR_readline,
    MP_QSTR___aenter__,
    MP_QSTR___aexit__,
    MP_QSTR_state,
    MP_QSTR_accept,
    MP_QSTR_server_side,
    MP_QSTR_sys,
    MP_QSTR_print_exception,
    MP_QSTR_peername,
    MP_QSTR_StreamReader,
    MP_QSTR_StreamWriter,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_host,
    MP_QSTR_port,
    MP_QSTR_OSError,
    MP_QSTR_cb,
    MP_QSTR_backlog,
    MP_QSTR_self,
    MP_QSTR_buf,
    MP_QSTR_off,
    MP_QSTR_sz,
    MP_QSTR_memoryview,
    MP_QSTR_len,
    MP_QSTR_v,
    MP_QSTR_n,
    MP_QSTR_EOFError,
    MP_QSTR_exc_type,
    MP_QSTR_exc,
    MP_QSTR_tb,
};

// constants

// constant table
static const mp_rom_obj_t const_obj_table_data_asyncio_stream[1] = {
    MP_ROM_PTR(&mp_const_empty_bytes_obj),
};

static const mp_frozen_module_t frozen_module_asyncio_stream = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_asyncio_stream,
        .obj_table = (mp_obj_t *)&const_obj_table_data_asyncio_stream,
    },
    .proto_fun = &proto_fun_asyncio_stream__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module uasyncio
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/uasyncio.mpy
// - frozen file name: uasyncio.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file uasyncio.py, scope uasyncio__lt_module_gt_
static const byte fun_data_uasyncio__lt_module_gt_[9] = {
    0x00,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x02, // STORE_NAME '__getattr__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio__lt_module_gt_
// frozen bytecode for file uasyncio.py, scope uasyncio___getattr__
static const byte fun_data_uasyncio___getattr__[16] = {
    0x21,0x04, // prelude
    0x02,0x04, // names: __getattr__, attr
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'asyncio'
    0xc1, // STORE_FAST 1
    0x12,0x05, // LOAD_GLOBAL 'getattr'
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_uasyncio___getattr__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_uasyncio___getattr__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 16,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 2,
        .line_info = fun_data_uasyncio___getattr__ + 4,
        .line_info_top = fun_data_uasyncio___getattr__ + 4,
        .opcodes = fun_data_uasyncio___getattr__ + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_uasyncio___getattr__ fun_data_uasyncio___getattr__[0]
#endif

static const mp_raw_code_t *const children_uasyncio__lt_module_gt_[] = {
    (const mp_raw_code_t *)&proto_fun_uasyncio___getattr__,
};

static const mp_raw_code_truncated_t proto_fun_uasyncio__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_uasyncio__lt_module_gt_,
    .children = (void *)&children_uasyncio__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 9,
    .n_children = 1,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_uasyncio__lt_module_gt_ + 3,
        .line_info_top = fun_data_uasyncio__lt_module_gt_ + 3,
        .opcodes = fun_data_uasyncio__lt_module_gt_ + 3,
    },
    #endif
    #endif
};

static const qstr_short_t const_qstr_table_data_uasyncio[6] = {
    MP_QSTR_uasyncio_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR___getattr__,
    MP_QSTR_asyncio,
    MP_QSTR_attr,
    MP_QSTR_getattr,
};

static const mp_frozen_module_t frozen_module_uasyncio = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_uasyncio,
        .obj_table = NULL,
    },
    .proto_fun = &proto_fun_uasyncio__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module onewire
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/onewire.mpy
// - frozen file name: onewire.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file onewire.py, scope onewire__lt_module_gt_
static const byte fun_data_onewire__lt_module_gt_[35] = {
    0x18,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME '_onewire'
    0x16,0x18, // STORE_NAME '_ow'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x03, // LOAD_CONST_STRING 'OneWireError'
    0x11,0x19, // LOAD_NAME 'Exception'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x03, // STORE_NAME 'OneWireError'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x04, // LOAD_CONST_STRING 'OneWire'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'OneWire'
    0x10,0x05, // LOAD_CONST_STRING '0.1.0'
    0x16,0x1a, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of onewire__lt_module_gt_
// frozen bytecode for file onewire.py, scope onewire_OneWireError
static const byte fun_data_onewire_OneWireError[13] = {
    0x00,0x02, // prelude
    0x03, // names: OneWireError
     // code info
    0x11,0x1b, // LOAD_NAME '__name__'
    0x16,0x1c, // STORE_NAME '__module__'
    0x10,0x03, // LOAD_CONST_STRING 'OneWireError'
    0x16,0x1d, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_onewire_OneWireError = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_onewire_OneWireError,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 13,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 3,
        .line_info = fun_data_onewire_OneWireError + 3,
        .line_info_top = fun_data_onewire_OneWireError + 3,
        .opcodes = fun_data_onewire_OneWireError + 3,
    },
    #endif
    #endif
};
#else
#define proto_fun_onewire_OneWireError fun_data_onewire_OneWireError[0]
#endif

// child of onewire__lt_module_gt_
// frozen bytecode for file onewire.py, scope onewire_OneWire
static const byte fun_data_onewire_OneWire[80] = {
    0x08,0x02, // prelude
    0x04, // names: OneWire
     // code info
    0x11,0x1b, // LOAD_NAME '__name__'
    0x16,0x1c, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'OneWire'
    0x16,0x1d, // STORE_NAME '__qualname__'
    0x22,0x81,0x70, // LOAD_CONST_SMALL_INT 240
    0x16,0x16, // STORE_NAME 'SEARCH_ROM'
    0x22,0x80,0x55, // LOAD_CONST_SMALL_INT 85
    0x16,0x13, // STORE_NAME 'MATCH_ROM'
    0x22,0x81,0x4c, // LOAD_CONST_SMALL_INT 204
    0x16,0x1e, // STORE_NAME 'SKIP_ROM'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x06, // STORE_NAME '__init__'
    0x50, // LOAD_CONST_FALSE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x01, // MAKE_FUNCTION_DEFARGS 1
    0x16,0x0b, // STORE_NAME 'reset'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0c, // STORE_NAME 'readbit'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x0d, // STORE_NAME 'readbyte'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x0e, // STORE_NAME 'readinto'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x0f, // STORE_NAME 'writebit'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x10, // STORE_NAME 'writebyte'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x11, // STORE_NAME 'write'
    0x32,0x08, // MAKE_FUNCTION 8
    0x16,0x12, // STORE_NAME 'select_rom'
    0x32,0x09, // MAKE_FUNCTION 9
    0x16,0x14, // STORE_NAME 'scan'
    0x32,0x0a, // MAKE_FUNCTION 10
    0x16,0x15, // STORE_NAME '_search_rom'
    0x32,0x0b, // MAKE_FUNCTION 11
    0x16,0x17, // STORE_NAME 'crc8'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire___init__
static const byte fun_data_onewire_OneWire___init__[25] = {
    0x2a,0x06, // prelude
    0x06,0x1f,0x07, // names: __init__, self, pin
     // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x07, // STORE_ATTR 'pin'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'pin'
    0x14,0x08, // LOAD_METHOD 'init'
    0xb1, // LOAD_FAST 1
    0x13,0x09, // LOAD_ATTR 'OPEN_DRAIN'
    0xb1, // LOAD_FAST 1
    0x13,0x0a, // LOAD_ATTR 'PULL_UP'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_onewire_OneWire___init__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_onewire_OneWire___init__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 25,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_onewire_OneWire___init__ + 5,
        .line_info_top = fun_data_onewire_OneWire___init__ + 5,
        .opcodes = fun_data_onewire_OneWire___init__ + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_onewire_OneWire___init__ fun_data_onewire_OneWire___init__[0]
#endif

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_reset
static const byte fun_data_onewire_OneWire_reset[27] = {
    0xaa,0x01,0x06, // prelude
    0x0b,0x1f,0x20, // names: reset, self, required
     // code info
    0x12,0x18, // LOAD_GLOBAL '_ow'
    0x14,0x0b, // LOAD_METHOD 'reset'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'pin'
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0xb1, // LOAD_FAST 1
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb2, // LOAD_FAST 2
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x03, // LOAD_GLOBAL 'OneWireError'
    0x65, // RAISE_OBJ
    0xb2, // LOAD_FAST 2
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_onewire_OneWire_reset = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_onewire_OneWire_reset,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 27,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 11,
        .line_info = fun_data_onewire_OneWire_reset + 6,
        .line_info_top = fun_data_onewire_OneWire_reset + 6,
        .opcodes = fun_data_onewire_OneWire_reset + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_onewire_OneWire_reset fun_data_onewire_OneWire_reset[0]
#endif

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_readbit
static const byte fun_data_onewire_OneWire_readbit[14] = {
    0x19,0x04, // prelude
    0x0c,0x1f, // names: readbit, self
     // code info
    0x12,0x18, // LOAD_GLOBAL '_ow'
    0x14,0x0c, // LOAD_METHOD 'readbit'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'pin'
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_onewire_OneWire_readbit = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_onewire_OneWire_readbit,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 14,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_onewire_OneWire_readbit + 4,
        .line_info_top = fun_data_onewire_OneWire_readbit + 4,
        .opcodes = fun_data_onewire_OneWire_readbit + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_onewire_OneWire_readbit fun_data_onewire_OneWire_readbit[0]
#endif

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_readbyte
static const byte fun_data_onewire_OneWire_readbyte[14] = {
    0x19,0x04, // prelude
    0x0d,0x1f, // names: readbyte, self
     // code info
    0x12,0x18, // LOAD_GLOBAL '_ow'
    0x14,0x0d, // LOAD_METHOD 'readbyte'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'pin'
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_onewire_OneWire_readbyte = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_onewire_OneWire_readbyte,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 14,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_onewire_OneWire_readbyte + 4,
        .line_info_top = fun_data_onewire_OneWire_readbyte + 4,
        .opcodes = fun_data_onewire_OneWire_readbyte + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_onewire_OneWire_readbyte fun_data_onewire_OneWire_readbyte[0]
#endif

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_readinto
static const byte fun_data_onewire_OneWire_readinto[38] = {
    0x3a,0x06, // prelude
    0x0e,0x1f,0x21, // names: readinto, self, buf
     // code info
    0x12,0x22, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0x50, // JUMP 16
    0x57, // DUP_TOP
    0xc2, // STORE_FAST 2
    0x12,0x18, // LOAD_GLOBAL '_ow'
    0x14,0x0d, // LOAD_METHOD 'readbyte'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'pin'
    0x36,0x01, // CALL_METHOD 1
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x56, // STORE_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x2b, // POP_JUMP_IF_TRUE -21
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_onewire_OneWire_readinto = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_onewire_OneWire_readinto,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 38,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 14,
        .line_info = fun_data_onewire_OneWire_readinto + 5,
        .line_info_top = fun_data_onewire_OneWire_readinto + 5,
        .opcodes = fun_data_onewire_OneWire_readinto + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_onewire_OneWire_readinto fun_data_onewire_OneWire_readinto[0]
#endif

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_writebit
static const byte fun_data_onewire_OneWire_writebit[16] = {
    0x2a,0x06, // prelude
    0x0f,0x1f,0x23, // names: writebit, self, value
     // code info
    0x12,0x18, // LOAD_GLOBAL '_ow'
    0x14,0x0f, // LOAD_METHOD 'writebit'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'pin'
    0xb1, // LOAD_FAST 1
    0x36,0x02, // CALL_METHOD 2
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_onewire_OneWire_writebit = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_onewire_OneWire_writebit,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 16,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 15,
        .line_info = fun_data_onewire_OneWire_writebit + 5,
        .line_info_top = fun_data_onewire_OneWire_writebit + 5,
        .opcodes = fun_data_onewire_OneWire_writebit + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_onewire_OneWire_writebit fun_data_onewire_OneWire_writebit[0]
#endif

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_writebyte
static const byte fun_data_onewire_OneWire_writebyte[16] = {
    0x2a,0x06, // prelude
    0x10,0x1f,0x23, // names: writebyte, self, value
     // code info
    0x12,0x18, // LOAD_GLOBAL '_ow'
    0x14,0x10, // LOAD_METHOD 'writebyte'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'pin'
    0xb1, // LOAD_FAST 1
    0x36,0x02, // CALL_METHOD 2
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_onewire_OneWire_writebyte = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_onewire_OneWire_writebyte,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 16,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 16,
        .line_info = fun_data_onewire_OneWire_writebyte + 5,
        .line_info_top = fun_data_onewire_OneWire_writebyte + 5,
        .opcodes = fun_data_onewire_OneWire_writebyte + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_onewire_OneWire_writebyte fun_data_onewire_OneWire_writebyte[0]
#endif

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_write
static const byte fun_data_onewire_OneWire_write[25] = {
    0x52,0x06, // prelude
    0x11,0x1f,0x21, // names: write, self, buf
     // code info
    0xb1, // LOAD_FAST 1
    0x5f, // GET_ITER_STACK
    0x4b,0x0e, // FOR_ITER 14
    0xc2, // STORE_FAST 2
    0x12,0x18, // LOAD_GLOBAL '_ow'
    0x14,0x10, // LOAD_METHOD 'writebyte'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'pin'
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x42,0x30, // JUMP -16
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_onewire_OneWire_write = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_onewire_OneWire_write,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 25,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_onewire_OneWire_write + 5,
        .line_info_top = fun_data_onewire_OneWire_write + 5,
        .opcodes = fun_data_onewire_OneWire_write + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_onewire_OneWire_write fun_data_onewire_OneWire_write[0]
#endif

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_select_rom
static const byte fun_data_onewire_OneWire_select_rom[29] = {
    0x22,0x06, // prelude
    0x12,0x1f,0x24, // names: select_rom, self, rom
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0b, // LOAD_METHOD 'reset'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x10, // LOAD_METHOD 'writebyte'
    0xb0, // LOAD_FAST 0
    0x13,0x13, // LOAD_ATTR 'MATCH_ROM'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x11, // LOAD_METHOD 'write'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_onewire_OneWire_select_rom = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_onewire_OneWire_select_rom,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 29,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_onewire_OneWire_select_rom + 5,
        .line_info_top = fun_data_onewire_OneWire_select_rom + 5,
        .opcodes = fun_data_onewire_OneWire_select_rom + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_onewire_OneWire_select_rom fun_data_onewire_OneWire_select_rom[0]
#endif

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_scan
static const byte fun_data_onewire_OneWire_scan[57] = {
    0x49,0x04, // prelude
    0x14,0x1f, // names: scan, self
     // code info
    0x2b,0x00, // BUILD_LIST 0
    0xc1, // STORE_FAST 1
    0x22,0x80,0x41, // LOAD_CONST_SMALL_INT 65
    0xc2, // STORE_FAST 2
    0x50, // LOAD_CONST_FALSE
    0xc3, // STORE_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0x5f, // JUMP 31
    0x57, // DUP_TOP
    0xc4, // STORE_FAST 4
    0xb0, // LOAD_FAST 0
    0x14,0x15, // LOAD_METHOD '_search_rom'
    0xb3, // LOAD_FAST 3
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc3, // STORE_FAST 3
    0xc2, // STORE_FAST 2
    0xb3, // LOAD_FAST 3
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb1, // LOAD_FAST 1
    0xb3, // LOAD_FAST 3
    0x2b,0x01, // BUILD_LIST 1
    0xe5, // BINARY_OP 14 __iadd__
    0xc1, // STORE_FAST 1
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x42,0x49, // JUMP 9
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x57, // DUP_TOP
    0x22,0x81,0x7f, // LOAD_CONST_SMALL_INT 255
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x1a, // POP_JUMP_IF_TRUE -38
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_onewire_OneWire_scan = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_onewire_OneWire_scan,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 57,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_onewire_OneWire_scan + 4,
        .line_info_top = fun_data_onewire_OneWire_scan + 4,
        .opcodes = fun_data_onewire_OneWire_scan + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_onewire_OneWire_scan fun_data_onewire_OneWire_scan[0]
#endif

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire__search_rom
static const byte fun_data_onewire_OneWire__search_rom[154] = {
    0x73,0x08, // prelude
    0x15,0x1f,0x25,0x26, // names: _search_rom, self, l_rom, diff
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0b, // LOAD_METHOD 'reset'
    0x36,0x00, // CALL_METHOD 0
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x63, // RETURN_VALUE
    0xb0, // LOAD_FAST 0
    0x14,0x10, // LOAD_METHOD 'writebyte'
    0xb0, // LOAD_FAST 0
    0x13,0x16, // LOAD_ATTR 'SEARCH_ROM'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x43,0x46, // POP_JUMP_IF_TRUE 6
    0x12,0x27, // LOAD_GLOBAL 'bytearray'
    0x88, // LOAD_CONST_SMALL_INT 8
    0x34,0x01, // CALL_FUNCTION 1
    0xc1, // STORE_FAST 1
    0x12,0x27, // LOAD_GLOBAL 'bytearray'
    0x88, // LOAD_CONST_SMALL_INT 8
    0x34,0x01, // CALL_FUNCTION 1
    0xc3, // STORE_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc4, // STORE_FAST 4
    0x22,0x80,0x40, // LOAD_CONST_SMALL_INT 64
    0xc5, // STORE_FAST 5
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0xdc,0x80, // JUMP 92
    0x57, // DUP_TOP
    0xc6, // STORE_FAST 6
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc7, // STORE_FAST 7
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0xc7,0x80, // JUMP 71
    0x57, // DUP_TOP
    0xc8, // STORE_FAST 8
    0xb0, // LOAD_FAST 0
    0x14,0x0c, // LOAD_METHOD 'readbit'
    0x36,0x00, // CALL_METHOD 0
    0xc9, // STORE_FAST 9
    0xb0, // LOAD_FAST 0
    0x14,0x0c, // LOAD_METHOD 'readbit'
    0x36,0x00, // CALL_METHOD 0
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0xb9, // LOAD_FAST 9
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x63, // RETURN_VALUE
    0x42,0x5a, // JUMP 26
    0xb9, // LOAD_FAST 9
    0x43,0x57, // POP_JUMP_IF_TRUE 23
    0xb2, // LOAD_FAST 2
    0xb5, // LOAD_FAST 5
    0xd8, // BINARY_OP 1 __gt__
    0x43,0x4e, // POP_JUMP_IF_TRUE 14
    0xb1, // LOAD_FAST 1
    0xb6, // LOAD_FAST 6
    0x55, // LOAD_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb8, // LOAD_FAST 8
    0xf0, // BINARY_OP 25 __lshift__
    0xef, // BINARY_OP 24 __and__
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0xb2, // LOAD_FAST 2
    0xb5, // LOAD_FAST 5
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0xc9, // STORE_FAST 9
    0xb5, // LOAD_FAST 5
    0xc4, // STORE_FAST 4
    0xb0, // LOAD_FAST 0
    0x14,0x0f, // LOAD_METHOD 'writebit'
    0xb9, // LOAD_FAST 9
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb9, // LOAD_FAST 9
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb7, // LOAD_FAST 7
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb8, // LOAD_FAST 8
    0xf0, // BINARY_OP 25 __lshift__
    0xe0, // BINARY_OP 9 __ior__
    0xc7, // STORE_FAST 7
    0xb5, // LOAD_FAST 5
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe6, // BINARY_OP 15 __isub__
    0xc5, // STORE_FAST 5
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x57, // DUP_TOP
    0x88, // LOAD_CONST_SMALL_INT 8
    0xd7, // BINARY_OP 0 __lt__
    0x43,0xb3,0x7f, // POP_JUMP_IF_TRUE -77
    0x59, // POP_TOP
    0xb7, // LOAD_FAST 7
    0xb3, // LOAD_FAST 3
    0xb6, // LOAD_FAST 6
    0x56, // STORE_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x57, // DUP_TOP
    0x88, // LOAD_CONST_SMALL_INT 8
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x9e,0x7f, // POP_JUMP_IF_TRUE -98
    0x59, // POP_TOP
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x2a,0x02, // BUILD_TUPLE 2
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_onewire_OneWire__search_rom = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_onewire_OneWire__search_rom,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 154,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 21,
        .line_info = fun_data_onewire_OneWire__search_rom + 6,
        .line_info_top = fun_data_onewire_OneWire__search_rom + 6,
        .opcodes = fun_data_onewire_OneWire__search_rom + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_onewire_OneWire__search_rom fun_data_onewire_OneWire__search_rom[0]
#endif

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_crc8
static const byte fun_data_onewire_OneWire_crc8[13] = {
    0x22,0x06, // prelude
    0x17,0x1f,0x28, // names: crc8, self, data
     // code info
    0x12,0x18, // LOAD_GLOBAL '_ow'
    0x14,0x17, // LOAD_METHOD 'crc8'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_onewire_OneWire_crc8 = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_onewire_OneWire_crc8,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 13,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 23,
        .line_info = fun_data_onewire_OneWire_crc8 + 5,
        .line_info_top = fun_data_onewire_OneWire_crc8 + 5,
        .opcodes = fun_data_onewire_OneWire_crc8 + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_onewire_OneWire_crc8 fun_data_onewire_OneWire_crc8[0]
#endif

static const mp_raw_code_t *const children_onewire_OneWire[] = {
    (const mp_raw_code_t *)&proto_fun_onewire_OneWire___init__,
    (const mp_raw_code_t *)&proto_fun_onewire_OneWire_reset,
    (const mp_raw_code_t *)&proto_fun_onewire_OneWire_readbit,
    (const mp_raw_code_t *)&proto_fun_onewire_OneWire_readbyte,
    (const mp_raw_code_t *)&proto_fun_onewire_OneWire_readinto,
    (const mp_raw_code_t *)&proto_fun_onewire_OneWire_writebit,
    (const mp_raw_code_t *)&proto_fun_onewire_OneWire_writebyte,
    (const mp_raw_code_t *)&proto_fun_onewire_OneWire_write,
    (const mp_raw_code_t *)&proto_fun_onewire_OneWire_select_rom,
    (const mp_raw_code_t *)&proto_fun_onewire_OneWire_scan,
    (const mp_raw_code_t *)&proto_fun_onewire_OneWire__search_rom,
    (const mp_raw_code_t *)&proto_fun_onewire_OneWire_crc8,
};

static const mp_raw_code_truncated_t proto_fun_onewire_OneWire = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_onewire_OneWire,
    .children = (void *)&children_onewire_OneWire,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 80,
    .n_children = 12,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_onewire_OneWire + 3,
        .line_info_top = fun_data_onewire_OneWire + 3,
        .opcodes = fun_data_onewire_OneWire + 3,
    },
    #endif
    #endif
};

static const mp_raw_code_t *const children_onewire__lt_module_gt_[] = {
    (const mp_raw_code_t *)&proto_fun_onewire_OneWireError,
    (const mp_raw_code_t *)&proto_fun_onewire_OneWire,
};

static const mp_raw_code_truncated_t proto_fun_onewire__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_onewire__lt_module_gt_,
    .children = (void *)&children_onewire__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 35,
    .n_children = 2,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_onewire__lt_module_gt_ + 3,
        .line_info_top = fun_data_onewire__lt_module_gt_ + 3,
        .opcodes = fun_data_onewire__lt_module_gt_ + 3,
    },
    #endif
    #endif
};

static const qstr_short_t const_qstr_table_data_onewire[41] = {
    MP_QSTR_onewire_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR__onewire,
    MP_QSTR_OneWireError,
    MP_QSTR_OneWire,
    MP_QSTR_0_dot_1_dot_0,
    MP_QSTR___init__,
    MP_QSTR_pin,
    MP_QSTR_init,
    MP_QSTR_OPEN_DRAIN,
    MP_QSTR_PULL_UP,
    MP_QSTR_reset,
    MP_QSTR_readbit,
    MP_QSTR_readbyte,
    MP_QSTR_readinto,
    MP_QSTR_writebit,
    MP_QSTR_writebyte,
    MP_QSTR_write,
    MP_QSTR_select_rom,
    MP_QSTR_MATCH_ROM,
    MP_QSTR_scan,
    MP_QSTR__search_rom,
    MP_QSTR_SEARCH_ROM,
    MP_QSTR_crc8,
    MP_QSTR__ow,
    MP_QSTR_Exception,
    MP_QSTR___version__,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_SKIP_ROM,
    MP_QSTR_self,
    MP_QSTR_required,
    MP_QSTR_buf,
    MP_QSTR_len,
    MP_QSTR_value,
    MP_QSTR_rom,
    MP_QSTR_l_rom,
    MP_QSTR_diff,
    MP_QSTR_bytearray,
    MP_QSTR_data,
};

// constants
static const mp_rom_obj_tuple_t const_obj_onewire_0 = {{&mp_type_tuple}, 2, {
    MP_ROM_NONE,
    MP_ROM_INT(0),
}};

// constant table
static const mp_rom_obj_t const_obj_table_data_onewire[1] = {
    MP_ROM_PTR(&const_obj_onewire_0),
};

static const mp_frozen_module_t frozen_module_onewire = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_onewire,
        .obj_table = (mp_obj_t *)&const_obj_table_data_onewire,
    },
    .proto_fun = &proto_fun_onewire__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module ds18x20
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/ds18x20.mpy
// - frozen file name: ds18x20.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file ds18x20.py, scope ds18x20__lt_module_gt_
static const byte fun_data_ds18x20__lt_module_gt_[30] = {
    0x10,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING 'const'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME 'micropython'
    0x1c,0x02, // IMPORT_FROM 'const'
    0x16,0x02, // STORE_NAME 'const'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'DS18X20'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'DS18X20'
    0x10,0x05, // LOAD_CONST_STRING '0.1.0'
    0x16,0x17, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of ds18x20__lt_module_gt_
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20
static const byte fun_data_ds18x20_DS18X20[37] = {
    0x00,0x02, // prelude
    0x04, // names: DS18X20
     // code info
    0x11,0x18, // LOAD_NAME '__name__'
    0x16,0x19, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'DS18X20'
    0x16,0x1a, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x06, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x09, // STORE_NAME 'scan'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0a, // STORE_NAME 'convert_temp'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x0e, // STORE_NAME 'read_scratch'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x13, // STORE_NAME 'write_scratch'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x15, // STORE_NAME 'read_temp'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20___init__
static const byte fun_data_ds18x20_DS18X20___init__[19] = {
    0x1a,0x06, // prelude
    0x06,0x1b,0x1c, // names: __init__, self, onewire
     // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x07, // STORE_ATTR 'ow'
    0x12,0x1d, // LOAD_GLOBAL 'bytearray'
    0x89, // LOAD_CONST_SMALL_INT 9
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x18,0x08, // STORE_ATTR 'buf'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_ds18x20_DS18X20___init__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_ds18x20_DS18X20___init__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 19,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_ds18x20_DS18X20___init__ + 5,
        .line_info_top = fun_data_ds18x20_DS18X20___init__ + 5,
        .opcodes = fun_data_ds18x20_DS18X20___init__ + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_ds18x20_DS18X20___init__ fun_data_ds18x20_DS18X20___init__[0]
#endif

// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_scan
static const byte fun_data_ds18x20_DS18X20_scan[16] = {
    0x19,0x04, // prelude
    0x09,0x1b, // names: scan, self
     // code info
    0x32,0x00, // MAKE_FUNCTION 0
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x09, // LOAD_METHOD 'scan'
    0x36,0x00, // CALL_METHOD 0
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
// child of ds18x20_DS18X20_scan
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_scan__lt_listcomp_gt_
static const byte fun_data_ds18x20_DS18X20_scan__lt_listcomp_gt_[25] = {
    0x41,0x04, // prelude
    0x16,0x20, // names: <listcomp>, *
     // code info
    0x2b,0x00, // BUILD_LIST 0
    0xb0, // LOAD_FAST 0
    0x5f, // GET_ITER_STACK
    0x4b,0x0e, // FOR_ITER 14
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x23,0x01, // LOAD_CONST_OBJ 1
    0xdd, // BINARY_OP 6 <in>
    0x44,0x35, // POP_JUMP_IF_FALSE -11
    0xb1, // LOAD_FAST 1
    0x2f,0x14, // STORE_COMP 20
    0x42,0x30, // JUMP -16
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_ds18x20_DS18X20_scan__lt_listcomp_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_ds18x20_DS18X20_scan__lt_listcomp_gt_,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 25,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 22,
        .line_info = fun_data_ds18x20_DS18X20_scan__lt_listcomp_gt_ + 4,
        .line_info_top = fun_data_ds18x20_DS18X20_scan__lt_listcomp_gt_ + 4,
        .opcodes = fun_data_ds18x20_DS18X20_scan__lt_listcomp_gt_ + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_ds18x20_DS18X20_scan__lt_listcomp_gt_ fun_data_ds18x20_DS18X20_scan__lt_listcomp_gt_[0]
#endif

static const mp_raw_code_t *const children_ds18x20_DS18X20_scan[] = {
    (const mp_raw_code_t *)&proto_fun_ds18x20_DS18X20_scan__lt_listcomp_gt_,
};

static const mp_raw_code_truncated_t proto_fun_ds18x20_DS18X20_scan = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_ds18x20_DS18X20_scan,
    .children = (void *)&children_ds18x20_DS18X20_scan,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 16,
    .n_children = 1,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 9,
        .line_info = fun_data_ds18x20_DS18X20_scan + 4,
        .line_info_top = fun_data_ds18x20_DS18X20_scan + 4,
        .opcodes = fun_data_ds18x20_DS18X20_scan + 4,
    },
    #endif
    #endif
};

// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_convert_temp
static const byte fun_data_ds18x20_DS18X20_convert_temp[39] = {
    0x19,0x04, // prelude
    0x0a,0x1b, // names: convert_temp, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x0b, // LOAD_METHOD 'reset'
    0x52, // LOAD_CONST_TRUE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x0c, // LOAD_METHOD 'writebyte'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x13,0x0d, // LOAD_ATTR 'SKIP_ROM'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x0c, // LOAD_METHOD 'writebyte'
    0x22,0x80,0x44, // LOAD_CONST_SMALL_INT 68
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_ds18x20_DS18X20_convert_temp = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_ds18x20_DS18X20_convert_temp,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 39,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_ds18x20_DS18X20_convert_temp + 4,
        .line_info_top = fun_data_ds18x20_DS18X20_convert_temp + 4,
        .opcodes = fun_data_ds18x20_DS18X20_convert_temp + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_ds18x20_DS18X20_convert_temp fun_data_ds18x20_DS18X20_convert_temp[0]
#endif

// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_read_scratch
static const byte fun_data_ds18x20_DS18X20_read_scratch[68] = {
    0x22,0x06, // prelude
    0x0e,0x1b,0x1e, // names: read_scratch, self, rom
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x0b, // LOAD_METHOD 'reset'
    0x52, // LOAD_CONST_TRUE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x0f, // LOAD_METHOD 'select_rom'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x0c, // LOAD_METHOD 'writebyte'
    0x22,0x81,0x3e, // LOAD_CONST_SMALL_INT 190
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x10, // LOAD_METHOD 'readinto'
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'buf'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x11, // LOAD_METHOD 'crc8'
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'buf'
    0x36,0x01, // CALL_METHOD 1
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x1f, // LOAD_GLOBAL 'Exception'
    0x10,0x12, // LOAD_CONST_STRING 'CRC error'
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'buf'
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_ds18x20_DS18X20_read_scratch = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_ds18x20_DS18X20_read_scratch,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 68,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 14,
        .line_info = fun_data_ds18x20_DS18X20_read_scratch + 5,
        .line_info_top = fun_data_ds18x20_DS18X20_read_scratch + 5,
        .opcodes = fun_data_ds18x20_DS18X20_read_scratch + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_ds18x20_DS18X20_read_scratch fun_data_ds18x20_DS18X20_read_scratch[0]
#endif

// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_write_scratch
static const byte fun_data_ds18x20_DS18X20_write_scratch[46] = {
    0x2b,0x08, // prelude
    0x13,0x1b,0x1e,0x08, // names: write_scratch, self, rom, buf
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x0b, // LOAD_METHOD 'reset'
    0x52, // LOAD_CONST_TRUE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x0f, // LOAD_METHOD 'select_rom'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x0c, // LOAD_METHOD 'writebyte'
    0x22,0x80,0x4e, // LOAD_CONST_SMALL_INT 78
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'ow'
    0x14,0x14, // LOAD_METHOD 'write'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_ds18x20_DS18X20_write_scratch = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_ds18x20_DS18X20_write_scratch,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 46,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_ds18x20_DS18X20_write_scratch + 6,
        .line_info_top = fun_data_ds18x20_DS18X20_write_scratch + 6,
        .opcodes = fun_data_ds18x20_DS18X20_write_scratch + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_ds18x20_DS18X20_write_scratch fun_data_ds18x20_DS18X20_write_scratch[0]
#endif

// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_read_temp
static const byte fun_data_ds18x20_DS18X20_read_temp[103] = {
    0x3a,0x06, // prelude
    0x15,0x1b,0x1e, // names: read_temp, self, rom
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0e, // LOAD_METHOD 'read_scratch'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x90, // LOAD_CONST_SMALL_INT 16
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x72, // POP_JUMP_IF_FALSE 50
    0xb2, // LOAD_FAST 2
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf1, // BINARY_OP 26 __rshift__
    0x22,0x81,0x00, // LOAD_CONST_SMALL_INT 128
    0xed, // BINARY_OP 22 __or__
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0xd2, // UNARY_OP 2 __invert__
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf2, // BINARY_OP 27 __add__
    0x22,0x81,0x7f, // LOAD_CONST_SMALL_INT 255
    0xef, // BINARY_OP 24 __and__
    0xd1, // UNARY_OP 1 __neg__
    0xc3, // STORE_FAST 3
    0x42,0x46, // JUMP 6
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf1, // BINARY_OP 26 __rshift__
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xf3, // BINARY_OP 28 __sub__
    0xb2, // LOAD_FAST 2
    0x87, // LOAD_CONST_SMALL_INT 7
    0x55, // LOAD_SUBSCR
    0xb2, // LOAD_FAST 2
    0x86, // LOAD_CONST_SMALL_INT 6
    0x55, // LOAD_SUBSCR
    0xf3, // BINARY_OP 28 __sub__
    0xb2, // LOAD_FAST 2
    0x87, // LOAD_CONST_SMALL_INT 7
    0x55, // LOAD_SUBSCR
    0xf7, // BINARY_OP 32 __truediv__
    0xf2, // BINARY_OP 27 __add__
    0x63, // RETURN_VALUE
    0xb2, // LOAD_FAST 2
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x88, // LOAD_CONST_SMALL_INT 8
    0xf0, // BINARY_OP 25 __lshift__
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xed, // BINARY_OP 22 __or__
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x22,0x82,0x80,0x00, // LOAD_CONST_SMALL_INT 32768
    0xef, // BINARY_OP 24 __and__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0xb3, // LOAD_FAST 3
    0x22,0x83,0xff,0x7f, // LOAD_CONST_SMALL_INT 65535
    0xee, // BINARY_OP 23 __xor__
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf2, // BINARY_OP 27 __add__
    0xd1, // UNARY_OP 1 __neg__
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x90, // LOAD_CONST_SMALL_INT 16
    0xf7, // BINARY_OP 32 __truediv__
    0x63, // RETURN_VALUE
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_ds18x20_DS18X20_read_temp = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_ds18x20_DS18X20_read_temp,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 103,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 21,
        .line_info = fun_data_ds18x20_DS18X20_read_temp + 5,
        .line_info_top = fun_data_ds18x20_DS18X20_read_temp + 5,
        .opcodes = fun_data_ds18x20_DS18X20_read_temp + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_ds18x20_DS18X20_read_temp fun_data_ds18x20_DS18X20_read_temp[0]
#endif

static const mp_raw_code_t *const children_ds18x20_DS18X20[] = {
    (const mp_raw_code_t *)&proto_fun_ds18x20_DS18X20___init__,
    (const mp_raw_code_t *)&proto_fun_ds18x20_DS18X20_scan,
    (const mp_raw_code_t *)&proto_fun_ds18x20_DS18X20_convert_temp,
    (const mp_raw_code_t *)&proto_fun_ds18x20_DS18X20_read_scratch,
    (const mp_raw_code_t *)&proto_fun_ds18x20_DS18X20_write_scratch,
    (const mp_raw_code_t *)&proto_fun_ds18x20_DS18X20_read_temp,
};

static const mp_raw_code_truncated_t proto_fun_ds18x20_DS18X20 = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_ds18x20_DS18X20,
    .children = (void *)&children_ds18x20_DS18X20,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 37,
    .n_children = 6,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_ds18x20_DS18X20 + 3,
        .line_info_top = fun_data_ds18x20_DS18X20 + 3,
        .opcodes = fun_data_ds18x20_DS18X20 + 3,
    },
    #endif
    #endif
};

static const mp_raw_code_t *const children_ds18x20__lt_module_gt_[] = {
    (const mp_raw_code_t *)&proto_fun_ds18x20_DS18X20,
};

static const mp_raw_code_truncated_t proto_fun_ds18x20__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_ds18x20__lt_module_gt_,
    .children = (void *)&children_ds18x20__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 30,
    .n_children = 1,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_ds18x20__lt_module_gt_ + 3,
        .line_info_top = fun_data_ds18x20__lt_module_gt_ + 3,
        .opcodes = fun_data_ds18x20__lt_module_gt_ + 3,
    },
    #endif
    #endif
};

static const qstr_short_t const_qstr_table_data_ds18x20[33] = {
    MP_QSTR_ds18x20_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_const,
    MP_QSTR_micropython,
    MP_QSTR_DS18X20,
    MP_QSTR_0_dot_1_dot_0,
    MP_QSTR___init__,
    MP_QSTR_ow,
    MP_QSTR_buf,
    MP_QSTR_scan,
    MP_QSTR_convert_temp,
    MP_QSTR_reset,
    MP_QSTR_writebyte,
    MP_QSTR_SKIP_ROM,
    MP_QSTR_read_scratch,
    MP_QSTR_select_rom,
    MP_QSTR_readinto,
    MP_QSTR_crc8,
    MP_QSTR_CRC_space_error,
    MP_QSTR_write_scratch,
    MP_QSTR_write,
    MP_QSTR_read_temp,
    MP_QSTR__lt_listcomp_gt_,
    MP_QSTR___version__,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_onewire,
    MP_QSTR_bytearray,
    MP_QSTR_rom,
    MP_QSTR_Exception,
    MP_QSTR__star_,
};

// constants
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
static const mp_obj_float_t const_obj_ds18x20_0 = {{&mp_type_float}, (mp_float_t)0.25};
#define const_obj_ds18x20_0_macro MP_ROM_PTR(&const_obj_ds18x20_0)
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
#define const_obj_ds18x20_0_macro ((mp_rom_obj_t)(0xbf000002))
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
#define const_obj_ds18x20_0_macro ((mp_rom_obj_t)(0xbfd4000000000000))
#endif
static const mp_rom_obj_tuple_t const_obj_ds18x20_1 = {{&mp_type_tuple}, 3, {
    MP_ROM_INT(16),
    MP_ROM_INT(34),
    MP_ROM_INT(40),
}};

// constant table
static const mp_rom_obj_t const_obj_table_data_ds18x20[2] = {
    const_obj_ds18x20_0_macro,
    MP_ROM_PTR(&const_obj_ds18x20_1),
};

static const mp_frozen_module_t frozen_module_ds18x20 = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_ds18x20,
        .obj_table = (mp_obj_t *)&const_obj_table_data_ds18x20,
    },
    .proto_fun = &proto_fun_ds18x20__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module dht
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/dht.mpy
// - frozen file name: dht.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file dht.py, scope dht__lt_module_gt_
static const byte fun_data_dht__lt_module_gt_[139] = {
    0x18,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'sys'
    0x16,0x02, // STORE_NAME 'sys'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'machine'
    0x16,0x03, // STORE_NAME 'machine'
    0x11,0x14, // LOAD_NAME 'hasattr'
    0x11,0x03, // LOAD_NAME 'machine'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x04, // LOAD_CONST_STRING 'dht_readinto'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME 'machine'
    0x1c,0x04, // IMPORT_FROM 'dht_readinto'
    0x16,0x04, // STORE_NAME 'dht_readinto'
    0x59, // POP_TOP
    0x42,0x7d, // JUMP 61
    0x11,0x02, // LOAD_NAME 'sys'
    0x13,0x05, // LOAD_ATTR 'platform'
    0x14,0x06, // LOAD_METHOD 'startswith'
    0x10,0x07, // LOAD_CONST_STRING 'esp'
    0x36,0x01, // CALL_METHOD 1
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x04, // LOAD_CONST_STRING 'dht_readinto'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x07, // IMPORT_NAME 'esp'
    0x1c,0x04, // IMPORT_FROM 'dht_readinto'
    0x16,0x04, // STORE_NAME 'dht_readinto'
    0x59, // POP_TOP
    0x42,0x63, // JUMP 35
    0x11,0x02, // LOAD_NAME 'sys'
    0x13,0x05, // LOAD_ATTR 'platform'
    0x10,0x08, // LOAD_CONST_STRING 'pyboard'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x04, // LOAD_CONST_STRING 'dht_readinto'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x09, // IMPORT_NAME 'pyb'
    0x1c,0x04, // IMPORT_FROM 'dht_readinto'
    0x16,0x04, // STORE_NAME 'dht_readinto'
    0x59, // POP_TOP
    0x42,0x4c, // JUMP 12
    0x11,0x15, // LOAD_NAME '__import__'
    0x11,0x02, // LOAD_NAME 'sys'
    0x13,0x05, // LOAD_ATTR 'platform'
    0x34,0x01, // CALL_FUNCTION 1
    0x13,0x04, // LOAD_ATTR 'dht_readinto'
    0x16,0x04, // STORE_NAME 'dht_readinto'
    0x19,0x03, // DELETE_NAME 'machine'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x0a, // LOAD_CONST_STRING 'DHTBase'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x0a, // STORE_NAME 'DHTBase'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x0b, // LOAD_CONST_STRING 'DHT11'
    0x11,0x0a, // LOAD_NAME 'DHTBase'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x0b, // STORE_NAME 'DHT11'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x02, // MAKE_FUNCTION 2
    0x10,0x0c, // LOAD_CONST_STRING 'DHT22'
    0x11,0x0a, // LOAD_NAME 'DHTBase'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x0c, // STORE_NAME 'DHT22'
    0x10,0x0d, // LOAD_CONST_STRING '0.1.0'
    0x16,0x16, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of dht__lt_module_gt_
// frozen bytecode for file dht.py, scope dht_DHTBase
static const byte fun_data_dht_DHTBase[21] = {
    0x00,0x02, // prelude
    0x0a, // names: DHTBase
     // code info
    0x11,0x17, // LOAD_NAME '__name__'
    0x16,0x18, // STORE_NAME '__module__'
    0x10,0x0a, // LOAD_CONST_STRING 'DHTBase'
    0x16,0x19, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x0e, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x11, // STORE_NAME 'measure'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of dht_DHTBase
// frozen bytecode for file dht.py, scope dht_DHTBase___init__
static const byte fun_data_dht_DHTBase___init__[19] = {
    0x1a,0x06, // prelude
    0x0e,0x1a,0x0f, // names: __init__, self, pin
     // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x0f, // STORE_ATTR 'pin'
    0x12,0x1b, // LOAD_GLOBAL 'bytearray'
    0x85, // LOAD_CONST_SMALL_INT 5
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x18,0x10, // STORE_ATTR 'buf'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_dht_DHTBase___init__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_dht_DHTBase___init__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 19,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 14,
        .line_info = fun_data_dht_DHTBase___init__ + 5,
        .line_info_top = fun_data_dht_DHTBase___init__ + 5,
        .opcodes = fun_data_dht_DHTBase___init__ + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_dht_DHTBase___init__ fun_data_dht_DHTBase___init__[0]
#endif

// child of dht_DHTBase
// frozen bytecode for file dht.py, scope dht_DHTBase_measure
static const byte fun_data_dht_DHTBase_measure[51] = {
    0x21,0x04, // prelude
    0x11,0x1a, // names: measure, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'buf'
    0xc1, // STORE_FAST 1
    0x12,0x04, // LOAD_GLOBAL 'dht_readinto'
    0xb0, // LOAD_FAST 0
    0x13,0x0f, // LOAD_ATTR 'pin'
    0xb1, // LOAD_FAST 1
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0xb1, // LOAD_FAST 1
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0xb1, // LOAD_FAST 1
    0x83, // LOAD_CONST_SMALL_INT 3
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0x22,0x81,0x7f, // LOAD_CONST_SMALL_INT 255
    0xef, // BINARY_OP 24 __and__
    0xb1, // LOAD_FAST 1
    0x84, // LOAD_CONST_SMALL_INT 4
    0x55, // LOAD_SUBSCR
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x1c, // LOAD_GLOBAL 'Exception'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_dht_DHTBase_measure = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_dht_DHTBase_measure,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 51,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_dht_DHTBase_measure + 4,
        .line_info_top = fun_data_dht_DHTBase_measure + 4,
        .opcodes = fun_data_dht_DHTBase_measure + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_dht_DHTBase_measure fun_data_dht_DHTBase_measure[0]
#endif

static const mp_raw_code_t *const children_dht_DHTBase[] = {
    (const mp_raw_code_t *)&proto_fun_dht_DHTBase___init__,
    (const mp_raw_code_t *)&proto_fun_dht_DHTBase_measure,
};

static const mp_raw_code_truncated_t proto_fun_dht_DHTBase = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_dht_DHTBase,
    .children = (void *)&children_dht_DHTBase,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 21,
    .n_children = 2,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_dht_DHTBase + 3,
        .line_info_top = fun_data_dht_DHTBase + 3,
        .opcodes = fun_data_dht_DHTBase + 3,
    },
    #endif
    #endif
};

// child of dht__lt_module_gt_
// frozen bytecode for file dht.py, scope dht_DHT11
static const byte fun_data_dht_DHT11[21] = {
    0x00,0x02, // prelude
    0x0b, // names: DHT11
     // code info
    0x11,0x17, // LOAD_NAME '__name__'
    0x16,0x18, // STORE_NAME '__module__'
    0x10,0x0b, // LOAD_CONST_STRING 'DHT11'
    0x16,0x19, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x12, // STORE_NAME 'humidity'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x13, // STORE_NAME 'temperature'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of dht_DHT11
// frozen bytecode for file dht.py, scope dht_DHT11_humidity
static const byte fun_data_dht_DHT11_humidity[10] = {
    0x11,0x04, // prelude
    0x12,0x1a, // names: humidity, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'buf'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_dht_DHT11_humidity = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_dht_DHT11_humidity,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 10,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_dht_DHT11_humidity + 4,
        .line_info_top = fun_data_dht_DHT11_humidity + 4,
        .opcodes = fun_data_dht_DHT11_humidity + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_dht_DHT11_humidity fun_data_dht_DHT11_humidity[0]
#endif

// child of dht_DHT11
// frozen bytecode for file dht.py, scope dht_DHT11_temperature
static const byte fun_data_dht_DHT11_temperature[10] = {
    0x11,0x04, // prelude
    0x13,0x1a, // names: temperature, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'buf'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_dht_DHT11_temperature = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_dht_DHT11_temperature,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 10,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_dht_DHT11_temperature + 4,
        .line_info_top = fun_data_dht_DHT11_temperature + 4,
        .opcodes = fun_data_dht_DHT11_temperature + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_dht_DHT11_temperature fun_data_dht_DHT11_temperature[0]
#endif

static const mp_raw_code_t *const children_dht_DHT11[] = {
    (const mp_raw_code_t *)&proto_fun_dht_DHT11_humidity,
    (const mp_raw_code_t *)&proto_fun_dht_DHT11_temperature,
};

static const mp_raw_code_truncated_t proto_fun_dht_DHT11 = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_dht_DHT11,
    .children = (void *)&children_dht_DHT11,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 21,
    .n_children = 2,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 11,
        .line_info = fun_data_dht_DHT11 + 3,
        .line_info_top = fun_data_dht_DHT11 + 3,
        .opcodes = fun_data_dht_DHT11 + 3,
    },
    #endif
    #endif
};

// child of dht__lt_module_gt_
// frozen bytecode for file dht.py, scope dht_DHT22
static const byte fun_data_dht_DHT22[21] = {
    0x00,0x02, // prelude
    0x0c, // names: DHT22
     // code info
    0x11,0x17, // LOAD_NAME '__name__'
    0x16,0x18, // STORE_NAME '__module__'
    0x10,0x0c, // LOAD_CONST_STRING 'DHT22'
    0x16,0x19, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x12, // STORE_NAME 'humidity'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x13, // STORE_NAME 'temperature'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of dht_DHT22
// frozen bytecode for file dht.py, scope dht_DHT22_humidity
static const byte fun_data_dht_DHT22_humidity[21] = {
    0x19,0x04, // prelude
    0x12,0x1a, // names: humidity, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'buf'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x88, // LOAD_CONST_SMALL_INT 8
    0xf0, // BINARY_OP 25 __lshift__
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'buf'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xed, // BINARY_OP 22 __or__
    0x23,0x02, // LOAD_CONST_OBJ 2
    0xf4, // BINARY_OP 29 __mul__
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_dht_DHT22_humidity = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_dht_DHT22_humidity,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 21,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_dht_DHT22_humidity + 4,
        .line_info_top = fun_data_dht_DHT22_humidity + 4,
        .opcodes = fun_data_dht_DHT22_humidity + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_dht_DHT22_humidity fun_data_dht_DHT22_humidity[0]
#endif

// child of dht_DHT22
// frozen bytecode for file dht.py, scope dht_DHT22_temperature
static const byte fun_data_dht_DHT22_temperature[41] = {
    0x21,0x04, // prelude
    0x13,0x1a, // names: temperature, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'buf'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x22,0x80,0x7f, // LOAD_CONST_SMALL_INT 127
    0xef, // BINARY_OP 24 __and__
    0x88, // LOAD_CONST_SMALL_INT 8
    0xf0, // BINARY_OP 25 __lshift__
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'buf'
    0x83, // LOAD_CONST_SMALL_INT 3
    0x55, // LOAD_SUBSCR
    0xed, // BINARY_OP 22 __or__
    0x23,0x02, // LOAD_CONST_OBJ 2
    0xf4, // BINARY_OP 29 __mul__
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'buf'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x22,0x81,0x00, // LOAD_CONST_SMALL_INT 128
    0xef, // BINARY_OP 24 __and__
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0xb1, // LOAD_FAST 1
    0xd1, // UNARY_OP 1 __neg__
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_dht_DHT22_temperature = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_dht_DHT22_temperature,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 41,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_dht_DHT22_temperature + 4,
        .line_info_top = fun_data_dht_DHT22_temperature + 4,
        .opcodes = fun_data_dht_DHT22_temperature + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_dht_DHT22_temperature fun_data_dht_DHT22_temperature[0]
#endif

static const mp_raw_code_t *const children_dht_DHT22[] = {
    (const mp_raw_code_t *)&proto_fun_dht_DHT22_humidity,
    (const mp_raw_code_t *)&proto_fun_dht_DHT22_temperature,
};

static const mp_raw_code_truncated_t proto_fun_dht_DHT22 = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_dht_DHT22,
    .children = (void *)&children_dht_DHT22,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 21,
    .n_children = 2,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_dht_DHT22 + 3,
        .line_info_top = fun_data_dht_DHT22 + 3,
        .opcodes = fun_data_dht_DHT22 + 3,
    },
    #endif
    #endif
};

static const mp_raw_code_t *const children_dht__lt_module_gt_[] = {
    (const mp_raw_code_t *)&proto_fun_dht_DHTBase,
    (const mp_raw_code_t *)&proto_fun_dht_DHT11,
    (const mp_raw_code_t *)&proto_fun_dht_DHT22,
};

static const mp_raw_code_truncated_t proto_fun_dht__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_dht__lt_module_gt_,
    .children = (void *)&children_dht__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 139,
    .n_children = 3,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_dht__lt_module_gt_ + 3,
        .line_info_top = fun_data_dht__lt_module_gt_ + 3,
        .opcodes = fun_data_dht__lt_module_gt_ + 3,
    },
    #endif
    #endif
};

static const qstr_short_t const_qstr_table_data_dht[29] = {
    MP_QSTR_dht_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_sys,
    MP_QSTR_machine,
    MP_QSTR_dht_readinto,
    MP_QSTR_platform,
    MP_QSTR_startswith,
    MP_QSTR_esp,
    MP_QSTR_pyboard,
    MP_QSTR_pyb,
    MP_QSTR_DHTBase,
    MP_QSTR_DHT11,
    MP_QSTR_DHT22,
    MP_QSTR_0_dot_1_dot_0,
    MP_QSTR___init__,
    MP_QSTR_pin,
    MP_QSTR_buf,
    MP_QSTR_measure,
    MP_QSTR_humidity,
    MP_QSTR_temperature,
    MP_QSTR_hasattr,
    MP_QSTR___import__,
    MP_QSTR___version__,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_bytearray,
    MP_QSTR_Exception,
};

// constants
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
static const mp_obj_float_t const_obj_dht_2 = {{&mp_type_float}, (mp_float_t)0.1};
#define const_obj_dht_2_macro MP_ROM_PTR(&const_obj_dht_2)
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
#define const_obj_dht_2_macro ((mp_rom_obj_t)(0xbe4cccce))
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
#define const_obj_dht_2_macro ((mp_rom_obj_t)(0xbfbd99999999999a))
#endif

// constant table
static const mp_rom_obj_t const_obj_table_data_dht[3] = {
    MP_ROM_QSTR(MP_QSTR_dht_readinto),
    MP_ROM_QSTR(MP_QSTR_checksum_space_error),
    const_obj_dht_2_macro,
};

static const mp_frozen_module_t frozen_module_dht = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_dht,
        .obj_table = (mp_obj_t *)&const_obj_table_data_dht,
    },
    .proto_fun = &proto_fun_dht__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module neopixel
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/neopixel.mpy
// - frozen file name: neopixel.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file neopixel.py, scope neopixel__lt_module_gt_
static const byte fun_data_neopixel__lt_module_gt_[30] = {
    0x10,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING 'bitstream'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME 'machine'
    0x1c,0x02, // IMPORT_FROM 'bitstream'
    0x16,0x02, // STORE_NAME 'bitstream'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'NeoPixel'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'NeoPixel'
    0x10,0x05, // LOAD_CONST_STRING '0.1.0'
    0x16,0x15, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of neopixel__lt_module_gt_
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel
static const byte fun_data_neopixel_NeoPixel[46] = {
    0x08,0x02, // prelude
    0x04, // names: NeoPixel
     // code info
    0x11,0x16, // LOAD_NAME '__name__'
    0x16,0x17, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'NeoPixel'
    0x16,0x18, // STORE_NAME '__qualname__'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x16,0x10, // STORE_NAME 'ORDER'
    0x83, // LOAD_CONST_SMALL_INT 3
    0x81, // LOAD_CONST_SMALL_INT 1
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x00, // MAKE_FUNCTION_DEFARGS 0
    0x16,0x06, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x0e, // STORE_NAME '__len__'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0f, // STORE_NAME '__setitem__'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x11, // STORE_NAME '__getitem__'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x12, // STORE_NAME 'fill'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x13, // STORE_NAME 'write'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of neopixel_NeoPixel
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel___init__
static const byte fun_data_neopixel_NeoPixel___init__[69] = {
    0xb9,0x84,0x01,0x0c, // prelude
    0x06,0x19,0x07,0x08,0x09,0x0d, // names: __init__, self, pin, n, bpp, timing
     // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x07, // STORE_ATTR 'pin'
    0xb2, // LOAD_FAST 2
    0xb0, // LOAD_FAST 0
    0x18,0x08, // STORE_ATTR 'n'
    0xb3, // LOAD_FAST 3
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'bpp'
    0x12,0x1a, // LOAD_GLOBAL 'bytearray'
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xf4, // BINARY_OP 29 __mul__
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x18,0x0a, // STORE_ATTR 'buf'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'pin'
    0x14,0x0b, // LOAD_METHOD 'init'
    0xb1, // LOAD_FAST 1
    0x13,0x0c, // LOAD_ATTR 'OUT'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x1b, // LOAD_GLOBAL 'isinstance'
    0xb4, // LOAD_FAST 4
    0x12,0x1c, // LOAD_GLOBAL 'int'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0xb4, // LOAD_FAST 4
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x42,0x42, // JUMP 2
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x42,0x41, // JUMP 1
    0xb4, // LOAD_FAST 4
    0xb0, // LOAD_FAST 0
    0x18,0x0d, // STORE_ATTR 'timing'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_neopixel_NeoPixel___init__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_neopixel_NeoPixel___init__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 69,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_neopixel_NeoPixel___init__ + 10,
        .line_info_top = fun_data_neopixel_NeoPixel___init__ + 10,
        .opcodes = fun_data_neopixel_NeoPixel___init__ + 10,
    },
    #endif
    #endif
};
#else
#define proto_fun_neopixel_NeoPixel___init__ fun_data_neopixel_NeoPixel___init__[0]
#endif

// child of neopixel_NeoPixel
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel___len__
static const byte fun_data_neopixel_NeoPixel___len__[8] = {
    0x09,0x04, // prelude
    0x0e,0x19, // names: __len__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'n'
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_neopixel_NeoPixel___len__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_neopixel_NeoPixel___len__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 8,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 14,
        .line_info = fun_data_neopixel_NeoPixel___len__ + 4,
        .line_info_top = fun_data_neopixel_NeoPixel___len__ + 4,
        .opcodes = fun_data_neopixel_NeoPixel___len__ + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_neopixel_NeoPixel___len__ fun_data_neopixel_NeoPixel___len__[0]
#endif

// child of neopixel_NeoPixel
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel___setitem__
static const byte fun_data_neopixel_NeoPixel___setitem__[45] = {
    0x53,0x08, // prelude
    0x0f,0x19,0x1d,0x1e, // names: __setitem__, self, i, v
     // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'bpp'
    0xf4, // BINARY_OP 29 __mul__
    0xc3, // STORE_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'bpp'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0x52, // JUMP 18
    0x57, // DUP_TOP
    0xc1, // STORE_FAST 1
    0xb2, // LOAD_FAST 2
    0xb1, // LOAD_FAST 1
    0x55, // LOAD_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x0a, // LOAD_ATTR 'buf'
    0xb3, // LOAD_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'ORDER'
    0xb1, // LOAD_FAST 1
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0x56, // STORE_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x29, // POP_JUMP_IF_TRUE -23
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_neopixel_NeoPixel___setitem__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_neopixel_NeoPixel___setitem__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 45,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 15,
        .line_info = fun_data_neopixel_NeoPixel___setitem__ + 6,
        .line_info_top = fun_data_neopixel_NeoPixel___setitem__ + 6,
        .opcodes = fun_data_neopixel_NeoPixel___setitem__ + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_neopixel_NeoPixel___setitem__ fun_data_neopixel_NeoPixel___setitem__[0]
#endif

// child of neopixel_NeoPixel
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel___getitem__
static const byte fun_data_neopixel_NeoPixel___getitem__[37] = {
    0x32,0x86,0x01, // prelude
    0x11,0x19,0x1d, // names: __getitem__, self, i
    0x00,0x02, // code info
    0xb1, // LOAD_FAST 1
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x09, // LOAD_ATTR 'bpp'
    0xf4, // BINARY_OP 29 __mul__
    0x27,0x02, // STORE_DEREF 2
    0x12,0x1f, // LOAD_GLOBAL 'tuple'
    0xb0, // LOAD_FAST 0
    0xb2, // LOAD_FAST 2
    0x20,0x00,0x02, // MAKE_CLOSURE 0
    0x12,0x20, // LOAD_GLOBAL 'range'
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x09, // LOAD_ATTR 'bpp'
    0x34,0x01, // CALL_FUNCTION 1
    0x5e, // GET_ITER
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
// child of neopixel_NeoPixel___getitem__
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel___getitem____lt_genexpr_gt_
static const byte fun_data_neopixel_NeoPixel___getitem____lt_genexpr_gt_[34] = {
    0xdb,0x40,0x08, // prelude
    0x14,0x22,0x22,0x22, // names: <genexpr>, *, *, *
     // code info
    0x53, // LOAD_NULL
    0xb2, // LOAD_FAST 2
    0x53, // LOAD_NULL
    0x53, // LOAD_NULL
    0x4b,0x13, // FOR_ITER 19
    0xc3, // STORE_FAST 3
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x0a, // LOAD_ATTR 'buf'
    0x25,0x01, // LOAD_DEREF 1
    0x25,0x00, // LOAD_DEREF 0
    0x13,0x10, // LOAD_ATTR 'ORDER'
    0xb3, // LOAD_FAST 3
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0x55, // LOAD_SUBSCR
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x42,0x2b, // JUMP -21
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_neopixel_NeoPixel___getitem____lt_genexpr_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_neopixel_NeoPixel___getitem____lt_genexpr_gt_,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 34,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 12,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_neopixel_NeoPixel___getitem____lt_genexpr_gt_ + 7,
        .line_info_top = fun_data_neopixel_NeoPixel___getitem____lt_genexpr_gt_ + 7,
        .opcodes = fun_data_neopixel_NeoPixel___getitem____lt_genexpr_gt_ + 7,
    },
    #endif
    #endif
};
#else
#define proto_fun_neopixel_NeoPixel___getitem____lt_genexpr_gt_ fun_data_neopixel_NeoPixel___getitem____lt_genexpr_gt_[0]
#endif

static const mp_raw_code_t *const children_neopixel_NeoPixel___getitem__[] = {
    (const mp_raw_code_t *)&proto_fun_neopixel_NeoPixel___getitem____lt_genexpr_gt_,
};

static const mp_raw_code_truncated_t proto_fun_neopixel_NeoPixel___getitem__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_neopixel_NeoPixel___getitem__,
    .children = (void *)&children_neopixel_NeoPixel___getitem__,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 37,
    .n_children = 1,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_neopixel_NeoPixel___getitem__ + 6,
        .line_info_top = fun_data_neopixel_NeoPixel___getitem__ + 6,
        .opcodes = fun_data_neopixel_NeoPixel___getitem__ + 8,
    },
    #endif
    #endif
};

// child of neopixel_NeoPixel
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel_fill
static const byte fun_data_neopixel_NeoPixel_fill[63] = {
    0x62,0x06, // prelude
    0x12,0x19,0x1e, // names: fill, self, v
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x0a, // LOAD_ATTR 'buf'
    0xc2, // STORE_FAST 2
    0x12,0x21, // LOAD_GLOBAL 'len'
    0xb0, // LOAD_FAST 0
    0x13,0x0a, // LOAD_ATTR 'buf'
    0x34,0x01, // CALL_FUNCTION 1
    0xc3, // STORE_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'bpp'
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0x5d, // JUMP 29
    0x57, // DUP_TOP
    0xc5, // STORE_FAST 5
    0xb1, // LOAD_FAST 1
    0xb5, // LOAD_FAST 5
    0x55, // LOAD_SUBSCR
    0xc6, // STORE_FAST 6
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'ORDER'
    0xb5, // LOAD_FAST 5
    0x55, // LOAD_SUBSCR
    0xc7, // STORE_FAST 7
    0x42,0x48, // JUMP 8
    0xb6, // LOAD_FAST 6
    0xb2, // LOAD_FAST 2
    0xb7, // LOAD_FAST 7
    0x56, // STORE_SUBSCR
    0xb7, // LOAD_FAST 7
    0xb4, // LOAD_FAST 4
    0xe5, // BINARY_OP 14 __iadd__
    0xc7, // STORE_FAST 7
    0xb7, // LOAD_FAST 7
    0xb3, // LOAD_FAST 3
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x33, // POP_JUMP_IF_TRUE -13
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x1e, // POP_JUMP_IF_TRUE -34
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_neopixel_NeoPixel_fill = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_neopixel_NeoPixel_fill,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 63,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_neopixel_NeoPixel_fill + 5,
        .line_info_top = fun_data_neopixel_NeoPixel_fill + 5,
        .opcodes = fun_data_neopixel_NeoPixel_fill + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_neopixel_NeoPixel_fill fun_data_neopixel_NeoPixel_fill[0]
#endif

// child of neopixel_NeoPixel
// frozen bytecode for file neopixel.py, scope neopixel_NeoPixel_write
static const byte fun_data_neopixel_NeoPixel_write[21] = {
    0x29,0x04, // prelude
    0x13,0x19, // names: write, self
     // code info
    0x12,0x02, // LOAD_GLOBAL 'bitstream'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'pin'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x13,0x0d, // LOAD_ATTR 'timing'
    0xb0, // LOAD_FAST 0
    0x13,0x0a, // LOAD_ATTR 'buf'
    0x34,0x04, // CALL_FUNCTION 4
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_neopixel_NeoPixel_write = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_neopixel_NeoPixel_write,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 21,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_neopixel_NeoPixel_write + 4,
        .line_info_top = fun_data_neopixel_NeoPixel_write + 4,
        .opcodes = fun_data_neopixel_NeoPixel_write + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_neopixel_NeoPixel_write fun_data_neopixel_NeoPixel_write[0]
#endif

static const mp_raw_code_t *const children_neopixel_NeoPixel[] = {
    (const mp_raw_code_t *)&proto_fun_neopixel_NeoPixel___init__,
    (const mp_raw_code_t *)&proto_fun_neopixel_NeoPixel___len__,
    (const mp_raw_code_t *)&proto_fun_neopixel_NeoPixel___setitem__,
    (const mp_raw_code_t *)&proto_fun_neopixel_NeoPixel___getitem__,
    (const mp_raw_code_t *)&proto_fun_neopixel_NeoPixel_fill,
    (const mp_raw_code_t *)&proto_fun_neopixel_NeoPixel_write,
};

static const mp_raw_code_truncated_t proto_fun_neopixel_NeoPixel = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_neopixel_NeoPixel,
    .children = (void *)&children_neopixel_NeoPixel,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 46,
    .n_children = 6,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_neopixel_NeoPixel + 3,
        .line_info_top = fun_data_neopixel_NeoPixel + 3,
        .opcodes = fun_data_neopixel_NeoPixel + 3,
    },
    #endif
    #endif
};

static const mp_raw_code_t *const children_neopixel__lt_module_gt_[] = {
    (const mp_raw_code_t *)&proto_fun_neopixel_NeoPixel,
};

static const mp_raw_code_truncated_t proto_fun_neopixel__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_neopixel__lt_module_gt_,
    .children = (void *)&children_neopixel__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 30,
    .n_children = 1,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_neopixel__lt_module_gt_ + 3,
        .line_info_top = fun_data_neopixel__lt_module_gt_ + 3,
        .opcodes = fun_data_neopixel__lt_module_gt_ + 3,
    },
    #endif
    #endif
};

static const qstr_short_t const_qstr_table_data_neopixel[35] = {
    MP_QSTR_neopixel_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_bitstream,
    MP_QSTR_machine,
    MP_QSTR_NeoPixel,
    MP_QSTR_0_dot_1_dot_0,
    MP_QSTR___init__,
    MP_QSTR_pin,
    MP_QSTR_n,
    MP_QSTR_bpp,
    MP_QSTR_buf,
    MP_QSTR_init,
    MP_QSTR_OUT,
    MP_QSTR_timing,
    MP_QSTR___len__,
    MP_QSTR___setitem__,
    MP_QSTR_ORDER,
    MP_QSTR___getitem__,
    MP_QSTR_fill,
    MP_QSTR_write,
    MP_QSTR__lt_genexpr_gt_,
    MP_QSTR___version__,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_bytearray,
    MP_QSTR_isinstance,
    MP_QSTR_int,
    MP_QSTR_i,
    MP_QSTR_v,
    MP_QSTR_tuple,
    MP_QSTR_range,
    MP_QSTR_len,
    MP_QSTR__star_,
};

// constants
static const mp_rom_obj_tuple_t const_obj_neopixel_0 = {{&mp_type_tuple}, 4, {
    MP_ROM_INT(1),
    MP_ROM_INT(0),
    MP_ROM_INT(2),
    MP_ROM_INT(3),
}};
static const mp_rom_obj_tuple_t const_obj_neopixel_1 = {{&mp_type_tuple}, 4, {
    MP_ROM_INT(400),
    MP_ROM_INT(850),
    MP_ROM_INT(800),
    MP_ROM_INT(450),
}};
static const mp_rom_obj_tuple_t const_obj_neopixel_2 = {{&mp_type_tuple}, 4, {
    MP_ROM_INT(800),
    MP_ROM_INT(1700),
    MP_ROM_INT(1600),
    MP_ROM_INT(900),
}};

// constant table
static const mp_rom_obj_t const_obj_table_data_neopixel[3] = {
    MP_ROM_PTR(&const_obj_neopixel_0),
    MP_ROM_PTR(&const_obj_neopixel_1),
    MP_ROM_PTR(&const_obj_neopixel_2),
};

static const mp_frozen_module_t frozen_module_neopixel = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_neopixel,
        .obj_table = (mp_obj_t *)&const_obj_table_data_neopixel,
    },
    .proto_fun = &proto_fun_neopixel__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module tcp_config
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/tcp_config.mpy
// - frozen file name: tcp_config.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file tcp_config.py, scope tcp_config__lt_module_gt_
static const byte fun_data_tcp_config__lt_module_gt_[35] = {
    0x08,0x08, // prelude
    0x01, // names: <module>
    0x26,0x46,0x65, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'socket'
    0x16,0x02, // STORE_NAME 'socket'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'settings'
    0x16,0x03, // STORE_NAME 'settings'
    0x22,0x92,0x13, // LOAD_CONST_SMALL_INT 2323
    0x16,0x22, // STORE_NAME 'PORT'
    0x51, // LOAD_CONST_NONE
    0x11,0x22, // LOAD_NAME 'PORT'
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x00, // MAKE_FUNCTION_DEFARGS 0
    0x16,0x04, // STORE_NAME 'run'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of tcp_config__lt_module_gt_
// frozen bytecode for file tcp_config.py, scope tcp_config_run
static const byte fun_data_tcp_config_run[361] = {
    0xba,0x92,0x01,0x4a, // prelude
    0x04,0x23,0x24, // names: run, nic, port
    0x80,0x07,0x2e,0x27,0x2f,0x27,0x27,0x48,0x20,0x23,0x29,0x27,0x28,0x20,0x26,0x23,0x23,0x2a,0x23,0x23,0x28,0x48,0x2f,0x2c,0x57,0x2f,0x2d,0x4a,0x26,0x31,0x34,0x6a,0x2b,0x51, // code info
    0x12,0x02, // LOAD_GLOBAL 'socket'
    0x14,0x05, // LOAD_METHOD 'getaddrinfo'
    0x10,0x06, // LOAD_CONST_STRING '0.0.0.0'
    0xb1, // LOAD_FAST 1
    0x36,0x02, // CALL_METHOD 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0xc2, // STORE_FAST 2
    0x12,0x02, // LOAD_GLOBAL 'socket'
    0x14,0x02, // LOAD_METHOD 'socket'
    0x36,0x00, // CALL_METHOD 0
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x14,0x07, // LOAD_METHOD 'setsockopt'
    0x12,0x02, // LOAD_GLOBAL 'socket'
    0x13,0x08, // LOAD_ATTR 'SOL_SOCKET'
    0x12,0x02, // LOAD_GLOBAL 'socket'
    0x13,0x09, // LOAD_ATTR 'SO_REUSEADDR'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x03, // CALL_METHOD 3
    0x59, // POP_TOP
    0xb3, // LOAD_FAST 3
    0x14,0x0a, // LOAD_METHOD 'bind'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb3, // LOAD_FAST 3
    0x14,0x0b, // LOAD_METHOD 'listen'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x25, // LOAD_GLOBAL 'print'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xb1, // LOAD_FAST 1
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x48,0xe4,0x01, // SETUP_EXCEPT 228
    0xb3, // LOAD_FAST 3
    0x14,0x0c, // LOAD_METHOD 'accept'
    0x36,0x00, // CALL_METHOD 0
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc4, // STORE_FAST 4
    0xc5, // STORE_FAST 5
    0xb4, // LOAD_FAST 4
    0x14,0x0d, // LOAD_METHOD 'settimeout'
    0x9e, // LOAD_CONST_SMALL_INT 30
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb4, // LOAD_FAST 4
    0x14,0x0e, // LOAD_METHOD 'makefile'
    0x10,0x0f, // LOAD_CONST_STRING 'rwb'
    0x36,0x01, // CALL_METHOD 1
    0xc6, // STORE_FAST 6
    0xb6, // LOAD_FAST 6
    0x14,0x10, // LOAD_METHOD 'readline'
    0x36,0x00, // CALL_METHOD 0
    0xc7, // STORE_FAST 7
    0xb7, // LOAD_FAST 7
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x42,0xb8,0x81, // JUMP 184
    0xb7, // LOAD_FAST 7
    0x14,0x11, // LOAD_METHOD 'decode'
    0x36,0x00, // CALL_METHOD 0
    0x14,0x12, // LOAD_METHOD 'strip'
    0x36,0x00, // CALL_METHOD 0
    0xc7, // STORE_FAST 7
    0xb7, // LOAD_FAST 7
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x42,0xa5,0x81, // JUMP 165
    0xb7, // LOAD_FAST 7
    0x14,0x13, // LOAD_METHOD 'split'
    0x51, // LOAD_CONST_NONE
    0x82, // LOAD_CONST_SMALL_INT 2
    0x36,0x02, // CALL_METHOD 2
    0xc8, // STORE_FAST 8
    0xb8, // LOAD_FAST 8
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x14,0x14, // LOAD_METHOD 'upper'
    0x36,0x00, // CALL_METHOD 0
    0xc9, // STORE_FAST 9
    0xb9, // LOAD_FAST 9
    0x10,0x15, // LOAD_CONST_STRING 'GET'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x6c, // POP_JUMP_IF_FALSE 44
    0x12,0x26, // LOAD_GLOBAL 'len'
    0xb8, // LOAD_FAST 8
    0x34,0x01, // CALL_FUNCTION 1
    0x82, // LOAD_CONST_SMALL_INT 2
    0xdb, // BINARY_OP 4 __ge__
    0x44,0x63, // POP_JUMP_IF_FALSE 35
    0x12,0x03, // LOAD_GLOBAL 'settings'
    0x14,0x16, // LOAD_METHOD 'get'
    0xb8, // LOAD_FAST 8
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x10,0x17, // LOAD_CONST_STRING ''
    0x36,0x02, // CALL_METHOD 2
    0xca, // STORE_FAST 10
    0xb4, // LOAD_FAST 4
    0x14,0x18, // LOAD_METHOD 'write'
    0x10,0x19, // LOAD_CONST_STRING '{}={}\n'
    0x14,0x1a, // LOAD_METHOD 'format'
    0xb8, // LOAD_FAST 8
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xba, // LOAD_FAST 10
    0x36,0x02, // CALL_METHOD 2
    0x14,0x1b, // LOAD_METHOD 'encode'
    0x36,0x00, // CALL_METHOD 0
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0xe3,0x80, // JUMP 99
    0xb9, // LOAD_FAST 9
    0x10,0x1c, // LOAD_CONST_STRING 'SET'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x60, // POP_JUMP_IF_FALSE 32
    0x12,0x26, // LOAD_GLOBAL 'len'
    0xb8, // LOAD_FAST 8
    0x34,0x01, // CALL_FUNCTION 1
    0x83, // LOAD_CONST_SMALL_INT 3
    0xdb, // BINARY_OP 4 __ge__
    0x44,0x57, // POP_JUMP_IF_FALSE 23
    0x12,0x03, // LOAD_GLOBAL 'settings'
    0x14,0x1d, // LOAD_METHOD 'set'
    0xb8, // LOAD_FAST 8
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xb8, // LOAD_FAST 8
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0xb4, // LOAD_FAST 4
    0x14,0x18, // LOAD_METHOD 'write'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x7d, // JUMP 61
    0xb9, // LOAD_FAST 9
    0x10,0x1e, // LOAD_CONST_STRING 'LIST'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x6f, // POP_JUMP_IF_FALSE 47
    0x12,0x03, // LOAD_GLOBAL 'settings'
    0x14,0x1f, // LOAD_METHOD 'all_items'
    0x36,0x00, // CALL_METHOD 0
    0x14,0x20, // LOAD_METHOD 'items'
    0x36,0x00, // CALL_METHOD 0
    0x5f, // GET_ITER_STACK
    0x4b,0x18, // FOR_ITER 24
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xcb, // STORE_FAST 11
    0xcc, // STORE_FAST 12
    0xb4, // LOAD_FAST 4
    0x14,0x18, // LOAD_METHOD 'write'
    0x10,0x19, // LOAD_CONST_STRING '{}={}\n'
    0x14,0x1a, // LOAD_METHOD 'format'
    0xbb, // LOAD_FAST 11
    0xbc, // LOAD_FAST 12
    0x36,0x02, // CALL_METHOD 2
    0x14,0x1b, // LOAD_METHOD 'encode'
    0x36,0x00, // CALL_METHOD 0
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x26, // JUMP -26
    0xb4, // LOAD_FAST 4
    0x14,0x18, // LOAD_METHOD 'write'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x48, // JUMP 8
    0xb4, // LOAD_FAST 4
    0x14,0x18, // LOAD_METHOD 'write'
    0x23,0x03, // LOAD_CONST_OBJ 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0xbc,0x7e, // JUMP -196
    0xb4, // LOAD_FAST 4
    0x14,0x21, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x4a,0x1a, // POP_EXCEPT_JUMP 26
    0x57, // DUP_TOP
    0x12,0x27, // LOAD_GLOBAL 'OSError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x53, // POP_JUMP_IF_FALSE 19
    0xcd, // STORE_FAST 13
    0x49,0x09, // SETUP_FINALLY 9
    0x12,0x25, // LOAD_GLOBAL 'print'
    0x23,0x04, // LOAD_CONST_OBJ 4
    0xbd, // LOAD_FAST 13
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xcd, // STORE_FAST 13
    0x28,0x0d, // DELETE_FAST 13
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x42,0xfc,0x7d, // JUMP -260
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_tcp_config_run = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_tcp_config_run,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 361,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 24,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_tcp_config_run + 7,
        .line_info_top = fun_data_tcp_config_run + 41,
        .opcodes = fun_data_tcp_config_run + 41,
    },
    #endif
    #endif
};
#else
#define proto_fun_tcp_config_run fun_data_tcp_config_run[0]
#endif

static const mp_raw_code_t *const children_tcp_config__lt_module_gt_[] = {
    (const mp_raw_code_t *)&proto_fun_tcp_config_run,
};

static const mp_raw_code_truncated_t proto_fun_tcp_config__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_tcp_config__lt_module_gt_,
    .children = (void *)&children_tcp_config__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 35,
    .n_children = 1,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_tcp_config__lt_module_gt_ + 3,
        .line_info_top = fun_data_tcp_config__lt_module_gt_ + 6,
        .opcodes = fun_data_tcp_config__lt_module_gt_ + 6,
    },
    #endif
    #endif
};

static const qstr_short_t const_qstr_table_data_tcp_config[40] = {
    MP_QSTR_tcp_config_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_socket,
    MP_QSTR_settings,
    MP_QSTR_run,
    MP_QSTR_getaddrinfo,
    MP_QSTR_0_dot_0_dot_0_dot_0,
    MP_QSTR_setsockopt,
    MP_QSTR_SOL_SOCKET,
    MP_QSTR_SO_REUSEADDR,
    MP_QSTR_bind,
    MP_QSTR_listen,
    MP_QSTR_accept,
    MP_QSTR_settimeout,
    MP_QSTR_makefile,
    MP_QSTR_rwb,
    MP_QSTR_readline,
    MP_QSTR_decode,
    MP_QSTR_strip,
    MP_QSTR_split,
    MP_QSTR_upper,
    MP_QSTR_GET,
    MP_QSTR_get,
    MP_QSTR_,
    MP_QSTR_write,
    MP_QSTR__brace_open__brace_close__equals__brace_open__brace_close__0x0a_,
    MP_QSTR_format,
    MP_QSTR_encode,
    MP_QSTR_SET,
    MP_QSTR_set,
    MP_QSTR_LIST,
    MP_QSTR_all_items,
    MP_QSTR_items,
    MP_QSTR_close,
    MP_QSTR_PORT,
    MP_QSTR_nic,
    MP_QSTR_port,
    MP_QSTR_print,
    MP_QSTR_len,
    MP_QSTR_OSError,
};

// constants
static const mp_obj_str_t const_obj_tcp_config_0 = {{&mp_type_str}, 155, 31, (const byte*)"\x43\x6f\x6e\x66\x69\x67\x20\x73\x65\x72\x76\x65\x72\x20\x6c\x69\x73\x74\x65\x6e\x69\x6e\x67\x20\x6f\x6e\x20\x70\x6f\x72\x74"};
static const mp_obj_str_t const_obj_tcp_config_1 = {{&mp_type_bytes}, 139, 3, (const byte*)"\x4f\x4b\x0a"};
static const mp_obj_str_t const_obj_tcp_config_2 = {{&mp_type_bytes}, 96, 4, (const byte*)"\x45\x4e\x44\x0a"};
static const mp_obj_str_t const_obj_tcp_config_3 = {{&mp_type_bytes}, 37, 20, (const byte*)"\x45\x52\x52\x20\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x63\x6f\x6d\x6d\x61\x6e\x64\x0a"};

// constant table
static const mp_rom_obj_t const_obj_table_data_tcp_config[5] = {
    MP_ROM_PTR(&const_obj_tcp_config_0),
    MP_ROM_PTR(&const_obj_tcp_config_1),
    MP_ROM_PTR(&const_obj_tcp_config_2),
    MP_ROM_PTR(&const_obj_tcp_config_3),
    MP_ROM_QSTR(MP_QSTR_config_space_server_space_error_colon_),
};

static const mp_frozen_module_t frozen_module_tcp_config = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_tcp_config,
        .obj_table = (mp_obj_t *)&const_obj_table_data_tcp_config,
    },
    .proto_fun = &proto_fun_tcp_config__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module extras
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/extras.mpy
// - frozen file name: extras.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file extras.py, scope extras__lt_module_gt_
static const byte fun_data_extras__lt_module_gt_[25] = {
    0x08,0x0a, // prelude
    0x01, // names: <module>
    0x60,0x20,0x26,0x66, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'machine'
    0x16,0x02, // STORE_NAME 'machine'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'time'
    0x16,0x03, // STORE_NAME 'time'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x04, // STORE_NAME 'stats'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of extras__lt_module_gt_
// frozen bytecode for file extras.py, scope extras_stats
static const byte fun_data_extras_stats[55] = {
    0x40,0x10, // prelude
    0x04, // names: stats
    0x80,0x09,0x28,0x43,0x48,0x4a,0x47, // code info
    0x12,0x02, // LOAD_GLOBAL 'machine'
    0x14,0x05, // LOAD_METHOD 'ADC'
    0x84, // LOAD_CONST_SMALL_INT 4
    0x36,0x01, // CALL_METHOD 1
    0xc0, // STORE_FAST 0
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x14,0x06, // LOAD_METHOD 'read_u16'
    0x36,0x00, // CALL_METHOD 0
    0xb1, // LOAD_FAST 1
    0xf4, // BINARY_OP 29 __mul__
    0xc2, // STORE_FAST 2
    0x9b, // LOAD_CONST_SMALL_INT 27
    0xb2, // LOAD_FAST 2
    0x23,0x01, // LOAD_CONST_OBJ 1
    0xf3, // BINARY_OP 28 __sub__
    0x23,0x02, // LOAD_CONST_OBJ 2
    0xf7, // BINARY_OP 32 __truediv__
    0xf3, // BINARY_OP 28 __sub__
    0xc3, // STORE_FAST 3
    0x12,0x03, // LOAD_GLOBAL 'time'
    0x14,0x03, // LOAD_METHOD 'time'
    0x36,0x00, // CALL_METHOD 0
    0xc4, // STORE_FAST 4
    0x23,0x03, // LOAD_CONST_OBJ 3
    0x14,0x07, // LOAD_METHOD 'format'
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x36,0x02, // CALL_METHOD 2
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_extras_stats = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_extras_stats,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 55,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_extras_stats + 3,
        .line_info_top = fun_data_extras_stats + 10,
        .opcodes = fun_data_extras_stats + 10,
    },
    #endif
    #endif
};
#else
#define proto_fun_extras_stats fun_data_extras_stats[0]
#endif

static const mp_raw_code_t *const children_extras__lt_module_gt_[] = {
    (const mp_raw_code_t *)&proto_fun_extras_stats,
};

static const mp_raw_code_truncated_t proto_fun_extras__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_extras__lt_module_gt_,
    .children = (void *)&children_extras__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 25,
    .n_children = 1,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_extras__lt_module_gt_ + 3,
        .line_info_top = fun_data_extras__lt_module_gt_ + 7,
        .opcodes = fun_data_extras__lt_module_gt_ + 7,
    },
    #endif
    #endif
};

static const qstr_short_t const_qstr_table_data_extras[8] = {
    MP_QSTR_extras_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_machine,
    MP_QSTR_time,
    MP_QSTR_stats,
    MP_QSTR_ADC,
    MP_QSTR_read_u16,
    MP_QSTR_format,
};

// constants
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
static const mp_obj_float_t const_obj_extras_0 = {{&mp_type_float}, (mp_float_t)5.035477225909819e-05};
#define const_obj_extras_0_macro MP_ROM_PTR(&const_obj_extras_0)
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
#define const_obj_extras_0_macro ((mp_rom_obj_t)(0xb8d33406))
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
#define const_obj_extras_0_macro ((mp_rom_obj_t)(0xbf0e6680cce7334d))
#endif
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
static const mp_obj_float_t const_obj_extras_1 = {{&mp_type_float}, (mp_float_t)0.706};
#define const_obj_extras_1_macro MP_ROM_PTR(&const_obj_extras_1)
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
#define const_obj_extras_1_macro ((mp_rom_obj_t)(0xbfb4bc6a))
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
#define const_obj_extras_1_macro ((mp_rom_obj_t)(0xbfea978d4fdf3b64))
#endif
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
static const mp_obj_float_t const_obj_extras_2 = {{&mp_type_float}, (mp_float_t)0.001721};
#define const_obj_extras_2_macro MP_ROM_PTR(&const_obj_extras_2)
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
#define const_obj_extras_2_macro ((mp_rom_obj_t)(0xbb61932e))
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
#define const_obj_extras_2_macro ((mp_rom_obj_t)(0xbf603265add9c27f))
#endif
static const mp_obj_str_t const_obj_extras_3 = {{&mp_type_str}, 250, 36, (const byte*)"\x43\x6f\x72\x65\x20\x54\x65\x6d\x70\x65\x72\x61\x74\x75\x72\x65\x3a\x20\x7b\x7d\x0a\x20\x55\x70\x74\x69\x6d\x65\x20\x28\x73\x29\x3a\x20\x7b\x7d"};

// constant table
static const mp_rom_obj_t const_obj_table_data_extras[4] = {
    const_obj_extras_0_macro,
    const_obj_extras_1_macro,
    const_obj_extras_2_macro,
    MP_ROM_PTR(&const_obj_extras_3),
};

static const mp_frozen_module_t frozen_module_extras = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_extras,
        .obj_table = (mp_obj_t *)&const_obj_table_data_extras,
    },
    .proto_fun = &proto_fun_extras__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module boot
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/boot.mpy
// - frozen file name: boot.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file boot.py, scope boot__lt_module_gt_
static const byte fun_data_boot__lt_module_gt_[236] = {
    0x48,0x2e, // prelude
    0x01, // names: <module>
    0x32,0x26,0x26,0x26,0x26,0x26,0x26,0x26,0x1f,0x23,0x34,0x28,0x49,0x23,0x22,0x28,0x27,0x26,0x4a,0x6b,0x4b,0x4d, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING 'Pin'
    0x10,0x03, // LOAD_CONST_STRING 'SPI'
    0x2a,0x02, // BUILD_TUPLE 2
    0x1b,0x04, // IMPORT_NAME 'machine'
    0x1c,0x02, // IMPORT_FROM 'Pin'
    0x16,0x02, // STORE_NAME 'Pin'
    0x1c,0x03, // IMPORT_FROM 'SPI'
    0x16,0x03, // STORE_NAME 'SPI'
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x05, // IMPORT_NAME 'network'
    0x16,0x05, // STORE_NAME 'network'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x06, // IMPORT_NAME 'webrepl'
    0x16,0x06, // STORE_NAME 'webrepl'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x07, // IMPORT_NAME 'time'
    0x16,0x07, // STORE_NAME 'time'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x08, // IMPORT_NAME 'config'
    0x16,0x08, // STORE_NAME 'config'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x09, // IMPORT_NAME '_thread'
    0x16,0x09, // STORE_NAME '_thread'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x0a, // IMPORT_NAME 'settings'
    0x16,0x0a, // STORE_NAME 'settings'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x0b, // IMPORT_NAME 'tcp_config'
    0x16,0x0b, // STORE_NAME 'tcp_config'
    0x11,0x03, // LOAD_NAME 'SPI'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x22,0x80,0xfa,0x89,0x00, // LOAD_CONST_SMALL_INT 2000000
    0x10,0x0c, // LOAD_CONST_STRING 'mosi'
    0x11,0x02, // LOAD_NAME 'Pin'
    0x93, // LOAD_CONST_SMALL_INT 19
    0x34,0x01, // CALL_FUNCTION 1
    0x10,0x0d, // LOAD_CONST_STRING 'miso'
    0x11,0x02, // LOAD_NAME 'Pin'
    0x90, // LOAD_CONST_SMALL_INT 16
    0x34,0x01, // CALL_FUNCTION 1
    0x10,0x0e, // LOAD_CONST_STRING 'sck'
    0x11,0x02, // LOAD_NAME 'Pin'
    0x92, // LOAD_CONST_SMALL_INT 18
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x86,0x02, // CALL_FUNCTION 770
    0x16,0x19, // STORE_NAME 'ethernet_spi'
    0x11,0x05, // LOAD_NAME 'network'
    0x14,0x0f, // LOAD_METHOD 'WIZNET6K'
    0x11,0x19, // LOAD_NAME 'ethernet_spi'
    0x11,0x02, // LOAD_NAME 'Pin'
    0x91, // LOAD_CONST_SMALL_INT 17
    0x34,0x01, // CALL_FUNCTION 1
    0x11,0x02, // LOAD_NAME 'Pin'
    0x94, // LOAD_CONST_SMALL_INT 20
    0x34,0x01, // CALL_FUNCTION 1
    0x36,0x03, // CALL_METHOD 3
    0x16,0x1a, // STORE_NAME 'nic'
    0x11,0x1a, // LOAD_NAME 'nic'
    0x14,0x10, // LOAD_METHOD 'active'
    0x52, // LOAD_CONST_TRUE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x11,0x1a, // LOAD_NAME 'nic'
    0x14,0x11, // LOAD_METHOD 'ifconfig'
    0x10,0x12, // LOAD_CONST_STRING 'dhcp'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x16,0x1b, // STORE_NAME 'retrys'
    0x42,0x61, // JUMP 33
    0x11,0x1a, // LOAD_NAME 'nic'
    0x14,0x13, // LOAD_METHOD 'isconnected'
    0x36,0x00, // CALL_METHOD 0
    0x43,0x57, // POP_JUMP_IF_TRUE 23
    0x11,0x1c, // LOAD_NAME 'print'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x11,0x1b, // LOAD_NAME 'retrys'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x16,0x1b, // STORE_NAME 'retrys'
    0x11,0x07, // LOAD_NAME 'time'
    0x14,0x14, // LOAD_METHOD 'sleep'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x42, // JUMP 2
    0x42,0x49, // JUMP 9
    0x11,0x1b, // LOAD_NAME 'retrys'
    0x11,0x08, // LOAD_NAME 'config'
    0x13,0x15, // LOAD_ATTR 'retry_count'
    0xda, // BINARY_OP 3 __le__
    0x43,0x16, // POP_JUMP_IF_TRUE -42
    0x11,0x1c, // LOAD_NAME 'print'
    0x11,0x1a, // LOAD_NAME 'nic'
    0x14,0x11, // LOAD_METHOD 'ifconfig'
    0x36,0x00, // CALL_METHOD 0
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x11,0x09, // LOAD_NAME '_thread'
    0x14,0x16, // LOAD_METHOD 'start_new_thread'
    0x11,0x0b, // LOAD_NAME 'tcp_config'
    0x13,0x17, // LOAD_ATTR 'run'
    0x2a,0x00, // BUILD_TUPLE 0
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x11,0x06, // LOAD_NAME 'webrepl'
    0x14,0x18, // LOAD_METHOD 'start'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_boot__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_boot__lt_module_gt_,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 236,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_boot__lt_module_gt_ + 3,
        .line_info_top = fun_data_boot__lt_module_gt_ + 25,
        .opcodes = fun_data_boot__lt_module_gt_ + 25,
    },
    #endif
    #endif
};
#else
#define proto_fun_boot__lt_module_gt_ fun_data_boot__lt_module_gt_[0]
#endif

static const qstr_short_t const_qstr_table_data_boot[29] = {
    MP_QSTR_boot_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_Pin,
    MP_QSTR_SPI,
    MP_QSTR_machine,
    MP_QSTR_network,
    MP_QSTR_webrepl,
    MP_QSTR_time,
    MP_QSTR_config,
    MP_QSTR__thread,
    MP_QSTR_settings,
    MP_QSTR_tcp_config,
    MP_QSTR_mosi,
    MP_QSTR_miso,
    MP_QSTR_sck,
    MP_QSTR_WIZNET6K,
    MP_QSTR_active,
    MP_QSTR_ifconfig,
    MP_QSTR_dhcp,
    MP_QSTR_isconnected,
    MP_QSTR_sleep,
    MP_QSTR_retry_count,
    MP_QSTR_start_new_thread,
    MP_QSTR_run,
    MP_QSTR_start,
    MP_QSTR_ethernet_spi,
    MP_QSTR_nic,
    MP_QSTR_retrys,
    MP_QSTR_print,
};

// constants
static const mp_obj_str_t const_obj_boot_0 = {{&mp_type_str}, 141, 25, (const byte*)"\x57\x61\x69\x74\x69\x6e\x67\x20\x66\x6f\x72\x20\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x2e\x2e\x2e"};

// constant table
static const mp_rom_obj_t const_obj_table_data_boot[1] = {
    MP_ROM_PTR(&const_obj_boot_0),
};

static const mp_frozen_module_t frozen_module_boot = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_boot,
        .obj_table = (mp_obj_t *)&const_obj_table_data_boot,
    },
    .proto_fun = &proto_fun_boot__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module settings
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/settings.mpy
// - frozen file name: settings.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file settings.py, scope settings__lt_module_gt_
static const byte fun_data_settings__lt_module_gt_[70] = {
    0x08,0x1c, // prelude
    0x01, // names: <module>
    0x26,0x46,0x44,0x28,0x64,0x84,0x0b,0x84,0x07,0x68,0x40,0x84,0x07, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'json'
    0x16,0x02, // STORE_NAME 'json'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME '_thread'
    0x16,0x03, // STORE_NAME '_thread'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x16,0x10, // STORE_NAME 'SETTINGS_FILE'
    0x11,0x03, // LOAD_NAME '_thread'
    0x14,0x04, // LOAD_METHOD 'allocate_lock'
    0x36,0x00, // CALL_METHOD 0
    0x16,0x11, // STORE_NAME '_lock'
    0x2c,0x00, // BUILD_MAP 0
    0x17,0x12, // STORE_GLOBAL '_cache'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x05, // STORE_NAME '_load_from_disk'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x0b, // STORE_NAME 'init'
    0x51, // LOAD_CONST_NONE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x02, // MAKE_FUNCTION_DEFARGS 2
    0x16,0x0c, // STORE_NAME 'get'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x0d, // STORE_NAME 'set'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x0f, // STORE_NAME 'all_items'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of settings__lt_module_gt_
// frozen bytecode for file settings.py, scope settings__load_from_disk
static const byte fun_data_settings__load_from_disk[76] = {
    0xc0,0x02,0x12, // prelude
    0x05, // names: _load_from_disk
    0x80,0x0a,0x22,0x29,0x53,0x2b,0x28,0x29, // code info
    0x48,0x15, // SETUP_EXCEPT 21
    0x12,0x13, // LOAD_GLOBAL 'open'
    0x12,0x10, // LOAD_GLOBAL 'SETTINGS_FILE'
    0x34,0x01, // CALL_FUNCTION 1
    0x47,0x09, // SETUP_WITH 9
    0xc0, // STORE_FAST 0
    0x12,0x02, // LOAD_GLOBAL 'json'
    0x14,0x06, // LOAD_METHOD 'load'
    0xb0, // LOAD_FAST 0
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x4a,0x27, // POP_EXCEPT_JUMP 39
    0x57, // DUP_TOP
    0x12,0x14, // LOAD_GLOBAL 'OSError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x60, // POP_JUMP_IF_FALSE 32
    0x59, // POP_TOP
    0x12,0x13, // LOAD_GLOBAL 'open'
    0x12,0x10, // LOAD_GLOBAL 'SETTINGS_FILE'
    0x10,0x07, // LOAD_CONST_STRING 'w'
    0x34,0x02, // CALL_FUNCTION 2
    0x47,0x10, // SETUP_WITH 16
    0xc0, // STORE_FAST 0
    0xb0, // LOAD_FAST 0
    0x14,0x08, // LOAD_METHOD 'write'
    0x10,0x09, // LOAD_CONST_STRING '\n'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x0a, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x2c,0x00, // BUILD_MAP 0
    0x63, // RETURN_VALUE
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_settings__load_from_disk = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_settings__load_from_disk,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 76,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_settings__load_from_disk + 4,
        .line_info_top = fun_data_settings__load_from_disk + 12,
        .opcodes = fun_data_settings__load_from_disk + 12,
    },
    #endif
    #endif
};
#else
#define proto_fun_settings__load_from_disk fun_data_settings__load_from_disk[0]
#endif

// child of settings__lt_module_gt_
// frozen bytecode for file settings.py, scope settings_init
static const byte fun_data_settings_init[24] = {
    0x24,0x0c, // prelude
    0x0b, // names: init
    0x80,0x15,0x20,0x20,0x25, // code info
    0x12,0x11, // LOAD_GLOBAL '_lock'
    0x47,0x08, // SETUP_WITH 8
    0x59, // POP_TOP
    0x12,0x05, // LOAD_GLOBAL '_load_from_disk'
    0x34,0x00, // CALL_FUNCTION 0
    0x17,0x12, // STORE_GLOBAL '_cache'
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_settings_init = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_settings_init,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 24,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 11,
        .line_info = fun_data_settings_init + 3,
        .line_info_top = fun_data_settings_init + 8,
        .opcodes = fun_data_settings_init + 8,
    },
    #endif
    #endif
};
#else
#define proto_fun_settings_init fun_data_settings_init[0]
#endif

// child of settings__lt_module_gt_
// frozen bytecode for file settings.py, scope settings_get
static const byte fun_data_settings_get[27] = {
    0xbe,0x01,0x0c, // prelude
    0x0c,0x15,0x16, // names: get, key, default
    0x80,0x1c,0x25, // code info
    0x12,0x11, // LOAD_GLOBAL '_lock'
    0x47,0x0a, // SETUP_WITH 10
    0x59, // POP_TOP
    0x12,0x12, // LOAD_GLOBAL '_cache'
    0x14,0x0c, // LOAD_METHOD 'get'
    0xb0, // LOAD_FAST 0
    0xb1, // LOAD_FAST 1
    0x36,0x02, // CALL_METHOD 2
    0x63, // RETURN_VALUE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_settings_get = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_settings_get,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 27,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_settings_get + 6,
        .line_info_top = fun_data_settings_get + 9,
        .opcodes = fun_data_settings_get + 9,
    },
    #endif
    #endif
};
#else
#define proto_fun_settings_get fun_data_settings_get[0]
#endif

// child of settings__lt_module_gt_
// frozen bytecode for file settings.py, scope settings_set
static const byte fun_data_settings_set[50] = {
    0xd2,0x02,0x10, // prelude
    0x0d,0x15,0x17, // names: set, key, value
    0x80,0x21,0x25,0x25,0x2b, // code info
    0x12,0x11, // LOAD_GLOBAL '_lock'
    0x47,0x1f, // SETUP_WITH 31
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x12,0x12, // LOAD_GLOBAL '_cache'
    0xb0, // LOAD_FAST 0
    0x56, // STORE_SUBSCR
    0x12,0x13, // LOAD_GLOBAL 'open'
    0x12,0x10, // LOAD_GLOBAL 'SETTINGS_FILE'
    0x10,0x07, // LOAD_CONST_STRING 'w'
    0x34,0x02, // CALL_FUNCTION 2
    0x47,0x0c, // SETUP_WITH 12
    0xc2, // STORE_FAST 2
    0x12,0x02, // LOAD_GLOBAL 'json'
    0x14,0x0e, // LOAD_METHOD 'dump'
    0x12,0x12, // LOAD_GLOBAL '_cache'
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_settings_set = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_settings_set,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 50,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_settings_set + 6,
        .line_info_top = fun_data_settings_set + 11,
        .opcodes = fun_data_settings_set + 11,
    },
    #endif
    #endif
};
#else
#define proto_fun_settings_set fun_data_settings_set[0]
#endif

// child of settings__lt_module_gt_
// frozen bytecode for file settings.py, scope settings_all_items
static const byte fun_data_settings_all_items[22] = {
    0x24,0x08, // prelude
    0x0f, // names: all_items
    0x80,0x28,0x25, // code info
    0x12,0x11, // LOAD_GLOBAL '_lock'
    0x47,0x08, // SETUP_WITH 8
    0x59, // POP_TOP
    0x12,0x18, // LOAD_GLOBAL 'dict'
    0x12,0x12, // LOAD_GLOBAL '_cache'
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_settings_all_items = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_settings_all_items,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 22,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 15,
        .line_info = fun_data_settings_all_items + 3,
        .line_info_top = fun_data_settings_all_items + 6,
        .opcodes = fun_data_settings_all_items + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_settings_all_items fun_data_settings_all_items[0]
#endif

static const mp_raw_code_t *const children_settings__lt_module_gt_[] = {
    (const mp_raw_code_t *)&proto_fun_settings__load_from_disk,
    (const mp_raw_code_t *)&proto_fun_settings_init,
    (const mp_raw_code_t *)&proto_fun_settings_get,
    (const mp_raw_code_t *)&proto_fun_settings_set,
    (const mp_raw_code_t *)&proto_fun_settings_all_items,
};

static const mp_raw_code_truncated_t proto_fun_settings__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_settings__lt_module_gt_,
    .children = (void *)&children_settings__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 70,
    .n_children = 5,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_settings__lt_module_gt_ + 3,
        .line_info_top = fun_data_settings__lt_module_gt_ + 16,
        .opcodes = fun_data_settings__lt_module_gt_ + 16,
    },
    #endif
    #endif
};

static const qstr_short_t const_qstr_table_data_settings[25] = {
    MP_QSTR_settings_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_json,
    MP_QSTR__thread,
    MP_QSTR_allocate_lock,
    MP_QSTR__load_from_disk,
    MP_QSTR_load,
    MP_QSTR_w,
    MP_QSTR_write,
    MP_QSTR__0x0a_,
    MP_QSTR_close,
    MP_QSTR_init,
    MP_QSTR_get,
    MP_QSTR_set,
    MP_QSTR_dump,
    MP_QSTR_all_items,
    MP_QSTR_SETTINGS_FILE,
    MP_QSTR__lock,
    MP_QSTR__cache,
    MP_QSTR_open,
    MP_QSTR_OSError,
    MP_QSTR_key,
    MP_QSTR_default,
    MP_QSTR_value,
    MP_QSTR_dict,
};

// constants

// constant table
static const mp_rom_obj_t const_obj_table_data_settings[1] = {
    MP_ROM_QSTR(MP_QSTR_settings_dot_json),
};

static const mp_frozen_module_t frozen_module_settings = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_settings,
        .obj_table = (mp_obj_t *)&const_obj_table_data_settings,
    },
    .proto_fun = &proto_fun_settings__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module config
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/config.mpy
// - frozen file name: config.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file config.py, scope config__lt_module_gt_
static const byte fun_data_config__lt_module_gt_[42] = {
    0x18,0x08, // prelude
    0x01, // names: <module>
    0x46,0x23,0x2d, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'settings'
    0x16,0x02, // STORE_NAME 'settings'
    0x52, // LOAD_CONST_TRUE
    0x16,0x06, // STORE_NAME 'allow_custom_commands'
    0x11,0x02, // LOAD_NAME 'settings'
    0x14,0x03, // LOAD_METHOD 'get'
    0x10,0x04, // LOAD_CONST_STRING 'retry_count'
    0x22,0x80,0x5a, // LOAD_CONST_SMALL_INT 90
    0x36,0x02, // CALL_METHOD 2
    0x16,0x04, // STORE_NAME 'retry_count'
    0x11,0x02, // LOAD_NAME 'settings'
    0x14,0x03, // LOAD_METHOD 'get'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x10,0x05, // LOAD_CONST_STRING 'passwrd1'
    0x36,0x02, // CALL_METHOD 2
    0x16,0x07, // STORE_NAME 'repl_password'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_config__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_config__lt_module_gt_,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 42,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_config__lt_module_gt_ + 3,
        .line_info_top = fun_data_config__lt_module_gt_ + 6,
        .opcodes = fun_data_config__lt_module_gt_ + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_config__lt_module_gt_ fun_data_config__lt_module_gt_[0]
#endif

static const qstr_short_t const_qstr_table_data_config[8] = {
    MP_QSTR_config_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_settings,
    MP_QSTR_get,
    MP_QSTR_retry_count,
    MP_QSTR_passwrd1,
    MP_QSTR_allow_custom_commands,
    MP_QSTR_repl_password,
};

// constants

// constant table
static const mp_rom_obj_t const_obj_table_data_config[1] = {
    MP_ROM_QSTR(MP_QSTR_repl_space_password),
};

static const mp_frozen_module_t frozen_module_config = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_config,
        .obj_table = (mp_obj_t *)&const_obj_table_data_config,
    },
    .proto_fun = &proto_fun_config__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module webrepl_cfg
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/webrepl_cfg.mpy
// - frozen file name: webrepl_cfg.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file webrepl_cfg.py, scope webrepl_cfg__lt_module_gt_
static const byte fun_data_webrepl_cfg__lt_module_gt_[18] = {
    0x08,0x04, // prelude
    0x01, // names: <module>
    0x26, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'config'
    0x16,0x02, // STORE_NAME 'config'
    0x11,0x02, // LOAD_NAME 'config'
    0x13,0x03, // LOAD_ATTR 'repl_password'
    0x16,0x04, // STORE_NAME 'PASS'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_webrepl_cfg__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_webrepl_cfg__lt_module_gt_,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 18,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_webrepl_cfg__lt_module_gt_ + 3,
        .line_info_top = fun_data_webrepl_cfg__lt_module_gt_ + 4,
        .opcodes = fun_data_webrepl_cfg__lt_module_gt_ + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_webrepl_cfg__lt_module_gt_ fun_data_webrepl_cfg__lt_module_gt_[0]
#endif

static const qstr_short_t const_qstr_table_data_webrepl_cfg[5] = {
    MP_QSTR_webrepl_cfg_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_config,
    MP_QSTR_repl_password,
    MP_QSTR_PASS,
};

static const mp_frozen_module_t frozen_module_webrepl_cfg = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_webrepl_cfg,
        .obj_table = NULL,
    },
    .proto_fun = &proto_fun_webrepl_cfg__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module webrepl
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/webrepl.mpy
// - frozen file name: webrepl.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file webrepl.py, scope webrepl__lt_module_gt_
static const byte fun_data_webrepl__lt_module_gt_[150] = {
    0x10,0x36, // prelude
    0x01, // names: <module>
    0x20,0x26,0x26,0x2c,0x26,0x26,0x26,0x26,0x26,0x46,0x23,0x43,0x63,0x64,0x84,0x38,0x84,0x10,0x84,0x0f,0x84,0x1c,0x84,0x09,0x8e,0x1c, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'binascii'
    0x16,0x02, // STORE_NAME 'binascii'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'hashlib'
    0x16,0x03, // STORE_NAME 'hashlib'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x04, // LOAD_CONST_STRING 'const'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x05, // IMPORT_NAME 'micropython'
    0x1c,0x04, // IMPORT_FROM 'const'
    0x16,0x04, // STORE_NAME 'const'
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x06, // IMPORT_NAME 'network'
    0x16,0x06, // STORE_NAME 'network'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x07, // IMPORT_NAME 'os'
    0x16,0x07, // STORE_NAME 'os'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x08, // IMPORT_NAME 'socket'
    0x16,0x08, // STORE_NAME 'socket'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x09, // IMPORT_NAME 'sys'
    0x16,0x09, // STORE_NAME 'sys'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x0a, // IMPORT_NAME 'websocket'
    0x16,0x0a, // STORE_NAME 'websocket'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x0b, // IMPORT_NAME '_webrepl'
    0x16,0x0b, // STORE_NAME '_webrepl'
    0x51, // LOAD_CONST_NONE
    0x17,0x33, // STORE_GLOBAL 'listen_s'
    0x51, // LOAD_CONST_NONE
    0x17,0x34, // STORE_GLOBAL 'client_s'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x16,0x35, // STORE_NAME 'DEBUG'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x17,0x36, // STORE_GLOBAL 'static_host'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x0c, // STORE_NAME 'server_handshake'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x1a, // STORE_NAME 'send_html'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x1c, // STORE_NAME 'setup_conn'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x24, // STORE_NAME 'accept_conn'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x2a, // STORE_NAME 'stop'
    0x22,0x80,0xc0,0x4a, // LOAD_CONST_SMALL_INT 8266
    0x51, // LOAD_CONST_NONE
    0x11,0x24, // LOAD_NAME 'accept_conn'
    0x2a,0x03, // BUILD_TUPLE 3
    0x53, // LOAD_NULL
    0x33,0x05, // MAKE_FUNCTION_DEFARGS 5
    0x16,0x2b, // STORE_NAME 'start'
    0x22,0x80,0xc0,0x4a, // LOAD_CONST_SMALL_INT 8266
    0x51, // LOAD_CONST_NONE
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x06, // MAKE_FUNCTION_DEFARGS 6
    0x16,0x30, // STORE_NAME 'start_foreground'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of webrepl__lt_module_gt_
// frozen bytecode for file webrepl.py, scope webrepl_server_handshake
static const byte fun_data_webrepl_server_handshake[292] = {
    0x71,0x56, // prelude
    0x0c,0x37, // names: server_handshake, cl
    0x80,0x15,0x49,0x26,0x24,0x4e,0x22,0x22,0x42,0x20,0x26,0x43,0x22,0x26,0x23,0x24,0x2a,0x30,0x24,0x29,0x26,0x24,0x2c,0x24,0x2c,0x47,0x29,0x42,0x24,0x4d,0x28,0x28,0x26,0x2d,0x24,0x48,0x23,0x65,0x60,0x27,0x48, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0d, // LOAD_METHOD 'makefile'
    0x10,0x0e, // LOAD_CONST_STRING 'rwb'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x02, // CALL_METHOD 2
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x14,0x0f, // LOAD_METHOD 'readline'
    0x36,0x00, // CALL_METHOD 0
    0xc2, // STORE_FAST 2
    0x12,0x35, // LOAD_GLOBAL 'DEBUG'
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x12,0x09, // LOAD_GLOBAL 'sys'
    0x13,0x10, // LOAD_ATTR 'stdout'
    0x14,0x11, // LOAD_METHOD 'write'
    0x12,0x38, // LOAD_GLOBAL 'repr'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0xc3, // STORE_FAST 3
    0x50, // LOAD_CONST_FALSE
    0xc4, // STORE_FAST 4
    0x50, // LOAD_CONST_FALSE
    0xc5, // STORE_FAST 5
    0xb1, // LOAD_FAST 1
    0x14,0x0f, // LOAD_METHOD 'readline'
    0x36,0x00, // CALL_METHOD 0
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0xb2, // LOAD_FAST 2
    0x23,0x01, // LOAD_CONST_OBJ 1
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x42,0xd8,0x80, // JUMP 88
    0x12,0x35, // LOAD_GLOBAL 'DEBUG'
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0x12,0x09, // LOAD_GLOBAL 'sys'
    0x13,0x10, // LOAD_ATTR 'stdout'
    0x14,0x11, // LOAD_METHOD 'write'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x32,0x00, // MAKE_FUNCTION 0
    0xb2, // LOAD_FAST 2
    0x14,0x12, // LOAD_METHOD 'split'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x02, // CALL_METHOD 2
    0x34,0x01, // CALL_FUNCTION 1
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc6, // STORE_FAST 6
    0xc7, // STORE_FAST 7
    0x12,0x35, // LOAD_GLOBAL 'DEBUG'
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0x12,0x39, // LOAD_GLOBAL 'print'
    0xb6, // LOAD_FAST 6
    0xb7, // LOAD_FAST 7
    0x2a,0x02, // BUILD_TUPLE 2
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0xb6, // LOAD_FAST 6
    0x23,0x03, // LOAD_CONST_OBJ 3
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0xb7, // LOAD_FAST 7
    0xc3, // STORE_FAST 3
    0x42,0x60, // JUMP 32
    0xb6, // LOAD_FAST 6
    0x23,0x04, // LOAD_CONST_OBJ 4
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0x23,0x05, // LOAD_CONST_OBJ 5
    0xb7, // LOAD_FAST 7
    0xdd, // BINARY_OP 6 <in>
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x52, // LOAD_CONST_TRUE
    0xc4, // STORE_FAST 4
    0x42,0x50, // JUMP 16
    0xb6, // LOAD_FAST 6
    0x23,0x05, // LOAD_CONST_OBJ 5
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0xb7, // LOAD_FAST 7
    0x23,0x06, // LOAD_CONST_OBJ 6
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x52, // LOAD_CONST_TRUE
    0xc5, // STORE_FAST 5
    0x42,0x40, // JUMP 0
    0x42,0x94,0x7f, // JUMP -108
    0xb4, // LOAD_FAST 4
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb5, // LOAD_FAST 5
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0xb3, // LOAD_FAST 3
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0x12,0x35, // LOAD_GLOBAL 'DEBUG'
    0x44,0x4d, // POP_JUMP_IF_FALSE 13
    0x12,0x39, // LOAD_GLOBAL 'print'
    0x23,0x07, // LOAD_CONST_OBJ 7
    0xb3, // LOAD_FAST 3
    0x12,0x3a, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x03, // CALL_FUNCTION 3
    0x59, // POP_TOP
    0x12,0x03, // LOAD_GLOBAL 'hashlib'
    0x14,0x13, // LOAD_METHOD 'sha1'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0xc8, // STORE_FAST 8
    0xb8, // LOAD_FAST 8
    0x14,0x14, // LOAD_METHOD 'update'
    0x23,0x08, // LOAD_CONST_OBJ 8
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb8, // LOAD_FAST 8
    0x14,0x15, // LOAD_METHOD 'digest'
    0x36,0x00, // CALL_METHOD 0
    0xc9, // STORE_FAST 9
    0x12,0x02, // LOAD_GLOBAL 'binascii'
    0x14,0x16, // LOAD_METHOD 'b2a_base64'
    0xb9, // LOAD_FAST 9
    0x36,0x01, // CALL_METHOD 1
    0x51, // LOAD_CONST_NONE
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0xc9, // STORE_FAST 9
    0x12,0x35, // LOAD_GLOBAL 'DEBUG'
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0x12,0x39, // LOAD_GLOBAL 'print'
    0x10,0x17, // LOAD_CONST_STRING 'respkey:'
    0xb9, // LOAD_FAST 9
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x18, // LOAD_METHOD 'send'
    0x23,0x09, // LOAD_CONST_OBJ 9
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x18, // LOAD_METHOD 'send'
    0xb9, // LOAD_FAST 9
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x18, // LOAD_METHOD 'send'
    0x10,0x19, // LOAD_CONST_STRING '\r\n\r\n'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x52, // LOAD_CONST_TRUE
    0x63, // RETURN_VALUE
};
// child of webrepl_server_handshake
// frozen bytecode for file webrepl.py, scope webrepl_server_handshake__lt_listcomp_gt_
static const byte fun_data_webrepl_server_handshake__lt_listcomp_gt_[23] = {
    0x41,0x08, // prelude
    0x31,0x3f, // names: <listcomp>, *
    0x80,0x28, // code info
    0x2b,0x00, // BUILD_LIST 0
    0xb0, // LOAD_FAST 0
    0x5f, // GET_ITER_STACK
    0x4b,0x0a, // FOR_ITER 10
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x14,0x32, // LOAD_METHOD 'strip'
    0x36,0x00, // CALL_METHOD 0
    0x2f,0x14, // STORE_COMP 20
    0x42,0x34, // JUMP -12
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_webrepl_server_handshake__lt_listcomp_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_webrepl_server_handshake__lt_listcomp_gt_,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 23,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 49,
        .line_info = fun_data_webrepl_server_handshake__lt_listcomp_gt_ + 4,
        .line_info_top = fun_data_webrepl_server_handshake__lt_listcomp_gt_ + 6,
        .opcodes = fun_data_webrepl_server_handshake__lt_listcomp_gt_ + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_webrepl_server_handshake__lt_listcomp_gt_ fun_data_webrepl_server_handshake__lt_listcomp_gt_[0]
#endif

static const mp_raw_code_t *const children_webrepl_server_handshake[] = {
    (const mp_raw_code_t *)&proto_fun_webrepl_server_handshake__lt_listcomp_gt_,
};

static const mp_raw_code_truncated_t proto_fun_webrepl_server_handshake = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_webrepl_server_handshake,
    .children = (void *)&children_webrepl_server_handshake,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 292,
    .n_children = 1,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_webrepl_server_handshake + 4,
        .line_info_top = fun_data_webrepl_server_handshake + 45,
        .opcodes = fun_data_webrepl_server_handshake + 45,
    },
    #endif
    #endif
};

// child of webrepl__lt_module_gt_
// frozen bytecode for file webrepl.py, scope webrepl_send_html
static const byte fun_data_webrepl_send_html[45] = {
    0x19,0x16, // prelude
    0x1a,0x37, // names: send_html, cl
    0x80,0x4d,0x23,0x65,0x40,0x28,0x23,0x65,0x20, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x18, // LOAD_METHOD 'send'
    0x23,0x0a, // LOAD_CONST_OBJ 10
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x18, // LOAD_METHOD 'send'
    0x12,0x36, // LOAD_GLOBAL 'static_host'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x18, // LOAD_METHOD 'send'
    0x23,0x0b, // LOAD_CONST_OBJ 11
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x1b, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_webrepl_send_html = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_webrepl_send_html,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 45,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 26,
        .line_info = fun_data_webrepl_send_html + 4,
        .line_info_top = fun_data_webrepl_send_html + 13,
        .opcodes = fun_data_webrepl_send_html + 13,
    },
    #endif
    #endif
};
#else
#define proto_fun_webrepl_send_html fun_data_webrepl_send_html[0]
#endif

// child of webrepl__lt_module_gt_
// frozen bytecode for file webrepl.py, scope webrepl_setup_conn
static const byte fun_data_webrepl_setup_conn[91] = {
    0x42,0x1c, // prelude
    0x1c,0x3b,0x3c, // names: setup_conn, port, accept_handler
    0x80,0x5d,0x20,0x28,0x50,0x2a,0x46,0x28,0x28,0x23,0x2d, // code info
    0x12,0x08, // LOAD_GLOBAL 'socket'
    0x14,0x08, // LOAD_METHOD 'socket'
    0x36,0x00, // CALL_METHOD 0
    0x17,0x33, // STORE_GLOBAL 'listen_s'
    0x12,0x33, // LOAD_GLOBAL 'listen_s'
    0x14,0x1d, // LOAD_METHOD 'setsockopt'
    0x12,0x08, // LOAD_GLOBAL 'socket'
    0x13,0x1e, // LOAD_ATTR 'SOL_SOCKET'
    0x12,0x08, // LOAD_GLOBAL 'socket'
    0x13,0x1f, // LOAD_ATTR 'SO_REUSEADDR'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x03, // CALL_METHOD 3
    0x59, // POP_TOP
    0x12,0x08, // LOAD_GLOBAL 'socket'
    0x14,0x20, // LOAD_METHOD 'getaddrinfo'
    0x10,0x21, // LOAD_CONST_STRING '0.0.0.0'
    0xb0, // LOAD_FAST 0
    0x36,0x02, // CALL_METHOD 2
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x84, // LOAD_CONST_SMALL_INT 4
    0x55, // LOAD_SUBSCR
    0xc3, // STORE_FAST 3
    0x12,0x33, // LOAD_GLOBAL 'listen_s'
    0x14,0x22, // LOAD_METHOD 'bind'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x33, // LOAD_GLOBAL 'listen_s'
    0x14,0x23, // LOAD_METHOD 'listen'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x44,0x4d, // POP_JUMP_IF_FALSE 13
    0x12,0x33, // LOAD_GLOBAL 'listen_s'
    0x14,0x1d, // LOAD_METHOD 'setsockopt'
    0x12,0x08, // LOAD_GLOBAL 'socket'
    0x13,0x1e, // LOAD_ATTR 'SOL_SOCKET'
    0x94, // LOAD_CONST_SMALL_INT 20
    0xb1, // LOAD_FAST 1
    0x36,0x03, // CALL_METHOD 3
    0x59, // POP_TOP
    0x12,0x33, // LOAD_GLOBAL 'listen_s'
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_webrepl_setup_conn = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_webrepl_setup_conn,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 91,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 28,
        .line_info = fun_data_webrepl_setup_conn + 5,
        .line_info_top = fun_data_webrepl_setup_conn + 16,
        .opcodes = fun_data_webrepl_setup_conn + 16,
    },
    #endif
    #endif
};
#else
#define proto_fun_webrepl_setup_conn fun_data_webrepl_setup_conn[0]
#endif

// child of webrepl__lt_module_gt_
// frozen bytecode for file webrepl.py, scope webrepl_accept_conn
static const byte fun_data_webrepl_accept_conn[156] = {
    0x49,0x2e, // prelude
    0x24,0x3d, // names: accept_conn, listen_sock
    0x80,0x6c,0x20,0x49,0x27,0x26,0x42,0x28,0x28,0x23,0x2a,0x26,0x22,0x28,0x43,0x29,0x28,0x47,0x2a,0x2f,0x48, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x25, // LOAD_METHOD 'accept'
    0x36,0x00, // CALL_METHOD 0
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc1, // STORE_FAST 1
    0xc2, // STORE_FAST 2
    0x12,0x0c, // LOAD_GLOBAL 'server_handshake'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x43,0x48, // POP_JUMP_IF_TRUE 8
    0x12,0x1a, // LOAD_GLOBAL 'send_html'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0x12,0x07, // LOAD_GLOBAL 'os'
    0x14,0x26, // LOAD_METHOD 'dupterm'
    0x51, // LOAD_CONST_NONE
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0x12,0x07, // LOAD_GLOBAL 'os'
    0x14,0x26, // LOAD_METHOD 'dupterm'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb3, // LOAD_FAST 3
    0x44,0x52, // POP_JUMP_IF_FALSE 18
    0x12,0x39, // LOAD_GLOBAL 'print'
    0x23,0x0c, // LOAD_CONST_OBJ 12
    0xb2, // LOAD_FAST 2
    0x10,0x27, // LOAD_CONST_STRING 'rejected'
    0x34,0x03, // CALL_FUNCTION 3
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x14,0x1b, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0x12,0x39, // LOAD_GLOBAL 'print'
    0x23,0x0d, // LOAD_CONST_OBJ 13
    0xb2, // LOAD_FAST 2
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x17,0x34, // STORE_GLOBAL 'client_s'
    0x12,0x0a, // LOAD_GLOBAL 'websocket'
    0x14,0x0a, // LOAD_METHOD 'websocket'
    0xb1, // LOAD_FAST 1
    0x52, // LOAD_CONST_TRUE
    0x36,0x02, // CALL_METHOD 2
    0xc4, // STORE_FAST 4
    0x12,0x0b, // LOAD_GLOBAL '_webrepl'
    0x14,0x0b, // LOAD_METHOD '_webrepl'
    0xb4, // LOAD_FAST 4
    0x36,0x01, // CALL_METHOD 1
    0xc4, // STORE_FAST 4
    0xb1, // LOAD_FAST 1
    0x14,0x28, // LOAD_METHOD 'setblocking'
    0x50, // LOAD_CONST_FALSE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x3e, // LOAD_GLOBAL 'hasattr'
    0x12,0x07, // LOAD_GLOBAL 'os'
    0x23,0x0e, // LOAD_CONST_OBJ 14
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0xb1, // LOAD_FAST 1
    0x14,0x1d, // LOAD_METHOD 'setsockopt'
    0x12,0x08, // LOAD_GLOBAL 'socket'
    0x13,0x1e, // LOAD_ATTR 'SOL_SOCKET'
    0x94, // LOAD_CONST_SMALL_INT 20
    0x12,0x07, // LOAD_GLOBAL 'os'
    0x13,0x29, // LOAD_ATTR 'dupterm_notify'
    0x36,0x03, // CALL_METHOD 3
    0x59, // POP_TOP
    0x12,0x07, // LOAD_GLOBAL 'os'
    0x14,0x26, // LOAD_METHOD 'dupterm'
    0xb4, // LOAD_FAST 4
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x52, // LOAD_CONST_TRUE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_webrepl_accept_conn = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_webrepl_accept_conn,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 156,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 36,
        .line_info = fun_data_webrepl_accept_conn + 4,
        .line_info_top = fun_data_webrepl_accept_conn + 25,
        .opcodes = fun_data_webrepl_accept_conn + 25,
    },
    #endif
    #endif
};
#else
#define proto_fun_webrepl_accept_conn fun_data_webrepl_accept_conn[0]
#endif

// child of webrepl__lt_module_gt_
// frozen bytecode for file webrepl.py, scope webrepl_stop
static const byte fun_data_webrepl_stop[42] = {
    0x10,0x10, // prelude
    0x2a, // names: stop
    0x80,0x88,0x20,0x28,0x24,0x27,0x24, // code info
    0x12,0x07, // LOAD_GLOBAL 'os'
    0x14,0x26, // LOAD_METHOD 'dupterm'
    0x51, // LOAD_CONST_NONE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x34, // LOAD_GLOBAL 'client_s'
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x34, // LOAD_GLOBAL 'client_s'
    0x14,0x1b, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x12,0x33, // LOAD_GLOBAL 'listen_s'
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x33, // LOAD_GLOBAL 'listen_s'
    0x14,0x1b, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_webrepl_stop = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_webrepl_stop,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 42,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 42,
        .line_info = fun_data_webrepl_stop + 3,
        .line_info_top = fun_data_webrepl_stop + 10,
        .opcodes = fun_data_webrepl_stop + 10,
    },
    #endif
    #endif
};
#else
#define proto_fun_webrepl_stop fun_data_webrepl_stop[0]
#endif

// child of webrepl__lt_module_gt_
// frozen bytecode for file webrepl.py, scope webrepl_start
static const byte fun_data_webrepl_start[139] = {
    0xd7,0x81,0x01,0x30, // prelude
    0x2b,0x3b,0x2f,0x3c, // names: start, port, password, accept_handler
    0x80,0x91,0x20,0x25,0x22,0x25,0x22,0x45,0x24,0x29,0x48,0x4a,0x28,0x47,0x25,0x47,0x22,0x29,0x25,0x49, // code info
    0x12,0x2a, // LOAD_GLOBAL 'stop'
    0x34,0x00, // CALL_FUNCTION 0
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x66, // POP_JUMP_IF_FALSE 38
    0x48,0x19, // SETUP_EXCEPT 25
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x2c, // IMPORT_NAME 'webrepl_cfg'
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x13,0x2d, // LOAD_ATTR 'PASS'
    0xc3, // STORE_FAST 3
    0x12,0x3e, // LOAD_GLOBAL 'hasattr'
    0xb4, // LOAD_FAST 4
    0x10,0x2e, // LOAD_CONST_STRING 'BASE'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0xb4, // LOAD_FAST 4
    0x13,0x2e, // LOAD_ATTR 'BASE'
    0x17,0x36, // STORE_GLOBAL 'static_host'
    0x4a,0x0b, // POP_EXCEPT_JUMP 11
    0x59, // POP_TOP
    0x12,0x39, // LOAD_GLOBAL 'print'
    0x23,0x0f, // LOAD_CONST_OBJ 15
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x12,0x0b, // LOAD_GLOBAL '_webrepl'
    0x14,0x2f, // LOAD_METHOD 'password'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x1c, // LOAD_GLOBAL 'setup_conn'
    0xb0, // LOAD_FAST 0
    0xb2, // LOAD_FAST 2
    0x34,0x02, // CALL_FUNCTION 2
    0xc5, // STORE_FAST 5
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x52, // POP_JUMP_IF_FALSE 18
    0x12,0x39, // LOAD_GLOBAL 'print'
    0x23,0x10, // LOAD_CONST_OBJ 16
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x42,0x40, // JUMP 0
    0x12,0x24, // LOAD_GLOBAL 'accept_conn'
    0xb5, // LOAD_FAST 5
    0x34,0x01, // CALL_FUNCTION 1
    0x44,0x39, // POP_JUMP_IF_FALSE -7
    0x42,0x55, // JUMP 21
    0xb1, // LOAD_FAST 1
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0x12,0x39, // LOAD_GLOBAL 'print'
    0x23,0x11, // LOAD_CONST_OBJ 17
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x42,0x47, // JUMP 7
    0x12,0x39, // LOAD_GLOBAL 'print'
    0x23,0x12, // LOAD_CONST_OBJ 18
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_webrepl_start = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_webrepl_start,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 139,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 3,
        .qstr_block_name_idx = 43,
        .line_info = fun_data_webrepl_start + 8,
        .line_info_top = fun_data_webrepl_start + 28,
        .opcodes = fun_data_webrepl_start + 28,
    },
    #endif
    #endif
};
#else
#define proto_fun_webrepl_start fun_data_webrepl_start[0]
#endif

// child of webrepl__lt_module_gt_
// frozen bytecode for file webrepl.py, scope webrepl_start_foreground
static const byte fun_data_webrepl_start_foreground[19] = {
    0xaa,0x80,0x01,0x0a, // prelude
    0x30,0x3b,0x2f, // names: start_foreground, port, password
    0x80,0xad, // code info
    0x12,0x2b, // LOAD_GLOBAL 'start'
    0xb0, // LOAD_FAST 0
    0xb1, // LOAD_FAST 1
    0x51, // LOAD_CONST_NONE
    0x34,0x03, // CALL_FUNCTION 3
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_webrepl_start_foreground = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_webrepl_start_foreground,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 19,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 48,
        .line_info = fun_data_webrepl_start_foreground + 7,
        .line_info_top = fun_data_webrepl_start_foreground + 9,
        .opcodes = fun_data_webrepl_start_foreground + 9,
    },
    #endif
    #endif
};
#else
#define proto_fun_webrepl_start_foreground fun_data_webrepl_start_foreground[0]
#endif

static const mp_raw_code_t *const children_webrepl__lt_module_gt_[] = {
    (const mp_raw_code_t *)&proto_fun_webrepl_server_handshake,
    (const mp_raw_code_t *)&proto_fun_webrepl_send_html,
    (const mp_raw_code_t *)&proto_fun_webrepl_setup_conn,
    (const mp_raw_code_t *)&proto_fun_webrepl_accept_conn,
    (const mp_raw_code_t *)&proto_fun_webrepl_stop,
    (const mp_raw_code_t *)&proto_fun_webrepl_start,
    (const mp_raw_code_t *)&proto_fun_webrepl_start_foreground,
};

static const mp_raw_code_truncated_t proto_fun_webrepl__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_webrepl__lt_module_gt_,
    .children = (void *)&children_webrepl__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 150,
    .n_children = 7,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_webrepl__lt_module_gt_ + 3,
        .line_info_top = fun_data_webrepl__lt_module_gt_ + 29,
        .opcodes = fun_data_webrepl__lt_module_gt_ + 29,
    },
    #endif
    #endif
};

static const qstr_short_t const_qstr_table_data_webrepl[64] = {
    MP_QSTR_webrepl_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_binascii,
    MP_QSTR_hashlib,
    MP_QSTR_const,
    MP_QSTR_micropython,
    MP_QSTR_network,
    MP_QSTR_os,
    MP_QSTR_socket,
    MP_QSTR_sys,
    MP_QSTR_websocket,
    MP_QSTR__webrepl,
    MP_QSTR_server_handshake,
    MP_QSTR_makefile,
    MP_QSTR_rwb,
    MP_QSTR_readline,
    MP_QSTR_stdout,
    MP_QSTR_write,
    MP_QSTR_split,
    MP_QSTR_sha1,
    MP_QSTR_update,
    MP_QSTR_digest,
    MP_QSTR_b2a_base64,
    MP_QSTR_respkey_colon_,
    MP_QSTR_send,
    MP_QSTR__0x0d__0x0a__0x0d__0x0a_,
    MP_QSTR_send_html,
    MP_QSTR_close,
    MP_QSTR_setup_conn,
    MP_QSTR_setsockopt,
    MP_QSTR_SOL_SOCKET,
    MP_QSTR_SO_REUSEADDR,
    MP_QSTR_getaddrinfo,
    MP_QSTR_0_dot_0_dot_0_dot_0,
    MP_QSTR_bind,
    MP_QSTR_listen,
    MP_QSTR_accept_conn,
    MP_QSTR_accept,
    MP_QSTR_dupterm,
    MP_QSTR_rejected,
    MP_QSTR_setblocking,
    MP_QSTR_dupterm_notify,
    MP_QSTR_stop,
    MP_QSTR_start,
    MP_QSTR_webrepl_cfg,
    MP_QSTR_PASS,
    MP_QSTR_BASE,
    MP_QSTR_password,
    MP_QSTR_start_foreground,
    MP_QSTR__lt_listcomp_gt_,
    MP_QSTR_strip,
    MP_QSTR_listen_s,
    MP_QSTR_client_s,
    MP_QSTR_DEBUG,
    MP_QSTR_static_host,
    MP_QSTR_cl,
    MP_QSTR_repr,
    MP_QSTR_print,
    MP_QSTR_len,
    MP_QSTR_port,
    MP_QSTR_accept_handler,
    MP_QSTR_listen_sock,
    MP_QSTR_hasattr,
    MP_QSTR__star_,
};

// constants
static const mp_obj_str_t const_obj_webrepl_0 = {{&mp_type_str}, 213, 32, (const byte*)"\x68\x74\x74\x70\x73\x3a\x2f\x2f\x6d\x69\x63\x72\x6f\x70\x79\x74\x68\x6f\x6e\x2e\x6f\x72\x67\x2f\x77\x65\x62\x72\x65\x70\x6c\x2f"};
static const mp_obj_str_t const_obj_webrepl_1 = {{&mp_type_bytes}, 162, 2, (const byte*)"\x0d\x0a"};
static const mp_obj_str_t const_obj_webrepl_2 = {{&mp_type_bytes}, 159, 1, (const byte*)"\x3a"};
static const mp_obj_str_t const_obj_webrepl_3 = {{&mp_type_bytes}, 82, 17, (const byte*)"\x53\x65\x63\x2d\x57\x65\x62\x53\x6f\x63\x6b\x65\x74\x2d\x4b\x65\x79"};
static const mp_obj_str_t const_obj_webrepl_4 = {{&mp_type_bytes}, 211, 10, (const byte*)"\x43\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e"};
static const mp_obj_str_t const_obj_webrepl_5 = {{&mp_type_bytes}, 181, 7, (const byte*)"\x55\x70\x67\x72\x61\x64\x65"};
static const mp_obj_str_t const_obj_webrepl_6 = {{&mp_type_bytes}, 144, 9, (const byte*)"\x77\x65\x62\x73\x6f\x63\x6b\x65\x74"};
static const mp_obj_str_t const_obj_webrepl_8 = {{&mp_type_bytes}, 112, 36, (const byte*)"\x32\x35\x38\x45\x41\x46\x41\x35\x2d\x45\x39\x31\x34\x2d\x34\x37\x44\x41\x2d\x39\x35\x43\x41\x2d\x43\x35\x41\x42\x30\x44\x43\x38\x35\x42\x31\x31"};
static const mp_obj_str_t const_obj_webrepl_9 = {{&mp_type_bytes}, 133, 97, (const byte*)"\x48\x54\x54\x50\x2f\x31\x2e\x31\x20\x31\x30\x31\x20\x53\x77\x69\x74\x63\x68\x69\x6e\x67\x20\x50\x72\x6f\x74\x6f\x63\x6f\x6c\x73\x0d\x0a\x55\x70\x67\x72\x61\x64\x65\x3a\x20\x77\x65\x62\x73\x6f\x63\x6b\x65\x74\x0d\x0a\x43\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x3a\x20\x55\x70\x67\x72\x61\x64\x65\x0d\x0a\x53\x65\x63\x2d\x57\x65\x62\x53\x6f\x63\x6b\x65\x74\x2d\x41\x63\x63\x65\x70\x74\x3a\x20"};
static const mp_obj_str_t const_obj_webrepl_10 = {{&mp_type_bytes}, 4, 31, (const byte*)"\x48\x54\x54\x50\x2f\x31\x2e\x30\x20\x32\x30\x30\x20\x4f\x4b\x0d\x0a\x0d\x0a\x3c\x62\x61\x73\x65\x20\x68\x72\x65\x66\x3d\x22"};
static const mp_obj_str_t const_obj_webrepl_11 = {{&mp_type_bytes}, 107, 55, (const byte*)"\x22\x3e\x3c\x2f\x62\x61\x73\x65\x3e\x0d\x0a\x3c\x73\x63\x72\x69\x70\x74\x20\x73\x72\x63\x3d\x22\x77\x65\x62\x72\x65\x70\x6c\x5f\x63\x6f\x6e\x74\x65\x6e\x74\x2e\x6a\x73\x22\x3e\x3c\x2f\x73\x63\x72\x69\x70\x74\x3e\x0d\x0a"};
static const mp_obj_str_t const_obj_webrepl_12 = {{&mp_type_str}, 223, 35, (const byte*)"\x0a\x43\x6f\x6e\x63\x75\x72\x72\x65\x6e\x74\x20\x57\x65\x62\x52\x45\x50\x4c\x20\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x6d"};
static const mp_obj_str_t const_obj_webrepl_13 = {{&mp_type_str}, 142, 25, (const byte*)"\x0a\x57\x65\x62\x52\x45\x50\x4c\x20\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x6d\x3a"};
static const mp_obj_str_t const_obj_webrepl_15 = {{&mp_type_str}, 70, 53, (const byte*)"\x57\x65\x62\x52\x45\x50\x4c\x20\x69\x73\x20\x6e\x6f\x74\x20\x63\x6f\x6e\x66\x69\x67\x75\x72\x65\x64\x2c\x20\x72\x75\x6e\x20\x27\x69\x6d\x70\x6f\x72\x74\x20\x77\x65\x62\x72\x65\x70\x6c\x5f\x73\x65\x74\x75\x70\x27"};
static const mp_obj_str_t const_obj_webrepl_16 = {{&mp_type_str}, 129, 35, (const byte*)"\x53\x74\x61\x72\x74\x69\x6e\x67\x20\x77\x65\x62\x72\x65\x70\x6c\x20\x69\x6e\x20\x66\x6f\x72\x65\x67\x72\x6f\x75\x6e\x64\x20\x6d\x6f\x64\x65"};
static const mp_obj_str_t const_obj_webrepl_17 = {{&mp_type_str}, 232, 30, (const byte*)"\x53\x74\x61\x72\x74\x65\x64\x20\x77\x65\x62\x72\x65\x70\x6c\x20\x69\x6e\x20\x6e\x6f\x72\x6d\x61\x6c\x20\x6d\x6f\x64\x65"};
static const mp_obj_str_t const_obj_webrepl_18 = {{&mp_type_str}, 213, 39, (const byte*)"\x53\x74\x61\x72\x74\x65\x64\x20\x77\x65\x62\x72\x65\x70\x6c\x20\x69\x6e\x20\x6d\x61\x6e\x75\x61\x6c\x20\x6f\x76\x65\x72\x72\x69\x64\x65\x20\x6d\x6f\x64\x65"};

// constant table
static const mp_rom_obj_t const_obj_table_data_webrepl[19] = {
    MP_ROM_PTR(&const_obj_webrepl_0),
    MP_ROM_PTR(&const_obj_webrepl_1),
    MP_ROM_PTR(&const_obj_webrepl_2),
    MP_ROM_PTR(&const_obj_webrepl_3),
    MP_ROM_PTR(&const_obj_webrepl_4),
    MP_ROM_PTR(&const_obj_webrepl_5),
    MP_ROM_PTR(&const_obj_webrepl_6),
    MP_ROM_QSTR(MP_QSTR_Sec_hyphen_WebSocket_hyphen_Key_colon_),
    MP_ROM_PTR(&const_obj_webrepl_8),
    MP_ROM_PTR(&const_obj_webrepl_9),
    MP_ROM_PTR(&const_obj_webrepl_10),
    MP_ROM_PTR(&const_obj_webrepl_11),
    MP_ROM_PTR(&const_obj_webrepl_12),
    MP_ROM_PTR(&const_obj_webrepl_13),
    MP_ROM_QSTR(MP_QSTR_dupterm_notify),
    MP_ROM_PTR(&const_obj_webrepl_15),
    MP_ROM_PTR(&const_obj_webrepl_16),
    MP_ROM_PTR(&const_obj_webrepl_17),
    MP_ROM_PTR(&const_obj_webrepl_18),
};

static const mp_frozen_module_t frozen_module_webrepl = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_webrepl,
        .obj_table = (mp_obj_t *)&const_obj_table_data_webrepl,
    },
    .proto_fun = &proto_fun_webrepl__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module requests___init__
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/requests/__init__.mpy
// - frozen file name: requests/__init__.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file requests/__init__.py, scope requests___init____lt_module_gt_
static const byte fun_data_requests___init____lt_module_gt_[79] = {
    0x30,0x24, // prelude
    0x01, // names: <module>
    0x66,0x89,0x20,0x8e,0xa4,0x64,0x20,0x64,0x20,0x64,0x20,0x64,0x20,0x64,0x20,0x64,0x20, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'socket'
    0x16,0x02, // STORE_NAME 'socket'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x03, // LOAD_CONST_STRING 'Response'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x03, // STORE_NAME 'Response'
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x52, // LOAD_CONST_TRUE
    0x2a,0x07, // BUILD_TUPLE 7
    0x53, // LOAD_NULL
    0x33,0x01, // MAKE_FUNCTION_DEFARGS 1
    0x16,0x05, // STORE_NAME 'request'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x33, // STORE_NAME 'head'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x27, // STORE_NAME 'get'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x35, // STORE_NAME 'post'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x37, // STORE_NAME 'put'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x39, // STORE_NAME 'patch'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x3b, // STORE_NAME 'delete'
    0x10,0x04, // LOAD_CONST_STRING '0.10.2'
    0x16,0x45, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of requests___init____lt_module_gt_
// frozen bytecode for file requests/__init__.py, scope requests___init___Response
static const byte fun_data_requests___init___Response[51] = {
    0x08,0x16, // prelude
    0x03, // names: Response
    0x68,0x20,0x64,0x40,0x64,0x60,0x88,0x0a,0x68,0x20, // code info
    0x11,0x46, // LOAD_NAME '__name__'
    0x16,0x47, // STORE_NAME '__module__'
    0x10,0x03, // LOAD_CONST_STRING 'Response'
    0x16,0x48, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x3d, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x26, // STORE_NAME 'close'
    0x11,0x49, // LOAD_NAME 'property'
    0x32,0x02, // MAKE_FUNCTION 2
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x41, // STORE_NAME 'content'
    0x11,0x49, // LOAD_NAME 'property'
    0x32,0x03, // MAKE_FUNCTION 3
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x43, // STORE_NAME 'text'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x23, // STORE_NAME 'json'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of requests___init___Response
// frozen bytecode for file requests/__init__.py, scope requests___init___Response___init__
static const byte fun_data_requests___init___Response___init__[24] = {
    0x1a,0x0e, // prelude
    0x3d,0x58,0x59, // names: __init__, self, f
    0x60,0x40,0x24,0x25, // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x3e, // STORE_ATTR 'raw'
    0x10,0x2c, // LOAD_CONST_STRING 'utf-8'
    0xb0, // LOAD_FAST 0
    0x18,0x3f, // STORE_ATTR 'encoding'
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x40, // STORE_ATTR '_cached'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_requests___init___Response___init__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_requests___init___Response___init__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 24,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 61,
        .line_info = fun_data_requests___init___Response___init__ + 5,
        .line_info_top = fun_data_requests___init___Response___init__ + 9,
        .opcodes = fun_data_requests___init___Response___init__ + 9,
    },
    #endif
    #endif
};
#else
#define proto_fun_requests___init___Response___init__ fun_data_requests___init___Response___init__[0]
#endif

// child of requests___init___Response
// frozen bytecode for file requests/__init__.py, scope requests___init___Response_close
static const byte fun_data_requests___init___Response_close[32] = {
    0x11,0x0e, // prelude
    0x26,0x58, // names: close, self
    0x80,0x0a,0x25,0x28,0x24, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x3e, // LOAD_ATTR 'raw'
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0xb0, // LOAD_FAST 0
    0x13,0x3e, // LOAD_ATTR 'raw'
    0x14,0x26, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x3e, // STORE_ATTR 'raw'
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x40, // STORE_ATTR '_cached'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_requests___init___Response_close = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_requests___init___Response_close,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 32,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 38,
        .line_info = fun_data_requests___init___Response_close + 4,
        .line_info_top = fun_data_requests___init___Response_close + 9,
        .opcodes = fun_data_requests___init___Response_close + 9,
    },
    #endif
    #endif
};
#else
#define proto_fun_requests___init___Response_close fun_data_requests___init___Response_close[0]
#endif

// child of requests___init___Response
// frozen bytecode for file requests/__init__.py, scope requests___init___Response_content
static const byte fun_data_requests___init___Response_content[48] = {
    0x2d,0x12, // prelude
    0x41,0x58, // names: content, self
    0x80,0x11,0x27,0x22,0x4b,0x28,0x25, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x40, // LOAD_ATTR '_cached'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x5a, // POP_JUMP_IF_FALSE 26
    0x49,0x0b, // SETUP_FINALLY 11
    0xb0, // LOAD_FAST 0
    0x13,0x3e, // LOAD_ATTR 'raw'
    0x14,0x42, // LOAD_METHOD 'read'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x18,0x40, // STORE_ATTR '_cached'
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x13,0x3e, // LOAD_ATTR 'raw'
    0x14,0x26, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x3e, // STORE_ATTR 'raw'
    0x5d, // END_FINALLY
    0xb0, // LOAD_FAST 0
    0x13,0x40, // LOAD_ATTR '_cached'
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_requests___init___Response_content = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_requests___init___Response_content,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 48,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 65,
        .line_info = fun_data_requests___init___Response_content + 4,
        .line_info_top = fun_data_requests___init___Response_content + 11,
        .opcodes = fun_data_requests___init___Response_content + 11,
    },
    #endif
    #endif
};
#else
#define proto_fun_requests___init___Response_content fun_data_requests___init___Response_content[0]
#endif

// child of requests___init___Response
// frozen bytecode for file requests/__init__.py, scope requests___init___Response_text
static const byte fun_data_requests___init___Response_text[17] = {
    0x19,0x08, // prelude
    0x43,0x58, // names: text, self
    0x80,0x1b, // code info
    0x12,0x52, // LOAD_GLOBAL 'str'
    0xb0, // LOAD_FAST 0
    0x13,0x41, // LOAD_ATTR 'content'
    0xb0, // LOAD_FAST 0
    0x13,0x3f, // LOAD_ATTR 'encoding'
    0x34,0x02, // CALL_FUNCTION 2
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_requests___init___Response_text = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_requests___init___Response_text,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 17,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 67,
        .line_info = fun_data_requests___init___Response_text + 4,
        .line_info_top = fun_data_requests___init___Response_text + 6,
        .opcodes = fun_data_requests___init___Response_text + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_requests___init___Response_text fun_data_requests___init___Response_text[0]
#endif

// child of requests___init___Response
// frozen bytecode for file requests/__init__.py, scope requests___init___Response_json
static const byte fun_data_requests___init___Response_json[21] = {
    0x21,0x0a, // prelude
    0x23,0x58, // names: json, self
    0x80,0x1e,0x45, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x23, // IMPORT_NAME 'json'
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x14,0x44, // LOAD_METHOD 'loads'
    0xb0, // LOAD_FAST 0
    0x13,0x41, // LOAD_ATTR 'content'
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_requests___init___Response_json = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_requests___init___Response_json,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 21,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 35,
        .line_info = fun_data_requests___init___Response_json + 4,
        .line_info_top = fun_data_requests___init___Response_json + 7,
        .opcodes = fun_data_requests___init___Response_json + 7,
    },
    #endif
    #endif
};
#else
#define proto_fun_requests___init___Response_json fun_data_requests___init___Response_json[0]
#endif

static const mp_raw_code_t *const children_requests___init___Response[] = {
    (const mp_raw_code_t *)&proto_fun_requests___init___Response___init__,
    (const mp_raw_code_t *)&proto_fun_requests___init___Response_close,
    (const mp_raw_code_t *)&proto_fun_requests___init___Response_content,
    (const mp_raw_code_t *)&proto_fun_requests___init___Response_text,
    (const mp_raw_code_t *)&proto_fun_requests___init___Response_json,
};

static const mp_raw_code_truncated_t proto_fun_requests___init___Response = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_requests___init___Response,
    .children = (void *)&children_requests___init___Response,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 51,
    .n_children = 5,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 3,
        .line_info = fun_data_requests___init___Response + 3,
        .line_info_top = fun_data_requests___init___Response + 13,
        .opcodes = fun_data_requests___init___Response + 13,
    },
    #endif
    #endif
};

// child of requests___init____lt_module_gt_
// frozen bytecode for file requests/__init__.py, scope requests___init___request
static const byte fun_data_requests___init___request[1150] = {
    0xcd,0xa1,0x85,0x01,0xf6,0x02, // prelude
    0x05,0x4a,0x4b,0x4c,0x23,0x32,0x4d,0x4e,0x4f,0x50, // names: request, method, url, data, json, headers, stream, auth, timeout, parse_headers
    0x80,0x2e,0x25,0x45,0x46,0x22,0x57,0x26,0x45,0x25,0x29,0x32,0x4b,0x22,0x5a,0x2f,0x27,0x26,0x27,0x26,0x46,0x47,0x49,0x27,0x2f,0x48,0x31,0x46,0x23,0x26,0x44,0x54,0x66,0x48,0x23,0x2b,0x26,0x2c,0x28,0x2f,0x4f,0x27,0x46,0x26,0x28,0x4c,0x46,0x27,0x46,0x23,0x23,0x2e,0x28,0x27,0x4f,0x27,0x66,0x26,0x29,0x29,0x2b,0x4b,0x49,0x24,0x24,0x2d,0x26,0x30,0x29,0x2b,0x4b,0x26,0x4d,0x48,0x48,0x2a,0x4a,0x2a,0x2a,0x24,0x2a,0x2a,0x20,0x28,0x2b,0x43,0x2a,0x27,0x33,0x3f,0x36,0x50,0x2c,0x25,0x22,0x25,0x2a,0x2f,0x4d,0x54,0x27,0x42,0x23,0x47,0x29,0x30,0x4c,0x4d,0x28,0x26,0x26,0x27,0x26, // code info
    0xb4, // LOAD_FAST 4
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0x2c,0x00, // BUILD_MAP 0
    0xc4, // STORE_FAST 4
    0x42,0x46, // JUMP 6
    0xb4, // LOAD_FAST 4
    0x14,0x06, // LOAD_METHOD 'copy'
    0x36,0x00, // CALL_METHOD 0
    0xc4, // STORE_FAST 4
    0x51, // LOAD_CONST_NONE
    0xc9, // STORE_FAST 9
    0xb2, // LOAD_FAST 2
    0x46,0x13, // JUMP_IF_FALSE_OR_POP 19
    0x12,0x51, // LOAD_GLOBAL 'getattr'
    0xb2, // LOAD_FAST 2
    0x10,0x07, // LOAD_CONST_STRING '__next__'
    0x51, // LOAD_CONST_NONE
    0x34,0x03, // CALL_FUNCTION 3
    0x46,0x09, // JUMP_IF_FALSE_OR_POP 9
    0x12,0x51, // LOAD_GLOBAL 'getattr'
    0xb2, // LOAD_FAST 2
    0x10,0x08, // LOAD_CONST_STRING '__len__'
    0x51, // LOAD_CONST_NONE
    0x34,0x03, // CALL_FUNCTION 3
    0xd3, // UNARY_OP 3 <not>
    0xca, // STORE_FAST 10
    0xb6, // LOAD_FAST 6
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x70, // POP_JUMP_IF_FALSE 48
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x09, // IMPORT_NAME 'binascii'
    0xcb, // STORE_FAST 11
    0xb6, // LOAD_FAST 6
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xcc, // STORE_FAST 12
    0xcd, // STORE_FAST 13
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x14,0x0a, // LOAD_METHOD 'format'
    0xbc, // LOAD_FAST 12
    0xbd, // LOAD_FAST 13
    0x36,0x02, // CALL_METHOD 2
    0xce, // STORE_FAST 14
    0x12,0x52, // LOAD_GLOBAL 'str'
    0xbb, // LOAD_FAST 11
    0x14,0x0b, // LOAD_METHOD 'b2a_base64'
    0xbe, // LOAD_FAST 14
    0x36,0x01, // CALL_METHOD 1
    0x51, // LOAD_CONST_NONE
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x10,0x0c, // LOAD_CONST_STRING 'ascii'
    0x34,0x02, // CALL_FUNCTION 2
    0xce, // STORE_FAST 14
    0x10,0x0d, // LOAD_CONST_STRING 'Basic {}'
    0x14,0x0a, // LOAD_METHOD 'format'
    0xbe, // LOAD_FAST 14
    0x36,0x01, // CALL_METHOD 1
    0xb4, // LOAD_FAST 4
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x56, // STORE_SUBSCR
    0x48,0x13, // SETUP_EXCEPT 19
    0xb1, // LOAD_FAST 1
    0x14,0x0e, // LOAD_METHOD 'split'
    0x10,0x0f, // LOAD_CONST_STRING '/'
    0x83, // LOAD_CONST_SMALL_INT 3
    0x36,0x02, // CALL_METHOD 2
    0x30,0x04, // UNPACK_SEQUENCE 4
    0xcf, // STORE_FAST 15
    0x26,0x10, // STORE_FAST_N 16
    0x26,0x11, // STORE_FAST_N 17
    0x26,0x12, // STORE_FAST_N 18
    0x4a,0x1d, // POP_EXCEPT_JUMP 29
    0x57, // DUP_TOP
    0x12,0x53, // LOAD_GLOBAL 'ValueError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x14,0x0e, // LOAD_METHOD 'split'
    0x10,0x0f, // LOAD_CONST_STRING '/'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x36,0x02, // CALL_METHOD 2
    0x30,0x03, // UNPACK_SEQUENCE 3
    0xcf, // STORE_FAST 15
    0x26,0x10, // STORE_FAST_N 16
    0x26,0x11, // STORE_FAST_N 17
    0x10,0x10, // LOAD_CONST_STRING ''
    0x26,0x12, // STORE_FAST_N 18
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xbf, // LOAD_FAST 15
    0x10,0x11, // LOAD_CONST_STRING 'http:'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x22,0x80,0x50, // LOAD_CONST_SMALL_INT 80
    0x26,0x13, // STORE_FAST_N 19
    0x42,0x5c, // JUMP 28
    0xbf, // LOAD_FAST 15
    0x10,0x12, // LOAD_CONST_STRING 'https:'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4d, // POP_JUMP_IF_FALSE 13
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x13, // IMPORT_NAME 'tls'
    0x26,0x14, // STORE_FAST_N 20
    0x22,0x83,0x3b, // LOAD_CONST_SMALL_INT 443
    0x26,0x13, // STORE_FAST_N 19
    0x42,0x49, // JUMP 9
    0x12,0x53, // LOAD_GLOBAL 'ValueError'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0xbf, // LOAD_FAST 15
    0xf2, // BINARY_OP 27 __add__
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x10,0x14, // LOAD_CONST_STRING ':'
    0x24,0x11, // LOAD_FAST_N 17
    0xdd, // BINARY_OP 6 <in>
    0x44,0x57, // POP_JUMP_IF_FALSE 23
    0x24,0x11, // LOAD_FAST_N 17
    0x14,0x0e, // LOAD_METHOD 'split'
    0x10,0x14, // LOAD_CONST_STRING ':'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x02, // CALL_METHOD 2
    0x30,0x02, // UNPACK_SEQUENCE 2
    0x26,0x11, // STORE_FAST_N 17
    0x26,0x13, // STORE_FAST_N 19
    0x12,0x54, // LOAD_GLOBAL 'int'
    0x24,0x13, // LOAD_FAST_N 19
    0x34,0x01, // CALL_FUNCTION 1
    0x26,0x13, // STORE_FAST_N 19
    0x12,0x02, // LOAD_GLOBAL 'socket'
    0x14,0x15, // LOAD_METHOD 'getaddrinfo'
    0x24,0x11, // LOAD_FAST_N 17
    0x24,0x13, // LOAD_FAST_N 19
    0x80, // LOAD_CONST_SMALL_INT 0
    0x12,0x02, // LOAD_GLOBAL 'socket'
    0x13,0x16, // LOAD_ATTR 'SOCK_STREAM'
    0x36,0x04, // CALL_METHOD 4
    0x26,0x15, // STORE_FAST_N 21
    0x24,0x15, // LOAD_FAST_N 21
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x26,0x15, // STORE_FAST_N 21
    0x51, // LOAD_CONST_NONE
    0x26,0x16, // STORE_FAST_N 22
    0xb8, // LOAD_FAST 8
    0x50, // LOAD_CONST_FALSE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x2c,0x00, // BUILD_MAP 0
    0x26,0x16, // STORE_FAST_N 22
    0x12,0x02, // LOAD_GLOBAL 'socket'
    0x14,0x02, // LOAD_METHOD 'socket'
    0x24,0x15, // LOAD_FAST_N 21
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x12,0x02, // LOAD_GLOBAL 'socket'
    0x13,0x16, // LOAD_ATTR 'SOCK_STREAM'
    0x24,0x15, // LOAD_FAST_N 21
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x36,0x03, // CALL_METHOD 3
    0x26,0x17, // STORE_FAST_N 23
    0xb7, // LOAD_FAST 7
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x17, // LOAD_METHOD 'settimeout'
    0xb7, // LOAD_FAST 7
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x48,0xea,0x04, // SETUP_EXCEPT 618
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x18, // LOAD_METHOD 'connect'
    0x24,0x15, // LOAD_FAST_N 21
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xbf, // LOAD_FAST 15
    0x10,0x12, // LOAD_CONST_STRING 'https:'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x63, // POP_JUMP_IF_FALSE 35
    0x24,0x14, // LOAD_FAST_N 20
    0x14,0x19, // LOAD_METHOD 'SSLContext'
    0x24,0x14, // LOAD_FAST_N 20
    0x13,0x1a, // LOAD_ATTR 'PROTOCOL_TLS_CLIENT'
    0x36,0x01, // CALL_METHOD 1
    0x26,0x18, // STORE_FAST_N 24
    0x24,0x14, // LOAD_FAST_N 20
    0x13,0x1b, // LOAD_ATTR 'CERT_NONE'
    0x24,0x18, // LOAD_FAST_N 24
    0x18,0x1c, // STORE_ATTR 'verify_mode'
    0x24,0x18, // LOAD_FAST_N 24
    0x14,0x1d, // LOAD_METHOD 'wrap_socket'
    0x24,0x17, // LOAD_FAST_N 23
    0x10,0x1e, // LOAD_CONST_STRING 'server_hostname'
    0x24,0x11, // LOAD_FAST_N 17
    0x36,0x82,0x01, // CALL_METHOD 257
    0x26,0x17, // STORE_FAST_N 23
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1f, // LOAD_METHOD 'write'
    0x23,0x03, // LOAD_CONST_OBJ 3
    0xb0, // LOAD_FAST 0
    0x24,0x12, // LOAD_FAST_N 18
    0x2a,0x02, // BUILD_TUPLE 2
    0xf8, // BINARY_OP 33 __mod__
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x10,0x20, // LOAD_CONST_STRING 'Host'
    0xb4, // LOAD_FAST 4
    0xdd, // BINARY_OP 6 <in>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x24,0x11, // LOAD_FAST_N 17
    0xb4, // LOAD_FAST 4
    0x10,0x20, // LOAD_CONST_STRING 'Host'
    0x56, // STORE_SUBSCR
    0xb3, // LOAD_FAST 3
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x67, // POP_JUMP_IF_FALSE 39
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x21, // LOAD_GLOBAL 'AssertionError'
    0x65, // RAISE_OBJ
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x22, // LOAD_CONST_STRING 'dumps'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x23, // IMPORT_NAME 'json'
    0x1c,0x22, // IMPORT_FROM 'dumps'
    0x26,0x19, // STORE_FAST_N 25
    0x59, // POP_TOP
    0x24,0x19, // LOAD_FAST_N 25
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0xc2, // STORE_FAST 2
    0x23,0x04, // LOAD_CONST_OBJ 4
    0xb4, // LOAD_FAST 4
    0xdd, // BINARY_OP 6 <in>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x23,0x05, // LOAD_CONST_OBJ 5
    0xb4, // LOAD_FAST 4
    0x23,0x04, // LOAD_CONST_OBJ 4
    0x56, // STORE_SUBSCR
    0xb2, // LOAD_FAST 2
    0x44,0x6f, // POP_JUMP_IF_FALSE 47
    0xba, // LOAD_FAST 10
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0x23,0x06, // LOAD_CONST_OBJ 6
    0xb4, // LOAD_FAST 4
    0xdd, // BINARY_OP 6 <in>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x4d, // POP_JUMP_IF_FALSE 13
    0x23,0x07, // LOAD_CONST_OBJ 7
    0xb4, // LOAD_FAST 4
    0xdd, // BINARY_OP 6 <in>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x10,0x24, // LOAD_CONST_STRING 'chunked'
    0xb4, // LOAD_FAST 4
    0x23,0x06, // LOAD_CONST_OBJ 6
    0x56, // STORE_SUBSCR
    0x42,0x56, // JUMP 22
    0x23,0x07, // LOAD_CONST_OBJ 7
    0xb4, // LOAD_FAST 4
    0xdd, // BINARY_OP 6 <in>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x12,0x52, // LOAD_GLOBAL 'str'
    0x12,0x55, // LOAD_GLOBAL 'len'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0xb4, // LOAD_FAST 4
    0x23,0x07, // LOAD_CONST_OBJ 7
    0x56, // STORE_SUBSCR
    0x42,0x40, // JUMP 0
    0x10,0x25, // LOAD_CONST_STRING 'Connection'
    0xb4, // LOAD_FAST 4
    0xdd, // BINARY_OP 6 <in>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x10,0x26, // LOAD_CONST_STRING 'close'
    0xb4, // LOAD_FAST 4
    0x10,0x25, // LOAD_CONST_STRING 'Connection'
    0x56, // STORE_SUBSCR
    0xb4, // LOAD_FAST 4
    0x5f, // GET_ITER_STACK
    0x4b,0x2a, // FOR_ITER 42
    0x26,0x1a, // STORE_FAST_N 26
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1f, // LOAD_METHOD 'write'
    0x24,0x1a, // LOAD_FAST_N 26
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1f, // LOAD_METHOD 'write'
    0x23,0x08, // LOAD_CONST_OBJ 8
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1f, // LOAD_METHOD 'write'
    0xb4, // LOAD_FAST 4
    0x24,0x1a, // LOAD_FAST_N 26
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1f, // LOAD_METHOD 'write'
    0x23,0x09, // LOAD_CONST_OBJ 9
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x14, // JUMP -44
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1f, // LOAD_METHOD 'write'
    0x23,0x09, // LOAD_CONST_OBJ 9
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb2, // LOAD_FAST 2
    0x44,0xe1,0x80, // POP_JUMP_IF_FALSE 97
    0xba, // LOAD_FAST 10
    0x44,0xd5,0x80, // POP_JUMP_IF_FALSE 85
    0xb4, // LOAD_FAST 4
    0x14,0x27, // LOAD_METHOD 'get'
    0x23,0x06, // LOAD_CONST_OBJ 6
    0x51, // LOAD_CONST_NONE
    0x36,0x02, // CALL_METHOD 2
    0x10,0x24, // LOAD_CONST_STRING 'chunked'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x75, // POP_JUMP_IF_FALSE 53
    0xb2, // LOAD_FAST 2
    0x5f, // GET_ITER_STACK
    0x4b,0x26, // FOR_ITER 38
    0x26,0x1b, // STORE_FAST_N 27
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1f, // LOAD_METHOD 'write'
    0x23,0x0a, // LOAD_CONST_OBJ 10
    0x12,0x55, // LOAD_GLOBAL 'len'
    0x24,0x1b, // LOAD_FAST_N 27
    0x34,0x01, // CALL_FUNCTION 1
    0xf8, // BINARY_OP 33 __mod__
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1f, // LOAD_METHOD 'write'
    0x24,0x1b, // LOAD_FAST_N 27
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1f, // LOAD_METHOD 'write'
    0x23,0x09, // LOAD_CONST_OBJ 9
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x18, // JUMP -40
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1f, // LOAD_METHOD 'write'
    0x10,0x28, // LOAD_CONST_STRING '0\r\n\r\n'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x51, // JUMP 17
    0xb2, // LOAD_FAST 2
    0x5f, // GET_ITER_STACK
    0x4b,0x0d, // FOR_ITER 13
    0x26,0x1b, // STORE_FAST_N 27
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1f, // LOAD_METHOD 'write'
    0x24,0x1b, // LOAD_FAST_N 27
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x31, // JUMP -15
    0x42,0x48, // JUMP 8
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x1f, // LOAD_METHOD 'write'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x29, // LOAD_METHOD 'readline'
    0x36,0x00, // CALL_METHOD 0
    0x26,0x1c, // STORE_FAST_N 28
    0x24,0x1c, // LOAD_FAST_N 28
    0x14,0x0e, // LOAD_METHOD 'split'
    0x51, // LOAD_CONST_NONE
    0x82, // LOAD_CONST_SMALL_INT 2
    0x36,0x02, // CALL_METHOD 2
    0x26,0x1c, // STORE_FAST_N 28
    0x12,0x55, // LOAD_GLOBAL 'len'
    0x24,0x1c, // LOAD_FAST_N 28
    0x34,0x01, // CALL_FUNCTION 1
    0x82, // LOAD_CONST_SMALL_INT 2
    0xd7, // BINARY_OP 0 __lt__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0x12,0x53, // LOAD_GLOBAL 'ValueError'
    0x23,0x0b, // LOAD_CONST_OBJ 11
    0x24,0x1c, // LOAD_FAST_N 28
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x12,0x54, // LOAD_GLOBAL 'int'
    0x24,0x1c, // LOAD_FAST_N 28
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x34,0x01, // CALL_FUNCTION 1
    0x26,0x1d, // STORE_FAST_N 29
    0x10,0x10, // LOAD_CONST_STRING ''
    0x26,0x1e, // STORE_FAST_N 30
    0x12,0x55, // LOAD_GLOBAL 'len'
    0x24,0x1c, // LOAD_FAST_N 28
    0x34,0x01, // CALL_FUNCTION 1
    0x82, // LOAD_CONST_SMALL_INT 2
    0xd8, // BINARY_OP 1 __gt__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0x24,0x1c, // LOAD_FAST_N 28
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x14,0x2a, // LOAD_METHOD 'rstrip'
    0x36,0x00, // CALL_METHOD 0
    0x26,0x1e, // STORE_FAST_N 30
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x29, // LOAD_METHOD 'readline'
    0x36,0x00, // CALL_METHOD 0
    0x26,0x1c, // STORE_FAST_N 28
    0x24,0x1c, // LOAD_FAST_N 28
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x24,0x1c, // LOAD_FAST_N 28
    0x23,0x09, // LOAD_CONST_OBJ 9
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x42,0xb2,0x81, // JUMP 178
    0x24,0x1c, // LOAD_FAST_N 28
    0x14,0x2b, // LOAD_METHOD 'startswith'
    0x23,0x0c, // LOAD_CONST_OBJ 12
    0x36,0x01, // CALL_METHOD 1
    0x44,0x5a, // POP_JUMP_IF_FALSE 26
    0x23,0x0d, // LOAD_CONST_OBJ 13
    0x24,0x1c, // LOAD_FAST_N 28
    0xdd, // BINARY_OP 6 <in>
    0x44,0x50, // POP_JUMP_IF_FALSE 16
    0x12,0x53, // LOAD_GLOBAL 'ValueError'
    0x23,0x0e, // LOAD_CONST_OBJ 14
    0x12,0x52, // LOAD_GLOBAL 'str'
    0x24,0x1c, // LOAD_FAST_N 28
    0x10,0x2c, // LOAD_CONST_STRING 'utf-8'
    0x34,0x02, // CALL_FUNCTION 2
    0xf2, // BINARY_OP 27 __add__
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x42,0xd1,0x80, // JUMP 81
    0x24,0x1c, // LOAD_FAST_N 28
    0x14,0x2b, // LOAD_METHOD 'startswith'
    0x23,0x0f, // LOAD_CONST_OBJ 15
    0x36,0x01, // CALL_METHOD 1
    0x44,0xc6,0x80, // POP_JUMP_IF_FALSE 70
    0x22,0x81,0x48, // LOAD_CONST_SMALL_INT 200
    0x24,0x1d, // LOAD_FAST_N 29
    0x57, // DUP_TOP
    0x5b, // ROT_THREE
    0xda, // BINARY_OP 3 __le__
    0x46,0x06, // JUMP_IF_FALSE_OR_POP 6
    0x22,0x82,0x2b, // LOAD_CONST_SMALL_INT 299
    0xda, // BINARY_OP 3 __le__
    0x42,0x42, // JUMP 2
    0x5a, // ROT_TWO
    0x59, // POP_TOP
    0x43,0x72, // POP_JUMP_IF_TRUE 50
    0x24,0x1d, // LOAD_FAST_N 29
    0x22,0x82,0x2d, // LOAD_CONST_SMALL_INT 301
    0x22,0x82,0x2e, // LOAD_CONST_SMALL_INT 302
    0x22,0x82,0x2f, // LOAD_CONST_SMALL_INT 303
    0x22,0x82,0x33, // LOAD_CONST_SMALL_INT 307
    0x22,0x82,0x34, // LOAD_CONST_SMALL_INT 308
    0x2b,0x05, // BUILD_LIST 5
    0xdd, // BINARY_OP 6 <in>
    0x44,0x50, // POP_JUMP_IF_FALSE 16
    0x12,0x52, // LOAD_GLOBAL 'str'
    0x24,0x1c, // LOAD_FAST_N 28
    0x8a, // LOAD_CONST_SMALL_INT 10
    0x7e, // LOAD_CONST_SMALL_INT -2
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x10,0x2c, // LOAD_CONST_STRING 'utf-8'
    0x34,0x02, // CALL_FUNCTION 2
    0xc9, // STORE_FAST 9
    0x42,0x4a, // JUMP 10
    0x12,0x56, // LOAD_GLOBAL 'NotImplementedError'
    0x23,0x10, // LOAD_CONST_OBJ 16
    0x24,0x1d, // LOAD_FAST_N 29
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x42,0x40, // JUMP 0
    0xb8, // LOAD_FAST 8
    0x50, // LOAD_CONST_FALSE
    0xde, // BINARY_OP 7 <is>
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x42,0x73, // JUMP 51
    0xb8, // LOAD_FAST 8
    0x52, // LOAD_CONST_TRUE
    0xde, // BINARY_OP 7 <is>
    0x44,0x66, // POP_JUMP_IF_FALSE 38
    0x12,0x52, // LOAD_GLOBAL 'str'
    0x24,0x1c, // LOAD_FAST_N 28
    0x10,0x2c, // LOAD_CONST_STRING 'utf-8'
    0x34,0x02, // CALL_FUNCTION 2
    0x26,0x1c, // STORE_FAST_N 28
    0x24,0x1c, // LOAD_FAST_N 28
    0x14,0x0e, // LOAD_METHOD 'split'
    0x10,0x14, // LOAD_CONST_STRING ':'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x02, // CALL_METHOD 2
    0x30,0x02, // UNPACK_SEQUENCE 2
    0x26,0x1a, // STORE_FAST_N 26
    0x26,0x1f, // STORE_FAST_N 31
    0x24,0x1f, // LOAD_FAST_N 31
    0x14,0x2d, // LOAD_METHOD 'strip'
    0x36,0x00, // CALL_METHOD 0
    0x24,0x16, // LOAD_FAST_N 22
    0x24,0x1a, // LOAD_FAST_N 26
    0x56, // STORE_SUBSCR
    0x42,0x48, // JUMP 8
    0xb8, // LOAD_FAST 8
    0x24,0x1c, // LOAD_FAST_N 28
    0x24,0x16, // LOAD_FAST_N 22
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x42,0xb8,0x7e, // JUMP -200
    0x4a,0x10, // POP_EXCEPT_JUMP 16
    0x57, // DUP_TOP
    0x12,0x57, // LOAD_GLOBAL 'OSError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0x59, // POP_TOP
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x26, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x64, // RAISE_LAST
    0x5d, // END_FINALLY
    0xb9, // LOAD_FAST 9
    0x44,0x79, // POP_JUMP_IF_FALSE 57
    0x24,0x17, // LOAD_FAST_N 23
    0x14,0x26, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb4, // LOAD_FAST 4
    0x14,0x2e, // LOAD_METHOD 'pop'
    0x10,0x20, // LOAD_CONST_STRING 'Host'
    0x51, // LOAD_CONST_NONE
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x24,0x1d, // LOAD_FAST_N 29
    0x22,0x82,0x2d, // LOAD_CONST_SMALL_INT 301
    0x22,0x82,0x2e, // LOAD_CONST_SMALL_INT 302
    0x22,0x82,0x2f, // LOAD_CONST_SMALL_INT 303
    0x2b,0x03, // BUILD_LIST 3
    0xdd, // BINARY_OP 6 <in>
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x12,0x05, // LOAD_GLOBAL 'request'
    0x10,0x2f, // LOAD_CONST_STRING 'GET'
    0xb9, // LOAD_FAST 9
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xb4, // LOAD_FAST 4
    0xb5, // LOAD_FAST 5
    0x34,0x06, // CALL_FUNCTION 6
    0x63, // RETURN_VALUE
    0x12,0x05, // LOAD_GLOBAL 'request'
    0xb0, // LOAD_FAST 0
    0xb9, // LOAD_FAST 9
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0xb5, // LOAD_FAST 5
    0x34,0x06, // CALL_FUNCTION 6
    0x63, // RETURN_VALUE
    0x42,0x64, // JUMP 36
    0x12,0x03, // LOAD_GLOBAL 'Response'
    0x24,0x17, // LOAD_FAST_N 23
    0x34,0x01, // CALL_FUNCTION 1
    0x26,0x20, // STORE_FAST_N 32
    0x24,0x1d, // LOAD_FAST_N 29
    0x24,0x20, // LOAD_FAST_N 32
    0x18,0x30, // STORE_ATTR 'status_code'
    0x24,0x1e, // LOAD_FAST_N 30
    0x24,0x20, // LOAD_FAST_N 32
    0x18,0x31, // STORE_ATTR 'reason'
    0x24,0x16, // LOAD_FAST_N 22
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x24,0x16, // LOAD_FAST_N 22
    0x24,0x20, // LOAD_FAST_N 32
    0x18,0x32, // STORE_ATTR 'headers'
    0x24,0x20, // LOAD_FAST_N 32
    0x63, // RETURN_VALUE
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_requests___init___request = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_requests___init___request,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 1150,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 42,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 9,
        .n_kwonly_args = 0,
        .n_def_pos_args = 7,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_requests___init___request + 16,
        .line_info_top = fun_data_requests___init___request + 129,
        .opcodes = fun_data_requests___init___request + 129,
    },
    #endif
    #endif
};
#else
#define proto_fun_requests___init___request fun_data_requests___init___request[0]
#endif

// child of requests___init____lt_module_gt_
// frozen bytecode for file requests/__init__.py, scope requests___init___head
static const byte fun_data_requests___init___head[20] = {
    0xb9,0x80,0x40,0x08, // prelude
    0x33,0x4b, // names: head, url
    0x80,0xc8, // code info
    0x12,0x05, // LOAD_GLOBAL 'request'
    0x10,0x34, // LOAD_CONST_STRING 'HEAD'
    0xb0, // LOAD_FAST 0
    0x53, // LOAD_NULL
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x35,0x82,0x02, // CALL_FUNCTION_VAR_KW 258
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_requests___init___head = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_requests___init___head,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 20,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 2,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 51,
        .line_info = fun_data_requests___init___head + 6,
        .line_info_top = fun_data_requests___init___head + 8,
        .opcodes = fun_data_requests___init___head + 8,
    },
    #endif
    #endif
};
#else
#define proto_fun_requests___init___head fun_data_requests___init___head[0]
#endif

// child of requests___init____lt_module_gt_
// frozen bytecode for file requests/__init__.py, scope requests___init___get
static const byte fun_data_requests___init___get[20] = {
    0xb9,0x80,0x40,0x08, // prelude
    0x27,0x4b, // names: get, url
    0x80,0xcc, // code info
    0x12,0x05, // LOAD_GLOBAL 'request'
    0x10,0x2f, // LOAD_CONST_STRING 'GET'
    0xb0, // LOAD_FAST 0
    0x53, // LOAD_NULL
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x35,0x82,0x02, // CALL_FUNCTION_VAR_KW 258
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_requests___init___get = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_requests___init___get,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 20,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 2,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 39,
        .line_info = fun_data_requests___init___get + 6,
        .line_info_top = fun_data_requests___init___get + 8,
        .opcodes = fun_data_requests___init___get + 8,
    },
    #endif
    #endif
};
#else
#define proto_fun_requests___init___get fun_data_requests___init___get[0]
#endif

// child of requests___init____lt_module_gt_
// frozen bytecode for file requests/__init__.py, scope requests___init___post
static const byte fun_data_requests___init___post[20] = {
    0xb9,0x80,0x40,0x08, // prelude
    0x35,0x4b, // names: post, url
    0x80,0xd0, // code info
    0x12,0x05, // LOAD_GLOBAL 'request'
    0x10,0x36, // LOAD_CONST_STRING 'POST'
    0xb0, // LOAD_FAST 0
    0x53, // LOAD_NULL
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x35,0x82,0x02, // CALL_FUNCTION_VAR_KW 258
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_requests___init___post = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_requests___init___post,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 20,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 2,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 53,
        .line_info = fun_data_requests___init___post + 6,
        .line_info_top = fun_data_requests___init___post + 8,
        .opcodes = fun_data_requests___init___post + 8,
    },
    #endif
    #endif
};
#else
#define proto_fun_requests___init___post fun_data_requests___init___post[0]
#endif

// child of requests___init____lt_module_gt_
// frozen bytecode for file requests/__init__.py, scope requests___init___put
static const byte fun_data_requests___init___put[20] = {
    0xb9,0x80,0x40,0x08, // prelude
    0x37,0x4b, // names: put, url
    0x80,0xd4, // code info
    0x12,0x05, // LOAD_GLOBAL 'request'
    0x10,0x38, // LOAD_CONST_STRING 'PUT'
    0xb0, // LOAD_FAST 0
    0x53, // LOAD_NULL
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x35,0x82,0x02, // CALL_FUNCTION_VAR_KW 258
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_requests___init___put = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_requests___init___put,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 20,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 2,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 55,
        .line_info = fun_data_requests___init___put + 6,
        .line_info_top = fun_data_requests___init___put + 8,
        .opcodes = fun_data_requests___init___put + 8,
    },
    #endif
    #endif
};
#else
#define proto_fun_requests___init___put fun_data_requests___init___put[0]
#endif

// child of requests___init____lt_module_gt_
// frozen bytecode for file requests/__init__.py, scope requests___init___patch
static const byte fun_data_requests___init___patch[20] = {
    0xb9,0x80,0x40,0x08, // prelude
    0x39,0x4b, // names: patch, url
    0x80,0xd8, // code info
    0x12,0x05, // LOAD_GLOBAL 'request'
    0x10,0x3a, // LOAD_CONST_STRING 'PATCH'
    0xb0, // LOAD_FAST 0
    0x53, // LOAD_NULL
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x35,0x82,0x02, // CALL_FUNCTION_VAR_KW 258
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_requests___init___patch = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_requests___init___patch,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 20,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 2,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 57,
        .line_info = fun_data_requests___init___patch + 6,
        .line_info_top = fun_data_requests___init___patch + 8,
        .opcodes = fun_data_requests___init___patch + 8,
    },
    #endif
    #endif
};
#else
#define proto_fun_requests___init___patch fun_data_requests___init___patch[0]
#endif

// child of requests___init____lt_module_gt_
// frozen bytecode for file requests/__init__.py, scope requests___init___delete
static const byte fun_data_requests___init___delete[20] = {
    0xb9,0x80,0x40,0x08, // prelude
    0x3b,0x4b, // names: delete, url
    0x80,0xdc, // code info
    0x12,0x05, // LOAD_GLOBAL 'request'
    0x10,0x3c, // LOAD_CONST_STRING 'DELETE'
    0xb0, // LOAD_FAST 0
    0x53, // LOAD_NULL
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x35,0x82,0x02, // CALL_FUNCTION_VAR_KW 258
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_requests___init___delete = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_requests___init___delete,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 20,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 2,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 59,
        .line_info = fun_data_requests___init___delete + 6,
        .line_info_top = fun_data_requests___init___delete + 8,
        .opcodes = fun_data_requests___init___delete + 8,
    },
    #endif
    #endif
};
#else
#define proto_fun_requests___init___delete fun_data_requests___init___delete[0]
#endif

static const mp_raw_code_t *const children_requests___init____lt_module_gt_[] = {
    (const mp_raw_code_t *)&proto_fun_requests___init___Response,
    (const mp_raw_code_t *)&proto_fun_requests___init___request,
    (const mp_raw_code_t *)&proto_fun_requests___init___head,
    (const mp_raw_code_t *)&proto_fun_requests___init___get,
    (const mp_raw_code_t *)&proto_fun_requests___init___post,
    (const mp_raw_code_t *)&proto_fun_requests___init___put,
    (const mp_raw_code_t *)&proto_fun_requests___init___patch,
    (const mp_raw_code_t *)&proto_fun_requests___init___delete,
};

static const mp_raw_code_truncated_t proto_fun_requests___init____lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_requests___init____lt_module_gt_,
    .children = (void *)&children_requests___init____lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 79,
    .n_children = 8,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_requests___init____lt_module_gt_ + 3,
        .line_info_top = fun_data_requests___init____lt_module_gt_ + 20,
        .opcodes = fun_data_requests___init____lt_module_gt_ + 20,
    },
    #endif
    #endif
};

static const qstr_short_t const_qstr_table_data_requests___init__[90] = {
    MP_QSTR_requests_slash___init___dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_socket,
    MP_QSTR_Response,
    MP_QSTR_0_dot_10_dot_2,
    MP_QSTR_request,
    MP_QSTR_copy,
    MP_QSTR___next__,
    MP_QSTR___len__,
    MP_QSTR_binascii,
    MP_QSTR_format,
    MP_QSTR_b2a_base64,
    MP_QSTR_ascii,
    MP_QSTR_Basic_space__brace_open__brace_close_,
    MP_QSTR_split,
    MP_QSTR__slash_,
    MP_QSTR_,
    MP_QSTR_http_colon_,
    MP_QSTR_https_colon_,
    MP_QSTR_tls,
    MP_QSTR__colon_,
    MP_QSTR_getaddrinfo,
    MP_QSTR_SOCK_STREAM,
    MP_QSTR_settimeout,
    MP_QSTR_connect,
    MP_QSTR_SSLContext,
    MP_QSTR_PROTOCOL_TLS_CLIENT,
    MP_QSTR_CERT_NONE,
    MP_QSTR_verify_mode,
    MP_QSTR_wrap_socket,
    MP_QSTR_server_hostname,
    MP_QSTR_write,
    MP_QSTR_Host,
    MP_QSTR_AssertionError,
    MP_QSTR_dumps,
    MP_QSTR_json,
    MP_QSTR_chunked,
    MP_QSTR_Connection,
    MP_QSTR_close,
    MP_QSTR_get,
    MP_QSTR_0_0x0d__0x0a__0x0d__0x0a_,
    MP_QSTR_readline,
    MP_QSTR_rstrip,
    MP_QSTR_startswith,
    MP_QSTR_utf_hyphen_8,
    MP_QSTR_strip,
    MP_QSTR_pop,
    MP_QSTR_GET,
    MP_QSTR_status_code,
    MP_QSTR_reason,
    MP_QSTR_headers,
    MP_QSTR_head,
    MP_QSTR_HEAD,
    MP_QSTR_post,
    MP_QSTR_POST,
    MP_QSTR_put,
    MP_QSTR_PUT,
    MP_QSTR_patch,
    MP_QSTR_PATCH,
    MP_QSTR_delete,
    MP_QSTR_DELETE,
    MP_QSTR___init__,
    MP_QSTR_raw,
    MP_QSTR_encoding,
    MP_QSTR__cached,
    MP_QSTR_content,
    MP_QSTR_read,
    MP_QSTR_text,
    MP_QSTR_loads,
    MP_QSTR___version__,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_property,
    MP_QSTR_method,
    MP_QSTR_url,
    MP_QSTR_data,
    MP_QSTR_stream,
    MP_QSTR_auth,
    MP_QSTR_timeout,
    MP_QSTR_parse_headers,
    MP_QSTR_getattr,
    MP_QSTR_str,
    MP_QSTR_ValueError,
    MP_QSTR_int,
    MP_QSTR_len,
    MP_QSTR_NotImplementedError,
    MP_QSTR_OSError,
    MP_QSTR_self,
    MP_QSTR_f,
};

// constants
static const mp_obj_str_t const_obj_requests___init___0 = {{&mp_type_bytes}, 95, 5, (const byte*)"\x7b\x7d\x3a\x7b\x7d"};
static const mp_obj_str_t const_obj_requests___init___3 = {{&mp_type_bytes}, 117, 17, (const byte*)"\x25\x73\x20\x2f\x25\x73\x20\x48\x54\x54\x50\x2f\x31\x2e\x30\x0d\x0a"};
static const mp_obj_str_t const_obj_requests___init___8 = {{&mp_type_bytes}, 95, 2, (const byte*)"\x3a\x20"};
static const mp_obj_str_t const_obj_requests___init___9 = {{&mp_type_bytes}, 162, 2, (const byte*)"\x0d\x0a"};
static const mp_obj_str_t const_obj_requests___init___10 = {{&mp_type_bytes}, 159, 4, (const byte*)"\x25\x78\x0d\x0a"};
static const mp_obj_str_t const_obj_requests___init___11 = {{&mp_type_str}, 196, 29, (const byte*)"\x48\x54\x54\x50\x20\x65\x72\x72\x6f\x72\x3a\x20\x42\x61\x64\x53\x74\x61\x74\x75\x73\x4c\x69\x6e\x65\x3a\x0a\x25\x73"};
static const mp_obj_str_t const_obj_requests___init___12 = {{&mp_type_bytes}, 250, 18, (const byte*)"\x54\x72\x61\x6e\x73\x66\x65\x72\x2d\x45\x6e\x63\x6f\x64\x69\x6e\x67\x3a"};
static const mp_obj_str_t const_obj_requests___init___13 = {{&mp_type_bytes}, 255, 7, (const byte*)"\x63\x68\x75\x6e\x6b\x65\x64"};
static const mp_obj_str_t const_obj_requests___init___15 = {{&mp_type_bytes}, 66, 9, (const byte*)"\x4c\x6f\x63\x61\x74\x69\x6f\x6e\x3a"};
static const mp_obj_str_t const_obj_requests___init___16 = {{&mp_type_str}, 237, 29, (const byte*)"\x52\x65\x64\x69\x72\x65\x63\x74\x20\x25\x64\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64"};

// constant table
static const mp_rom_obj_t const_obj_table_data_requests___init__[17] = {
    MP_ROM_PTR(&const_obj_requests___init___0),
    MP_ROM_QSTR(MP_QSTR_Authorization),
    MP_ROM_QSTR(MP_QSTR_Unsupported_space_protocol_colon__space_),
    MP_ROM_PTR(&const_obj_requests___init___3),
    MP_ROM_QSTR(MP_QSTR_Content_hyphen_Type),
    MP_ROM_QSTR(MP_QSTR_application_slash_json),
    MP_ROM_QSTR(MP_QSTR_Transfer_hyphen_Encoding),
    MP_ROM_QSTR(MP_QSTR_Content_hyphen_Length),
    MP_ROM_PTR(&const_obj_requests___init___8),
    MP_ROM_PTR(&const_obj_requests___init___9),
    MP_ROM_PTR(&const_obj_requests___init___10),
    MP_ROM_PTR(&const_obj_requests___init___11),
    MP_ROM_PTR(&const_obj_requests___init___12),
    MP_ROM_PTR(&const_obj_requests___init___13),
    MP_ROM_QSTR(MP_QSTR_Unsupported_space_),
    MP_ROM_PTR(&const_obj_requests___init___15),
    MP_ROM_PTR(&const_obj_requests___init___16),
};

static const mp_frozen_module_t frozen_module_requests___init__ = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_requests___init__,
        .obj_table = (mp_obj_t *)&const_obj_table_data_requests___init__,
    },
    .proto_fun = &proto_fun_requests___init____lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module mip___init__
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/mip/__init__.mpy
// - frozen file name: mip/__init__.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file mip/__init__.py, scope mip___init____lt_module_gt_
static const byte fun_data_mip___init____lt_module_gt_[80] = {
    0x18,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'sys'
    0x16,0x02, // STORE_NAME 'sys'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'requests'
    0x16,0x03, // STORE_NAME 'requests'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x04, // LOAD_CONST_STRING 'const'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x05, // IMPORT_NAME 'micropython'
    0x1c,0x04, // IMPORT_FROM 'const'
    0x16,0x04, // STORE_NAME 'const'
    0x59, // POP_TOP
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x16,0x45, // STORE_NAME 'allowed_mip_url_prefixes'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x07, // STORE_NAME '_ensure_path_exists'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x0f, // STORE_NAME '_chunk'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x11, // STORE_NAME '_check_exists'
    0x51, // LOAD_CONST_NONE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x03, // MAKE_FUNCTION_DEFARGS 3
    0x16,0x1a, // STORE_NAME '_rewrite_url'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x21, // STORE_NAME '_download_file'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x2b, // STORE_NAME '_install_json'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x34, // STORE_NAME '_install_package'
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x52, // LOAD_CONST_TRUE
    0x2a,0x04, // BUILD_TUPLE 4
    0x53, // LOAD_NULL
    0x33,0x07, // MAKE_FUNCTION_DEFARGS 7
    0x16,0x3e, // STORE_NAME 'install'
    0x10,0x06, // LOAD_CONST_STRING '0.4.2'
    0x16,0x46, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of mip___init____lt_module_gt_
// frozen bytecode for file mip/__init__.py, scope mip___init____ensure_path_exists
static const byte fun_data_mip___init____ensure_path_exists[97] = {
    0x65,0x04, // prelude
    0x07,0x3f, // names: _ensure_path_exists, path
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x08, // IMPORT_NAME 'os'
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x14,0x09, // LOAD_METHOD 'split'
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x43,0x50, // POP_JUMP_IF_TRUE 16
    0xb2, // LOAD_FAST 2
    0x14,0x0b, // LOAD_METHOD 'pop'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x56, // STORE_SUBSCR
    0x10,0x0c, // LOAD_CONST_STRING ''
    0xc3, // STORE_FAST 3
    0x12,0x47, // LOAD_GLOBAL 'len'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf3, // BINARY_OP 28 __sub__
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0x65, // JUMP 37
    0x57, // DUP_TOP
    0xc4, // STORE_FAST 4
    0xb3, // LOAD_FAST 3
    0xb2, // LOAD_FAST 2
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0xe5, // BINARY_OP 14 __iadd__
    0xc3, // STORE_FAST 3
    0x48,0x09, // SETUP_EXCEPT 9
    0xb1, // LOAD_FAST 1
    0x14,0x0d, // LOAD_METHOD 'stat'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x4a,0x0b, // POP_EXCEPT_JUMP 11
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x14,0x0e, // LOAD_METHOD 'mkdir'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xb3, // LOAD_FAST 3
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0xe5, // BINARY_OP 14 __iadd__
    0xc3, // STORE_FAST 3
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x16, // POP_JUMP_IF_TRUE -42
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_mip___init____ensure_path_exists = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_mip___init____ensure_path_exists,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 97,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 7,
        .line_info = fun_data_mip___init____ensure_path_exists + 4,
        .line_info_top = fun_data_mip___init____ensure_path_exists + 4,
        .opcodes = fun_data_mip___init____ensure_path_exists + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_mip___init____ensure_path_exists fun_data_mip___init____ensure_path_exists[0]
#endif

// child of mip___init____lt_module_gt_
// frozen bytecode for file mip/__init__.py, scope mip___init____chunk
static const byte fun_data_mip___init____chunk[55] = {
    0x3a,0x06, // prelude
    0x0f,0x48,0x49, // names: _chunk, src, dest
     // code info
    0x12,0x4a, // LOAD_GLOBAL 'memoryview'
    0x12,0x4b, // LOAD_GLOBAL 'bytearray'
    0x22,0x81,0x00, // LOAD_CONST_SMALL_INT 128
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0xc2, // STORE_FAST 2
    0xb0, // LOAD_FAST 0
    0x14,0x10, // LOAD_METHOD 'readinto'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x42,0x56, // JUMP 22
    0xb1, // LOAD_FAST 1
    0xb3, // LOAD_FAST 3
    0x22,0x81,0x00, // LOAD_CONST_SMALL_INT 128
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0xb2, // LOAD_FAST 2
    0x42,0x46, // JUMP 6
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xb3, // LOAD_FAST 3
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x42,0x1c, // JUMP -36
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_mip___init____chunk = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_mip___init____chunk,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 55,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 15,
        .line_info = fun_data_mip___init____chunk + 5,
        .line_info_top = fun_data_mip___init____chunk + 5,
        .opcodes = fun_data_mip___init____chunk + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_mip___init____chunk fun_data_mip___init____chunk[0]
#endif

// child of mip___init____lt_module_gt_
// frozen bytecode for file mip/__init__.py, scope mip___init____check_exists
static const byte fun_data_mip___init____check_exists[88] = {
    0xf2,0x02,0x06, // prelude
    0x11,0x3f,0x4c, // names: _check_exists, path, short_hash
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x08, // IMPORT_NAME 'os'
    0xc2, // STORE_FAST 2
    0x48,0x45, // SETUP_EXCEPT 69
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x12, // IMPORT_NAME 'binascii'
    0xc3, // STORE_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x13, // IMPORT_NAME 'hashlib'
    0xc4, // STORE_FAST 4
    0x12,0x4d, // LOAD_GLOBAL 'open'
    0xb0, // LOAD_FAST 0
    0x10,0x14, // LOAD_CONST_STRING 'rb'
    0x34,0x02, // CALL_FUNCTION 2
    0x47,0x2e, // SETUP_WITH 46
    0xc5, // STORE_FAST 5
    0xb4, // LOAD_FAST 4
    0x14,0x15, // LOAD_METHOD 'sha256'
    0x36,0x00, // CALL_METHOD 0
    0xc6, // STORE_FAST 6
    0x12,0x0f, // LOAD_GLOBAL '_chunk'
    0xb5, // LOAD_FAST 5
    0xb6, // LOAD_FAST 6
    0x13,0x16, // LOAD_ATTR 'update'
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x12,0x4e, // LOAD_GLOBAL 'str'
    0xb3, // LOAD_FAST 3
    0x14,0x17, // LOAD_METHOD 'hexlify'
    0xb6, // LOAD_FAST 6
    0x14,0x18, // LOAD_METHOD 'digest'
    0x36,0x00, // CALL_METHOD 0
    0x36,0x01, // CALL_METHOD 1
    0x51, // LOAD_CONST_NONE
    0x12,0x47, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x10,0x19, // LOAD_CONST_STRING 'utf-8'
    0x34,0x02, // CALL_FUNCTION 2
    0xc7, // STORE_FAST 7
    0xb7, // LOAD_FAST 7
    0xb1, // LOAD_FAST 1
    0xd9, // BINARY_OP 2 __eq__
    0x63, // RETURN_VALUE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x4a,0x04, // POP_EXCEPT_JUMP 4
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_mip___init____check_exists = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_mip___init____check_exists,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 88,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_mip___init____check_exists + 6,
        .line_info_top = fun_data_mip___init____check_exists + 6,
        .opcodes = fun_data_mip___init____check_exists + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_mip___init____check_exists fun_data_mip___init____check_exists[0]
#endif

// child of mip___init____lt_module_gt_
// frozen bytecode for file mip/__init__.py, scope mip___init____rewrite_url
static const byte fun_data_mip___init____rewrite_url[132] = {
    0xba,0x01,0x06, // prelude
    0x1a,0x4f,0x50, // names: _rewrite_url, url, branch
     // code info
    0xb1, // LOAD_FAST 1
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x10,0x1b, // LOAD_CONST_STRING 'HEAD'
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x14,0x1c, // LOAD_METHOD 'startswith'
    0x10,0x1d, // LOAD_CONST_STRING 'github:'
    0x36,0x01, // CALL_METHOD 1
    0x44,0x72, // POP_JUMP_IF_FALSE 50
    0xb0, // LOAD_FAST 0
    0x87, // LOAD_CONST_SMALL_INT 7
    0x51, // LOAD_CONST_NONE
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x14,0x09, // LOAD_METHOD 'split'
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0x36,0x01, // CALL_METHOD 1
    0xc0, // STORE_FAST 0
    0x23,0x01, // LOAD_CONST_OBJ 1
    0xb0, // LOAD_FAST 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0xf2, // BINARY_OP 27 __add__
    0xb0, // LOAD_FAST 0
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0xf2, // BINARY_OP 27 __add__
    0xb1, // LOAD_FAST 1
    0xf2, // BINARY_OP 27 __add__
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0xf2, // BINARY_OP 27 __add__
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0x14,0x1e, // LOAD_METHOD 'join'
    0xb0, // LOAD_FAST 0
    0x82, // LOAD_CONST_SMALL_INT 2
    0x51, // LOAD_CONST_NONE
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0xf2, // BINARY_OP 27 __add__
    0xc0, // STORE_FAST 0
    0x42,0x7b, // JUMP 59
    0xb0, // LOAD_FAST 0
    0x14,0x1c, // LOAD_METHOD 'startswith'
    0x10,0x1f, // LOAD_CONST_STRING 'gitlab:'
    0x36,0x01, // CALL_METHOD 1
    0x44,0x72, // POP_JUMP_IF_FALSE 50
    0xb0, // LOAD_FAST 0
    0x87, // LOAD_CONST_SMALL_INT 7
    0x51, // LOAD_CONST_NONE
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x14,0x09, // LOAD_METHOD 'split'
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0x36,0x01, // CALL_METHOD 1
    0xc0, // STORE_FAST 0
    0x23,0x02, // LOAD_CONST_OBJ 2
    0xb0, // LOAD_FAST 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0xf2, // BINARY_OP 27 __add__
    0xb0, // LOAD_FAST 0
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0x10,0x20, // LOAD_CONST_STRING '/-/raw/'
    0xf2, // BINARY_OP 27 __add__
    0xb1, // LOAD_FAST 1
    0xf2, // BINARY_OP 27 __add__
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0xf2, // BINARY_OP 27 __add__
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0x14,0x1e, // LOAD_METHOD 'join'
    0xb0, // LOAD_FAST 0
    0x82, // LOAD_CONST_SMALL_INT 2
    0x51, // LOAD_CONST_NONE
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0xf2, // BINARY_OP 27 __add__
    0xc0, // STORE_FAST 0
    0x42,0x40, // JUMP 0
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_mip___init____rewrite_url = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_mip___init____rewrite_url,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 132,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 26,
        .line_info = fun_data_mip___init____rewrite_url + 6,
        .line_info_top = fun_data_mip___init____rewrite_url + 6,
        .opcodes = fun_data_mip___init____rewrite_url + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_mip___init____rewrite_url fun_data_mip___init____rewrite_url[0]
#endif

// child of mip___init____lt_module_gt_
// frozen bytecode for file mip/__init__.py, scope mip___init____download_file
static const byte fun_data_mip___init____download_file[89] = {
    0xda,0x02,0x06, // prelude
    0x21,0x4f,0x49, // names: _download_file, url, dest
     // code info
    0x12,0x03, // LOAD_GLOBAL 'requests'
    0x14,0x22, // LOAD_METHOD 'get'
    0xb0, // LOAD_FAST 0
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0x49,0x40, // SETUP_FINALLY 64
    0xb2, // LOAD_FAST 2
    0x13,0x23, // LOAD_ATTR 'status_code'
    0x22,0x81,0x48, // LOAD_CONST_SMALL_INT 200
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x12,0x51, // LOAD_GLOBAL 'print'
    0x10,0x24, // LOAD_CONST_STRING 'Error'
    0xb2, // LOAD_FAST 2
    0x13,0x23, // LOAD_ATTR 'status_code'
    0x10,0x25, // LOAD_CONST_STRING 'requesting'
    0xb0, // LOAD_FAST 0
    0x34,0x04, // CALL_FUNCTION 4
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0x12,0x51, // LOAD_GLOBAL 'print'
    0x10,0x26, // LOAD_CONST_STRING 'Copying:'
    0xb1, // LOAD_FAST 1
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x12,0x07, // LOAD_GLOBAL '_ensure_path_exists'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x12,0x4d, // LOAD_GLOBAL 'open'
    0xb1, // LOAD_FAST 1
    0x10,0x27, // LOAD_CONST_STRING 'wb'
    0x34,0x02, // CALL_FUNCTION 2
    0x47,0x0d, // SETUP_WITH 13
    0xc3, // STORE_FAST 3
    0x12,0x0f, // LOAD_GLOBAL '_chunk'
    0xb2, // LOAD_FAST 2
    0x13,0x28, // LOAD_ATTR 'raw'
    0xb3, // LOAD_FAST 3
    0x13,0x29, // LOAD_ATTR 'write'
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x52, // LOAD_CONST_TRUE
    0x63, // RETURN_VALUE
    0xb2, // LOAD_FAST 2
    0x14,0x2a, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_mip___init____download_file = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_mip___init____download_file,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 89,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 12,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 33,
        .line_info = fun_data_mip___init____download_file + 6,
        .line_info_top = fun_data_mip___init____download_file + 6,
        .opcodes = fun_data_mip___init____download_file + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_mip___init____download_file fun_data_mip___init____download_file[0]
#endif

// child of mip___init____lt_module_gt_
// frozen bytecode for file mip/__init__.py, scope mip___init____install_json
static const byte fun_data_mip___init____install_json[271] = {
    0xcd,0x14,0x0d, // prelude
    0x2b,0x52,0x53,0x54,0x55,0x56, // names: _install_json, package_json_url, index, target, version, mpy
    0x0f, // code info
    0x12,0x03, // LOAD_GLOBAL 'requests'
    0x14,0x22, // LOAD_METHOD 'get'
    0x12,0x1a, // LOAD_GLOBAL '_rewrite_url'
    0xb0, // LOAD_FAST 0
    0xb3, // LOAD_FAST 3
    0x34,0x02, // CALL_FUNCTION 2
    0x36,0x01, // CALL_METHOD 1
    0xc5, // STORE_FAST 5
    0x49,0x1a, // SETUP_FINALLY 26
    0xb5, // LOAD_FAST 5
    0x13,0x23, // LOAD_ATTR 'status_code'
    0x22,0x81,0x48, // LOAD_CONST_SMALL_INT 200
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0x12,0x51, // LOAD_GLOBAL 'print'
    0x23,0x03, // LOAD_CONST_OBJ 3
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0xb5, // LOAD_FAST 5
    0x14,0x2c, // LOAD_METHOD 'json'
    0x36,0x00, // CALL_METHOD 0
    0xc6, // STORE_FAST 6
    0x51, // LOAD_CONST_NONE
    0xb5, // LOAD_FAST 5
    0x14,0x2a, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x5d, // END_FINALLY
    0xb6, // LOAD_FAST 6
    0x14,0x22, // LOAD_METHOD 'get'
    0x10,0x2d, // LOAD_CONST_STRING 'hashes'
    0x2a,0x00, // BUILD_TUPLE 0
    0x36,0x02, // CALL_METHOD 2
    0x5f, // GET_ITER_STACK
    0x4b,0x46, // FOR_ITER 70
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc7, // STORE_FAST 7
    0xc8, // STORE_FAST 8
    0xb2, // LOAD_FAST 2
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0xf2, // BINARY_OP 27 __add__
    0xb7, // LOAD_FAST 7
    0xf2, // BINARY_OP 27 __add__
    0xc9, // STORE_FAST 9
    0x12,0x11, // LOAD_GLOBAL '_check_exists'
    0xb9, // LOAD_FAST 9
    0xb8, // LOAD_FAST 8
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0x12,0x51, // LOAD_GLOBAL 'print'
    0x10,0x2e, // LOAD_CONST_STRING 'Exists:'
    0xb9, // LOAD_FAST 9
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x42,0x66, // JUMP 38
    0x23,0x04, // LOAD_CONST_OBJ 4
    0x14,0x2f, // LOAD_METHOD 'format'
    0xb1, // LOAD_FAST 1
    0xb8, // LOAD_FAST 8
    0x51, // LOAD_CONST_NONE
    0x82, // LOAD_CONST_SMALL_INT 2
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0xb8, // LOAD_FAST 8
    0x36,0x03, // CALL_METHOD 3
    0xca, // STORE_FAST 10
    0x12,0x21, // LOAD_GLOBAL '_download_file'
    0xba, // LOAD_FAST 10
    0xb9, // LOAD_FAST 9
    0x34,0x02, // CALL_FUNCTION 2
    0x43,0x4f, // POP_JUMP_IF_TRUE 15
    0x12,0x51, // LOAD_GLOBAL 'print'
    0x23,0x05, // LOAD_CONST_OBJ 5
    0x14,0x2f, // LOAD_METHOD 'format'
    0xb7, // LOAD_FAST 7
    0xb8, // LOAD_FAST 8
    0x36,0x02, // CALL_METHOD 2
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0x42,0xb8,0x7f, // JUMP -72
    0xb0, // LOAD_FAST 0
    0x14,0x30, // LOAD_METHOD 'rpartition'
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0x36,0x01, // CALL_METHOD 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xcb, // STORE_FAST 11
    0xb6, // LOAD_FAST 6
    0x14,0x22, // LOAD_METHOD 'get'
    0x10,0x31, // LOAD_CONST_STRING 'urls'
    0x2a,0x00, // BUILD_TUPLE 0
    0x36,0x02, // CALL_METHOD 2
    0x5f, // GET_ITER_STACK
    0x4b,0x4c, // FOR_ITER 76
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc7, // STORE_FAST 7
    0x27,0x0f, // STORE_DEREF 15
    0xb2, // LOAD_FAST 2
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0xf2, // BINARY_OP 27 __add__
    0xb7, // LOAD_FAST 7
    0xf2, // BINARY_OP 27 __add__
    0xc9, // STORE_FAST 9
    0x12,0x57, // LOAD_GLOBAL 'any'
    0xbf, // LOAD_FAST 15
    0x20,0x00,0x01, // MAKE_CLOSURE 0
    0x12,0x45, // LOAD_GLOBAL 'allowed_mip_url_prefixes'
    0x5e, // GET_ITER
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0xcc, // STORE_FAST 12
    0xbb, // LOAD_FAST 11
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0xbc, // LOAD_FAST 12
    0x43,0x4b, // POP_JUMP_IF_TRUE 11
    0x10,0x32, // LOAD_CONST_STRING '{}/{}'
    0x14,0x2f, // LOAD_METHOD 'format'
    0xbb, // LOAD_FAST 11
    0x25,0x0f, // LOAD_DEREF 15
    0x36,0x02, // CALL_METHOD 2
    0x27,0x0f, // STORE_DEREF 15
    0x12,0x21, // LOAD_GLOBAL '_download_file'
    0x12,0x1a, // LOAD_GLOBAL '_rewrite_url'
    0x25,0x0f, // LOAD_DEREF 15
    0xb3, // LOAD_FAST 3
    0x34,0x02, // CALL_FUNCTION 2
    0xb9, // LOAD_FAST 9
    0x34,0x02, // CALL_FUNCTION 2
    0x43,0x50, // POP_JUMP_IF_TRUE 16
    0x12,0x51, // LOAD_GLOBAL 'print'
    0x23,0x05, // LOAD_CONST_OBJ 5
    0x14,0x2f, // LOAD_METHOD 'format'
    0xb7, // LOAD_FAST 7
    0x25,0x0f, // LOAD_DEREF 15
    0x36,0x02, // CALL_METHOD 2
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0x42,0xb2,0x7f, // JUMP -78
    0xb6, // LOAD_FAST 6
    0x14,0x22, // LOAD_METHOD 'get'
    0x10,0x33, // LOAD_CONST_STRING 'deps'
    0x2a,0x00, // BUILD_TUPLE 0
    0x36,0x02, // CALL_METHOD 2
    0x5f, // GET_ITER_STACK
    0x4b,0x13, // FOR_ITER 19
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xcd, // STORE_FAST 13
    0xce, // STORE_FAST 14
    0x12,0x34, // LOAD_GLOBAL '_install_package'
    0xbd, // LOAD_FAST 13
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xbe, // LOAD_FAST 14
    0xb4, // LOAD_FAST 4
    0x34,0x05, // CALL_FUNCTION 5
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0x42,0x2b, // JUMP -21
    0x52, // LOAD_CONST_TRUE
    0x63, // RETURN_VALUE
};
// child of mip___init____install_json
// frozen bytecode for file mip/__init__.py, scope mip___init____install_json__lt_genexpr_gt_
static const byte fun_data_mip___init____install_json__lt_genexpr_gt_[26] = {
    0xca,0x40,0x06, // prelude
    0x44,0x5a,0x5a, // names: <genexpr>, *, *
     // code info
    0x53, // LOAD_NULL
    0xb1, // LOAD_FAST 1
    0x53, // LOAD_NULL
    0x53, // LOAD_NULL
    0x4b,0x0c, // FOR_ITER 12
    0xc2, // STORE_FAST 2
    0x25,0x00, // LOAD_DEREF 0
    0x14,0x1c, // LOAD_METHOD 'startswith'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x42,0x32, // JUMP -14
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_mip___init____install_json__lt_genexpr_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_mip___init____install_json__lt_genexpr_gt_,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 26,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 68,
        .line_info = fun_data_mip___init____install_json__lt_genexpr_gt_ + 6,
        .line_info_top = fun_data_mip___init____install_json__lt_genexpr_gt_ + 6,
        .opcodes = fun_data_mip___init____install_json__lt_genexpr_gt_ + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_mip___init____install_json__lt_genexpr_gt_ fun_data_mip___init____install_json__lt_genexpr_gt_[0]
#endif

static const mp_raw_code_t *const children_mip___init____install_json[] = {
    (const mp_raw_code_t *)&proto_fun_mip___init____install_json__lt_genexpr_gt_,
};

static const mp_raw_code_truncated_t proto_fun_mip___init____install_json = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_mip___init____install_json,
    .children = (void *)&children_mip___init____install_json,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 271,
    .n_children = 1,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 26,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 43,
        .line_info = fun_data_mip___init____install_json + 9,
        .line_info_top = fun_data_mip___init____install_json + 9,
        .opcodes = fun_data_mip___init____install_json + 10,
    },
    #endif
    #endif
};

// child of mip___init____lt_module_gt_
// frozen bytecode for file mip/__init__.py, scope mip___init____install_package
static const byte fun_data_mip___init____install_package[214] = {
    0xe1,0x04,0x0d, // prelude
    0x34,0x58,0x53,0x54,0x55,0x56, // names: _install_package, package, index, target, version, mpy
    0x00, // code info
    0x12,0x57, // LOAD_GLOBAL 'any'
    0xb0, // LOAD_FAST 0
    0x20,0x00,0x01, // MAKE_CLOSURE 0
    0x12,0x45, // LOAD_GLOBAL 'allowed_mip_url_prefixes'
    0x5e, // GET_ITER
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0x44,0xf0,0x80, // POP_JUMP_IF_FALSE 112
    0x25,0x00, // LOAD_DEREF 0
    0x14,0x35, // LOAD_METHOD 'endswith'
    0x10,0x36, // LOAD_CONST_STRING '.py'
    0x36,0x01, // CALL_METHOD 1
    0x43,0x4a, // POP_JUMP_IF_TRUE 10
    0x25,0x00, // LOAD_DEREF 0
    0x14,0x35, // LOAD_METHOD 'endswith'
    0x10,0x37, // LOAD_CONST_STRING '.mpy'
    0x36,0x01, // CALL_METHOD 1
    0x44,0x69, // POP_JUMP_IF_FALSE 41
    0x12,0x51, // LOAD_GLOBAL 'print'
    0x23,0x06, // LOAD_CONST_OBJ 6
    0x14,0x2f, // LOAD_METHOD 'format'
    0x25,0x00, // LOAD_DEREF 0
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x12,0x21, // LOAD_GLOBAL '_download_file'
    0x12,0x1a, // LOAD_GLOBAL '_rewrite_url'
    0x25,0x00, // LOAD_DEREF 0
    0xb3, // LOAD_FAST 3
    0x34,0x02, // CALL_FUNCTION 2
    0xb2, // LOAD_FAST 2
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0xf2, // BINARY_OP 27 __add__
    0x25,0x00, // LOAD_DEREF 0
    0x14,0x38, // LOAD_METHOD 'rsplit'
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0x36,0x01, // CALL_METHOD 1
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0x34,0x02, // CALL_FUNCTION 2
    0x63, // RETURN_VALUE
    0x25,0x00, // LOAD_DEREF 0
    0x14,0x35, // LOAD_METHOD 'endswith'
    0x10,0x39, // LOAD_CONST_STRING '.json'
    0x36,0x01, // CALL_METHOD 1
    0x43,0x58, // POP_JUMP_IF_TRUE 24
    0x25,0x00, // LOAD_DEREF 0
    0x14,0x35, // LOAD_METHOD 'endswith'
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0x36,0x01, // CALL_METHOD 1
    0x43,0x47, // POP_JUMP_IF_TRUE 7
    0x25,0x00, // LOAD_DEREF 0
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0xe5, // BINARY_OP 14 __iadd__
    0x27,0x00, // STORE_DEREF 0
    0x25,0x00, // LOAD_DEREF 0
    0x23,0x07, // LOAD_CONST_OBJ 7
    0xe5, // BINARY_OP 14 __iadd__
    0x27,0x00, // STORE_DEREF 0
    0x12,0x51, // LOAD_GLOBAL 'print'
    0x23,0x08, // LOAD_CONST_OBJ 8
    0x14,0x2f, // LOAD_METHOD 'format'
    0x25,0x00, // LOAD_DEREF 0
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x42,0xc1,0x80, // JUMP 65
    0xb3, // LOAD_FAST 3
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x10,0x3a, // LOAD_CONST_STRING 'latest'
    0xc3, // STORE_FAST 3
    0x12,0x51, // LOAD_GLOBAL 'print'
    0x23,0x09, // LOAD_CONST_OBJ 9
    0x14,0x2f, // LOAD_METHOD 'format'
    0x25,0x00, // LOAD_DEREF 0
    0xb3, // LOAD_FAST 3
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x36,0x04, // CALL_METHOD 4
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0xb4, // LOAD_FAST 4
    0x44,0x58, // POP_JUMP_IF_FALSE 24
    0x12,0x59, // LOAD_GLOBAL 'hasattr'
    0x12,0x02, // LOAD_GLOBAL 'sys'
    0x13,0x3b, // LOAD_ATTR 'implementation'
    0x10,0x3c, // LOAD_CONST_STRING '_mpy'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x12,0x02, // LOAD_GLOBAL 'sys'
    0x13,0x3b, // LOAD_ATTR 'implementation'
    0x13,0x3c, // LOAD_ATTR '_mpy'
    0x22,0x81,0x7f, // LOAD_CONST_SMALL_INT 255
    0xef, // BINARY_OP 24 __and__
    0x42,0x42, // JUMP 2
    0x10,0x3d, // LOAD_CONST_STRING 'py'
    0xc5, // STORE_FAST 5
    0x23,0x0a, // LOAD_CONST_OBJ 10
    0x14,0x2f, // LOAD_METHOD 'format'
    0xb1, // LOAD_FAST 1
    0xb5, // LOAD_FAST 5
    0x25,0x00, // LOAD_DEREF 0
    0xb3, // LOAD_FAST 3
    0x36,0x04, // CALL_METHOD 4
    0x27,0x00, // STORE_DEREF 0
    0x12,0x2b, // LOAD_GLOBAL '_install_json'
    0x25,0x00, // LOAD_DEREF 0
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x34,0x05, // CALL_FUNCTION 5
    0x63, // RETURN_VALUE
};
// child of mip___init____install_package
// frozen bytecode for file mip/__init__.py, scope mip___init____install_package__lt_genexpr_gt_
static const byte fun_data_mip___init____install_package__lt_genexpr_gt_[26] = {
    0xca,0x40,0x06, // prelude
    0x44,0x5a,0x5a, // names: <genexpr>, *, *
     // code info
    0x53, // LOAD_NULL
    0xb1, // LOAD_FAST 1
    0x53, // LOAD_NULL
    0x53, // LOAD_NULL
    0x4b,0x0c, // FOR_ITER 12
    0xc2, // STORE_FAST 2
    0x25,0x00, // LOAD_DEREF 0
    0x14,0x1c, // LOAD_METHOD 'startswith'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x42,0x32, // JUMP -14
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_mip___init____install_package__lt_genexpr_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 1,
    .fun_data = fun_data_mip___init____install_package__lt_genexpr_gt_,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 26,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 68,
        .line_info = fun_data_mip___init____install_package__lt_genexpr_gt_ + 6,
        .line_info_top = fun_data_mip___init____install_package__lt_genexpr_gt_ + 6,
        .opcodes = fun_data_mip___init____install_package__lt_genexpr_gt_ + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_mip___init____install_package__lt_genexpr_gt_ fun_data_mip___init____install_package__lt_genexpr_gt_[0]
#endif

static const mp_raw_code_t *const children_mip___init____install_package[] = {
    (const mp_raw_code_t *)&proto_fun_mip___init____install_package__lt_genexpr_gt_,
};

static const mp_raw_code_truncated_t proto_fun_mip___init____install_package = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_mip___init____install_package,
    .children = (void *)&children_mip___init____install_package,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 214,
    .n_children = 1,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 52,
        .line_info = fun_data_mip___init____install_package + 9,
        .line_info_top = fun_data_mip___init____install_package + 9,
        .opcodes = fun_data_mip___init____install_package + 10,
    },
    #endif
    #endif
};

// child of mip___init____lt_module_gt_
// frozen bytecode for file mip/__init__.py, scope mip___init___install
static const byte fun_data_mip___init___install[100] = {
    0xe1,0x84,0x80,0x01,0x0c, // prelude
    0x3e,0x58,0x53,0x54,0x55,0x56, // names: install, package, index, target, version, mpy
     // code info
    0xb2, // LOAD_FAST 2
    0x43,0x6d, // POP_JUMP_IF_TRUE 45
    0x12,0x02, // LOAD_GLOBAL 'sys'
    0x13,0x3f, // LOAD_ATTR 'path'
    0x5f, // GET_ITER_STACK
    0x4b,0x1d, // FOR_ITER 29
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x14,0x1c, // LOAD_METHOD 'startswith'
    0x10,0x40, // LOAD_CONST_STRING '/rom'
    0x36,0x01, // CALL_METHOD 1
    0x43,0x51, // POP_JUMP_IF_TRUE 17
    0xb5, // LOAD_FAST 5
    0x14,0x35, // LOAD_METHOD 'endswith'
    0x10,0x41, // LOAD_CONST_STRING '/lib'
    0x36,0x01, // CALL_METHOD 1
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0xb5, // LOAD_FAST 5
    0xc2, // STORE_FAST 2
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x42,0x4b, // JUMP 11
    0x42,0x21, // JUMP -31
    0x12,0x51, // LOAD_GLOBAL 'print'
    0x23,0x0b, // LOAD_CONST_OBJ 11
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0xb1, // LOAD_FAST 1
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x23,0x0c, // LOAD_CONST_OBJ 12
    0xc1, // STORE_FAST 1
    0x12,0x34, // LOAD_GLOBAL '_install_package'
    0xb0, // LOAD_FAST 0
    0xb1, // LOAD_FAST 1
    0x14,0x42, // LOAD_METHOD 'rstrip'
    0x10,0x0a, // LOAD_CONST_STRING '/'
    0x36,0x01, // CALL_METHOD 1
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x34,0x05, // CALL_FUNCTION 5
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0x12,0x51, // LOAD_GLOBAL 'print'
    0x10,0x43, // LOAD_CONST_STRING 'Done'
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x42,0x47, // JUMP 7
    0x12,0x51, // LOAD_GLOBAL 'print'
    0x23,0x0d, // LOAD_CONST_OBJ 13
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_mip___init___install = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_mip___init___install,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 100,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 4,
        .qstr_block_name_idx = 62,
        .line_info = fun_data_mip___init___install + 11,
        .line_info_top = fun_data_mip___init___install + 11,
        .opcodes = fun_data_mip___init___install + 11,
    },
    #endif
    #endif
};
#else
#define proto_fun_mip___init___install fun_data_mip___init___install[0]
#endif

static const mp_raw_code_t *const children_mip___init____lt_module_gt_[] = {
    (const mp_raw_code_t *)&proto_fun_mip___init____ensure_path_exists,
    (const mp_raw_code_t *)&proto_fun_mip___init____chunk,
    (const mp_raw_code_t *)&proto_fun_mip___init____check_exists,
    (const mp_raw_code_t *)&proto_fun_mip___init____rewrite_url,
    (const mp_raw_code_t *)&proto_fun_mip___init____download_file,
    (const mp_raw_code_t *)&proto_fun_mip___init____install_json,
    (const mp_raw_code_t *)&proto_fun_mip___init____install_package,
    (const mp_raw_code_t *)&proto_fun_mip___init___install,
};

static const mp_raw_code_truncated_t proto_fun_mip___init____lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_mip___init____lt_module_gt_,
    .children = (void *)&children_mip___init____lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 80,
    .n_children = 8,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_mip___init____lt_module_gt_ + 3,
        .line_info_top = fun_data_mip___init____lt_module_gt_ + 3,
        .opcodes = fun_data_mip___init____lt_module_gt_ + 3,
    },
    #endif
    #endif
};

static const qstr_short_t const_qstr_table_data_mip___init__[91] = {
    MP_QSTR_mip_slash___init___dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_sys,
    MP_QSTR_requests,
    MP_QSTR_const,
    MP_QSTR_micropython,
    MP_QSTR_0_dot_4_dot_2,
    MP_QSTR__ensure_path_exists,
    MP_QSTR_os,
    MP_QSTR_split,
    MP_QSTR__slash_,
    MP_QSTR_pop,
    MP_QSTR_,
    MP_QSTR_stat,
    MP_QSTR_mkdir,
    MP_QSTR__chunk,
    MP_QSTR_readinto,
    MP_QSTR__check_exists,
    MP_QSTR_binascii,
    MP_QSTR_hashlib,
    MP_QSTR_rb,
    MP_QSTR_sha256,
    MP_QSTR_update,
    MP_QSTR_hexlify,
    MP_QSTR_digest,
    MP_QSTR_utf_hyphen_8,
    MP_QSTR__rewrite_url,
    MP_QSTR_HEAD,
    MP_QSTR_startswith,
    MP_QSTR_github_colon_,
    MP_QSTR_join,
    MP_QSTR_gitlab_colon_,
    MP_QSTR__slash__hyphen__slash_raw_slash_,
    MP_QSTR__download_file,
    MP_QSTR_get,
    MP_QSTR_status_code,
    MP_QSTR_Error,
    MP_QSTR_requesting,
    MP_QSTR_Copying_colon_,
    MP_QSTR_wb,
    MP_QSTR_raw,
    MP_QSTR_write,
    MP_QSTR_close,
    MP_QSTR__install_json,
    MP_QSTR_json,
    MP_QSTR_hashes,
    MP_QSTR_Exists_colon_,
    MP_QSTR_format,
    MP_QSTR_rpartition,
    MP_QSTR_urls,
    MP_QSTR__brace_open__brace_close__slash__brace_open__brace_close_,
    MP_QSTR_deps,
    MP_QSTR__install_package,
    MP_QSTR_endswith,
    MP_QSTR__dot_py,
    MP_QSTR__dot_mpy,
    MP_QSTR_rsplit,
    MP_QSTR__dot_json,
    MP_QSTR_latest,
    MP_QSTR_implementation,
    MP_QSTR__mpy,
    MP_QSTR_py,
    MP_QSTR_install,
    MP_QSTR_path,
    MP_QSTR__slash_rom,
    MP_QSTR__slash_lib,
    MP_QSTR_rstrip,
    MP_QSTR_Done,
    MP_QSTR__lt_genexpr_gt_,
    MP_QSTR_allowed_mip_url_prefixes,
    MP_QSTR___version__,
    MP_QSTR_len,
    MP_QSTR_src,
    MP_QSTR_dest,
    MP_QSTR_memoryview,
    MP_QSTR_bytearray,
    MP_QSTR_short_hash,
    MP_QSTR_open,
    MP_QSTR_str,
    MP_QSTR_url,
    MP_QSTR_branch,
    MP_QSTR_print,
    MP_QSTR_package_json_url,
    MP_QSTR_index,
    MP_QSTR_target,
    MP_QSTR_version,
    MP_QSTR_mpy,
    MP_QSTR_any,
    MP_QSTR_package,
    MP_QSTR_hasattr,
    MP_QSTR__star_,
};

// constants
static const mp_rom_obj_tuple_t const_obj_mip___init___0 = {{&mp_type_tuple}, 4, {
    MP_ROM_QSTR(MP_QSTR_http_colon__slash__slash_),
    MP_ROM_QSTR(MP_QSTR_https_colon__slash__slash_),
    MP_ROM_QSTR(MP_QSTR_github_colon_),
    MP_ROM_QSTR(MP_QSTR_gitlab_colon_),
}};
static const mp_obj_str_t const_obj_mip___init___1 = {{&mp_type_str}, 35, 34, (const byte*)"\x68\x74\x74\x70\x73\x3a\x2f\x2f\x72\x61\x77\x2e\x67\x69\x74\x68\x75\x62\x75\x73\x65\x72\x63\x6f\x6e\x74\x65\x6e\x74\x2e\x63\x6f\x6d\x2f"};
static const mp_obj_str_t const_obj_mip___init___9 = {{&mp_type_str}, 72, 32, (const byte*)"\x49\x6e\x73\x74\x61\x6c\x6c\x69\x6e\x67\x20\x7b\x7d\x20\x28\x7b\x7d\x29\x20\x66\x72\x6f\x6d\x20\x7b\x7d\x20\x74\x6f\x20\x7b\x7d"};
static const mp_obj_str_t const_obj_mip___init___11 = {{&mp_type_str}, 207, 34, (const byte*)"\x55\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x66\x69\x6e\x64\x20\x6c\x69\x62\x20\x64\x69\x72\x20\x69\x6e\x20\x73\x79\x73\x2e\x70\x61\x74\x68"};
static const mp_obj_str_t const_obj_mip___init___12 = {{&mp_type_str}, 243, 29, (const byte*)"\x68\x74\x74\x70\x73\x3a\x2f\x2f\x6d\x69\x63\x72\x6f\x70\x79\x74\x68\x6f\x6e\x2e\x6f\x72\x67\x2f\x70\x69\x2f\x76\x32"};
static const mp_obj_str_t const_obj_mip___init___13 = {{&mp_type_str}, 171, 34, (const byte*)"\x50\x61\x63\x6b\x61\x67\x65\x20\x6d\x61\x79\x20\x62\x65\x20\x70\x61\x72\x74\x69\x61\x6c\x6c\x79\x20\x69\x6e\x73\x74\x61\x6c\x6c\x65\x64"};

// constant table
static const mp_rom_obj_t const_obj_table_data_mip___init__[14] = {
    MP_ROM_PTR(&const_obj_mip___init___0),
    MP_ROM_PTR(&const_obj_mip___init___1),
    MP_ROM_QSTR(MP_QSTR_https_colon__slash__slash_gitlab_dot_com_slash_),
    MP_ROM_QSTR(MP_QSTR_Package_space_not_space_found_colon_),
    MP_ROM_QSTR(MP_QSTR__brace_open__brace_close__slash_file_slash__brace_open__brace_close__slash__brace_open__brace_close_),
    MP_ROM_QSTR(MP_QSTR_File_space_not_space_found_colon__space__brace_open__brace_close__space__brace_open__brace_close_),
    MP_ROM_QSTR(MP_QSTR_Downloading_space__brace_open__brace_close__space_to_space__brace_open__brace_close_),
    MP_ROM_QSTR(MP_QSTR_package_dot_json),
    MP_ROM_QSTR(MP_QSTR_Installing_space__brace_open__brace_close__space_to_space__brace_open__brace_close_),
    MP_ROM_PTR(&const_obj_mip___init___9),
    MP_ROM_QSTR(MP_QSTR__brace_open__brace_close__slash_package_slash__brace_open__brace_close__slash__brace_open__brace_close__slash__brace_open__brace_close__dot_json),
    MP_ROM_PTR(&const_obj_mip___init___11),
    MP_ROM_PTR(&const_obj_mip___init___12),
    MP_ROM_PTR(&const_obj_mip___init___13),
};

static const mp_frozen_module_t frozen_module_mip___init__ = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_mip___init__,
        .obj_table = (mp_obj_t *)&const_obj_table_data_mip___init__,
    },
    .proto_fun = &proto_fun_mip___init____lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module ntptime
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/ntptime.mpy
// - frozen file name: ntptime.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file ntptime.py, scope ntptime__lt_module_gt_
static const byte fun_data_ntptime__lt_module_gt_[48] = {
    0x08,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING 'gmtime'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME 'time'
    0x1c,0x02, // IMPORT_FROM 'gmtime'
    0x16,0x02, // STORE_NAME 'gmtime'
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x04, // IMPORT_NAME 'socket'
    0x16,0x04, // STORE_NAME 'socket'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x05, // IMPORT_NAME 'struct'
    0x16,0x05, // STORE_NAME 'struct'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x16,0x15, // STORE_NAME 'host'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x16,0x16, // STORE_NAME 'timeout'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x03, // STORE_NAME 'time'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x11, // STORE_NAME 'settime'
    0x10,0x06, // LOAD_CONST_STRING '0.1.1'
    0x16,0x17, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of ntptime__lt_module_gt_
// frozen bytecode for file ntptime.py, scope ntptime_time
static const byte fun_data_ntptime_time[157] = {
    0x74,0x02, // prelude
    0x03, // names: time
     // code info
    0x12,0x18, // LOAD_GLOBAL 'bytearray'
    0x22,0x30, // LOAD_CONST_SMALL_INT 48
    0x34,0x01, // CALL_FUNCTION 1
    0xc0, // STORE_FAST 0
    0x9b, // LOAD_CONST_SMALL_INT 27
    0xb0, // LOAD_FAST 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0x56, // STORE_SUBSCR
    0x12,0x04, // LOAD_GLOBAL 'socket'
    0x14,0x07, // LOAD_METHOD 'getaddrinfo'
    0x12,0x15, // LOAD_GLOBAL 'host'
    0x22,0x80,0x7b, // LOAD_CONST_SMALL_INT 123
    0x36,0x02, // CALL_METHOD 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0xc1, // STORE_FAST 1
    0x12,0x04, // LOAD_GLOBAL 'socket'
    0x14,0x04, // LOAD_METHOD 'socket'
    0x12,0x04, // LOAD_GLOBAL 'socket'
    0x13,0x08, // LOAD_ATTR 'AF_INET'
    0x12,0x04, // LOAD_GLOBAL 'socket'
    0x13,0x09, // LOAD_ATTR 'SOCK_DGRAM'
    0x36,0x02, // CALL_METHOD 2
    0xc2, // STORE_FAST 2
    0x49,0x19, // SETUP_FINALLY 25
    0xb2, // LOAD_FAST 2
    0x14,0x0a, // LOAD_METHOD 'settimeout'
    0x12,0x16, // LOAD_GLOBAL 'timeout'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb2, // LOAD_FAST 2
    0x14,0x0b, // LOAD_METHOD 'sendto'
    0xb0, // LOAD_FAST 0
    0xb1, // LOAD_FAST 1
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0xb2, // LOAD_FAST 2
    0x14,0x0c, // LOAD_METHOD 'recv'
    0x22,0x30, // LOAD_CONST_SMALL_INT 48
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0x51, // LOAD_CONST_NONE
    0xb2, // LOAD_FAST 2
    0x14,0x0d, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x5d, // END_FINALLY
    0x12,0x05, // LOAD_GLOBAL 'struct'
    0x14,0x0e, // LOAD_METHOD 'unpack'
    0x10,0x0f, // LOAD_CONST_STRING '!I'
    0xb3, // LOAD_FAST 3
    0xa8, // LOAD_CONST_SMALL_INT 40
    0xac, // LOAD_CONST_SMALL_INT 44
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x36,0x02, // CALL_METHOD 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xc4, // STORE_FAST 4
    0x23,0x01, // LOAD_CONST_OBJ 1
    0xc5, // STORE_FAST 5
    0xb4, // LOAD_FAST 4
    0xb5, // LOAD_FAST 5
    0xd7, // BINARY_OP 0 __lt__
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0xb4, // LOAD_FAST 4
    0x23,0x02, // LOAD_CONST_OBJ 2
    0xe5, // BINARY_OP 14 __iadd__
    0xc4, // STORE_FAST 4
    0x12,0x02, // LOAD_GLOBAL 'gmtime'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x34,0x01, // CALL_FUNCTION 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xc6, // STORE_FAST 6
    0xb6, // LOAD_FAST 6
    0x22,0x8f,0x50, // LOAD_CONST_SMALL_INT 2000
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0x23,0x03, // LOAD_CONST_OBJ 3
    0xc7, // STORE_FAST 7
    0x42,0x58, // JUMP 24
    0xb6, // LOAD_FAST 6
    0x22,0x8f,0x32, // LOAD_CONST_SMALL_INT 1970
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0x23,0x04, // LOAD_CONST_OBJ 4
    0xc7, // STORE_FAST 7
    0x42,0x4c, // JUMP 12
    0x12,0x19, // LOAD_GLOBAL 'Exception'
    0x23,0x05, // LOAD_CONST_OBJ 5
    0x14,0x10, // LOAD_METHOD 'format'
    0xb6, // LOAD_FAST 6
    0x36,0x01, // CALL_METHOD 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb4, // LOAD_FAST 4
    0xb7, // LOAD_FAST 7
    0xf3, // BINARY_OP 28 __sub__
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_ntptime_time = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_ntptime_time,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 157,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 3,
        .line_info = fun_data_ntptime_time + 3,
        .line_info_top = fun_data_ntptime_time + 3,
        .opcodes = fun_data_ntptime_time + 3,
    },
    #endif
    #endif
};
#else
#define proto_fun_ntptime_time fun_data_ntptime_time[0]
#endif

// child of ntptime__lt_module_gt_
// frozen bytecode for file ntptime.py, scope ntptime_settime
static const byte fun_data_ntptime_settime[57] = {
    0x60,0x02, // prelude
    0x11, // names: settime
     // code info
    0x12,0x03, // LOAD_GLOBAL 'time'
    0x34,0x00, // CALL_FUNCTION 0
    0xc0, // STORE_FAST 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x12, // IMPORT_NAME 'machine'
    0xc1, // STORE_FAST 1
    0x12,0x02, // LOAD_GLOBAL 'gmtime'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0xc2, // STORE_FAST 2
    0xb1, // LOAD_FAST 1
    0x14,0x13, // LOAD_METHOD 'RTC'
    0x36,0x00, // CALL_METHOD 0
    0x14,0x14, // LOAD_METHOD 'datetime'
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xb2, // LOAD_FAST 2
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xb2, // LOAD_FAST 2
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0xb2, // LOAD_FAST 2
    0x86, // LOAD_CONST_SMALL_INT 6
    0x55, // LOAD_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf2, // BINARY_OP 27 __add__
    0xb2, // LOAD_FAST 2
    0x83, // LOAD_CONST_SMALL_INT 3
    0x55, // LOAD_SUBSCR
    0xb2, // LOAD_FAST 2
    0x84, // LOAD_CONST_SMALL_INT 4
    0x55, // LOAD_SUBSCR
    0xb2, // LOAD_FAST 2
    0x85, // LOAD_CONST_SMALL_INT 5
    0x55, // LOAD_SUBSCR
    0x80, // LOAD_CONST_SMALL_INT 0
    0x2a,0x08, // BUILD_TUPLE 8
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_ntptime_settime = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_ntptime_settime,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 57,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_ntptime_settime + 3,
        .line_info_top = fun_data_ntptime_settime + 3,
        .opcodes = fun_data_ntptime_settime + 3,
    },
    #endif
    #endif
};
#else
#define proto_fun_ntptime_settime fun_data_ntptime_settime[0]
#endif

static const mp_raw_code_t *const children_ntptime__lt_module_gt_[] = {
    (const mp_raw_code_t *)&proto_fun_ntptime_time,
    (const mp_raw_code_t *)&proto_fun_ntptime_settime,
};

static const mp_raw_code_truncated_t proto_fun_ntptime__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_ntptime__lt_module_gt_,
    .children = (void *)&children_ntptime__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 48,
    .n_children = 2,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_ntptime__lt_module_gt_ + 3,
        .line_info_top = fun_data_ntptime__lt_module_gt_ + 3,
        .opcodes = fun_data_ntptime__lt_module_gt_ + 3,
    },
    #endif
    #endif
};

static const qstr_short_t const_qstr_table_data_ntptime[26] = {
    MP_QSTR_ntptime_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_gmtime,
    MP_QSTR_time,
    MP_QSTR_socket,
    MP_QSTR_struct,
    MP_QSTR_0_dot_1_dot_1,
    MP_QSTR_getaddrinfo,
    MP_QSTR_AF_INET,
    MP_QSTR_SOCK_DGRAM,
    MP_QSTR_settimeout,
    MP_QSTR_sendto,
    MP_QSTR_recv,
    MP_QSTR_close,
    MP_QSTR_unpack,
    MP_QSTR__bang_I,
    MP_QSTR_format,
    MP_QSTR_settime,
    MP_QSTR_machine,
    MP_QSTR_RTC,
    MP_QSTR_datetime,
    MP_QSTR_host,
    MP_QSTR_timeout,
    MP_QSTR___version__,
    MP_QSTR_bytearray,
    MP_QSTR_Exception,
};

// constants
static const mp_obj_int_t const_obj_ntptime_1 = {{&mp_type_int}, {.neg=0, .fixed_dig=1, .alloc=2, .len=2, .dig=(uint16_t*)(const uint16_t[]){0x7f00,0xe93c}}};
static const mp_obj_int_t const_obj_ntptime_2 = {{&mp_type_int}, {.neg=0, .fixed_dig=1, .alloc=3, .len=3, .dig=(uint16_t*)(const uint16_t[]){0x0,0x0,0x1}}};
static const mp_obj_int_t const_obj_ntptime_3 = {{&mp_type_int}, {.neg=0, .fixed_dig=1, .alloc=2, .len=2, .dig=(uint16_t*)(const uint16_t[]){0xc200,0xbc17}}};
static const mp_obj_int_t const_obj_ntptime_4 = {{&mp_type_int}, {.neg=0, .fixed_dig=1, .alloc=2, .len=2, .dig=(uint16_t*)(const uint16_t[]){0x7e80,0x83aa}}};

// constant table
static const mp_rom_obj_t const_obj_table_data_ntptime[6] = {
    MP_ROM_QSTR(MP_QSTR_pool_dot_ntp_dot_org),
    MP_ROM_PTR(&const_obj_ntptime_1),
    MP_ROM_PTR(&const_obj_ntptime_2),
    MP_ROM_PTR(&const_obj_ntptime_3),
    MP_ROM_PTR(&const_obj_ntptime_4),
    MP_ROM_QSTR(MP_QSTR_Unsupported_space_epoch_colon__space__brace_open__brace_close_),
};

static const mp_frozen_module_t frozen_module_ntptime = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_ntptime,
        .obj_table = (mp_obj_t *)&const_obj_table_data_ntptime,
    },
    .proto_fun = &proto_fun_ntptime__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module ssl
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/ssl.mpy
// - frozen file name: ssl.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file ssl.py, scope ssl__lt_module_gt_
static const byte fun_data_ssl__lt_module_gt_[47] = {
    0x30,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'tls'
    0x16,0x02, // STORE_NAME 'tls'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x03, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x02, // IMPORT_NAME 'tls'
    0x69, // IMPORT_STAR
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'SSLContext'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'SSLContext'
    0x50, // LOAD_CONST_FALSE
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x11,0x13, // LOAD_NAME 'CERT_NONE'
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x52, // LOAD_CONST_TRUE
    0x2a,0x07, // BUILD_TUPLE 7
    0x53, // LOAD_NULL
    0x33,0x01, // MAKE_FUNCTION_DEFARGS 1
    0x16,0x07, // STORE_NAME 'wrap_socket'
    0x10,0x05, // LOAD_CONST_STRING '0.2.1'
    0x16,0x14, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of ssl__lt_module_gt_
// frozen bytecode for file ssl.py, scope ssl_SSLContext
static const byte fun_data_ssl_SSLContext[58] = {
    0x10,0x02, // prelude
    0x04, // names: SSLContext
     // code info
    0x11,0x15, // LOAD_NAME '__name__'
    0x16,0x16, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'SSLContext'
    0x16,0x17, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x0f, // STORE_NAME '__init__'
    0x11,0x18, // LOAD_NAME 'property'
    0x32,0x01, // MAKE_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x0b, // STORE_NAME 'verify_mode'
    0x11,0x0b, // LOAD_NAME 'verify_mode'
    0x13,0x06, // LOAD_ATTR 'setter'
    0x32,0x02, // MAKE_FUNCTION 2
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x0b, // STORE_NAME 'verify_mode'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x08, // STORE_NAME 'load_cert_chain'
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x04, // MAKE_FUNCTION_DEFARGS 4
    0x16,0x09, // STORE_NAME 'load_verify_locations'
    0x50, // LOAD_CONST_FALSE
    0x52, // LOAD_CONST_TRUE
    0x51, // LOAD_CONST_NONE
    0x2a,0x03, // BUILD_TUPLE 3
    0x53, // LOAD_NULL
    0x33,0x05, // MAKE_FUNCTION_DEFARGS 5
    0x16,0x07, // STORE_NAME 'wrap_socket'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of ssl_SSLContext
// frozen bytecode for file ssl.py, scope ssl_SSLContext___init__
static const byte fun_data_ssl_SSLContext___init__[27] = {
    0xa9,0x80,0x80,0x40,0x04, // prelude
    0x0f,0x20, // names: __init__, self
     // code info
    0x12,0x02, // LOAD_GLOBAL 'tls'
    0x14,0x04, // LOAD_METHOD 'SSLContext'
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0x37,0x01, // CALL_METHOD_VAR_KW 1
    0xb0, // LOAD_FAST 0
    0x18,0x10, // STORE_ATTR '_context'
    0x12,0x13, // LOAD_GLOBAL 'CERT_NONE'
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR '_context'
    0x18,0x0b, // STORE_ATTR 'verify_mode'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_ssl_SSLContext___init__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_ssl_SSLContext___init__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 27,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 4,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 15,
        .line_info = fun_data_ssl_SSLContext___init__ + 7,
        .line_info_top = fun_data_ssl_SSLContext___init__ + 7,
        .opcodes = fun_data_ssl_SSLContext___init__ + 7,
    },
    #endif
    #endif
};
#else
#define proto_fun_ssl_SSLContext___init__ fun_data_ssl_SSLContext___init__[0]
#endif

// child of ssl_SSLContext
// frozen bytecode for file ssl.py, scope ssl_SSLContext_verify_mode
static const byte fun_data_ssl_SSLContext_verify_mode[10] = {
    0x09,0x04, // prelude
    0x0b,0x20, // names: verify_mode, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR '_context'
    0x13,0x0b, // LOAD_ATTR 'verify_mode'
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_ssl_SSLContext_verify_mode = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_ssl_SSLContext_verify_mode,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 10,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 11,
        .line_info = fun_data_ssl_SSLContext_verify_mode + 4,
        .line_info_top = fun_data_ssl_SSLContext_verify_mode + 4,
        .opcodes = fun_data_ssl_SSLContext_verify_mode + 4,
    },
    #endif
    #endif
};
#else
#define proto_fun_ssl_SSLContext_verify_mode fun_data_ssl_SSLContext_verify_mode[0]
#endif

// child of ssl_SSLContext
// frozen bytecode for file ssl.py, scope ssl_SSLContext_verify_mode2
static const byte fun_data_ssl_SSLContext_verify_mode2[13] = {
    0x1a,0x06, // prelude
    0x0b,0x20,0x21, // names: verify_mode, self, val
     // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR '_context'
    0x18,0x0b, // STORE_ATTR 'verify_mode'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_ssl_SSLContext_verify_mode2 = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_ssl_SSLContext_verify_mode2,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 13,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 11,
        .line_info = fun_data_ssl_SSLContext_verify_mode2 + 5,
        .line_info_top = fun_data_ssl_SSLContext_verify_mode2 + 5,
        .opcodes = fun_data_ssl_SSLContext_verify_mode2 + 5,
    },
    #endif
    #endif
};
#else
#define proto_fun_ssl_SSLContext_verify_mode2 fun_data_ssl_SSLContext_verify_mode2[0]
#endif

// child of ssl_SSLContext
// frozen bytecode for file ssl.py, scope ssl_SSLContext_load_cert_chain
static const byte fun_data_ssl_SSLContext_load_cert_chain[74] = {
    0x47,0x08, // prelude
    0x08,0x20,0x22,0x23, // names: load_cert_chain, self, certfile, keyfile
     // code info
    0x12,0x24, // LOAD_GLOBAL 'isinstance'
    0xb1, // LOAD_FAST 1
    0x12,0x25, // LOAD_GLOBAL 'str'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x53, // POP_JUMP_IF_FALSE 19
    0x12,0x26, // LOAD_GLOBAL 'open'
    0xb1, // LOAD_FAST 1
    0x10,0x11, // LOAD_CONST_STRING 'rb'
    0x34,0x02, // CALL_FUNCTION 2
    0x47,0x08, // SETUP_WITH 8
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x14,0x12, // LOAD_METHOD 'read'
    0x36,0x00, // CALL_METHOD 0
    0xc1, // STORE_FAST 1
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x12,0x24, // LOAD_GLOBAL 'isinstance'
    0xb2, // LOAD_FAST 2
    0x12,0x25, // LOAD_GLOBAL 'str'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x53, // POP_JUMP_IF_FALSE 19
    0x12,0x26, // LOAD_GLOBAL 'open'
    0xb2, // LOAD_FAST 2
    0x10,0x11, // LOAD_CONST_STRING 'rb'
    0x34,0x02, // CALL_FUNCTION 2
    0x47,0x08, // SETUP_WITH 8
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x14,0x12, // LOAD_METHOD 'read'
    0x36,0x00, // CALL_METHOD 0
    0xc2, // STORE_FAST 2
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR '_context'
    0x14,0x08, // LOAD_METHOD 'load_cert_chain'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_ssl_SSLContext_load_cert_chain = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_ssl_SSLContext_load_cert_chain,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 74,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 8,
        .line_info = fun_data_ssl_SSLContext_load_cert_chain + 6,
        .line_info_top = fun_data_ssl_SSLContext_load_cert_chain + 6,
        .opcodes = fun_data_ssl_SSLContext_load_cert_chain + 6,
    },
    #endif
    #endif
};
#else
#define proto_fun_ssl_SSLContext_load_cert_chain fun_data_ssl_SSLContext_load_cert_chain[0]
#endif

// child of ssl_SSLContext
// frozen bytecode for file ssl.py, scope ssl_SSLContext_load_verify_locations
static const byte fun_data_ssl_SSLContext_load_verify_locations[41] = {
    0xc7,0x80,0x01,0x08, // prelude
    0x09,0x20,0x27,0x0a, // names: load_verify_locations, self, cafile, cadata
     // code info
    0xb1, // LOAD_FAST 1
    0x44,0x53, // POP_JUMP_IF_FALSE 19
    0x12,0x26, // LOAD_GLOBAL 'open'
    0xb1, // LOAD_FAST 1
    0x10,0x11, // LOAD_CONST_STRING 'rb'
    0x34,0x02, // CALL_FUNCTION 2
    0x47,0x08, // SETUP_WITH 8
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x14,0x12, // LOAD_METHOD 'read'
    0x36,0x00, // CALL_METHOD 0
    0xc2, // STORE_FAST 2
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR '_context'
    0x14,0x09, // LOAD_METHOD 'load_verify_locations'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_ssl_SSLContext_load_verify_locations = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_ssl_SSLContext_load_verify_locations,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 41,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 9,
        .line_info = fun_data_ssl_SSLContext_load_verify_locations + 8,
        .line_info_top = fun_data_ssl_SSLContext_load_verify_locations + 8,
        .opcodes = fun_data_ssl_SSLContext_load_verify_locations + 8,
    },
    #endif
    #endif
};
#else
#define proto_fun_ssl_SSLContext_load_verify_locations fun_data_ssl_SSLContext_load_verify_locations[0]
#endif

// child of ssl_SSLContext
// frozen bytecode for file ssl.py, scope ssl_SSLContext_wrap_socket
static const byte fun_data_ssl_SSLContext_wrap_socket[29] = {
    0xe9,0x85,0x01,0x0c, // prelude
    0x07,0x20,0x19,0x0c,0x0d,0x0e, // names: wrap_socket, self, sock, server_side, do_handshake_on_connect, server_hostname
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR '_context'
    0x14,0x07, // LOAD_METHOD 'wrap_socket'
    0xb1, // LOAD_FAST 1
    0x10,0x0c, // LOAD_CONST_STRING 'server_side'
    0xb2, // LOAD_FAST 2
    0x10,0x0d, // LOAD_CONST_STRING 'do_handshake_on_connect'
    0xb3, // LOAD_FAST 3
    0x10,0x0e, // LOAD_CONST_STRING 'server_hostname'
    0xb4, // LOAD_FAST 4
    0x36,0x86,0x01, // CALL_METHOD 769
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_ssl_SSLContext_wrap_socket = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_ssl_SSLContext_wrap_socket,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 29,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 14,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 3,
        .qstr_block_name_idx = 7,
        .line_info = fun_data_ssl_SSLContext_wrap_socket + 10,
        .line_info_top = fun_data_ssl_SSLContext_wrap_socket + 10,
        .opcodes = fun_data_ssl_SSLContext_wrap_socket + 10,
    },
    #endif
    #endif
};
#else
#define proto_fun_ssl_SSLContext_wrap_socket fun_data_ssl_SSLContext_wrap_socket[0]
#endif

static const mp_raw_code_t *const children_ssl_SSLContext[] = {
    (const mp_raw_code_t *)&proto_fun_ssl_SSLContext___init__,
    (const mp_raw_code_t *)&proto_fun_ssl_SSLContext_verify_mode,
    (const mp_raw_code_t *)&proto_fun_ssl_SSLContext_verify_mode2,
    (const mp_raw_code_t *)&proto_fun_ssl_SSLContext_load_cert_chain,
    (const mp_raw_code_t *)&proto_fun_ssl_SSLContext_load_verify_locations,
    (const mp_raw_code_t *)&proto_fun_ssl_SSLContext_wrap_socket,
};

static const mp_raw_code_truncated_t proto_fun_ssl_SSLContext = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_ssl_SSLContext,
    .children = (void *)&children_ssl_SSLContext,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 58,
    .n_children = 6,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_ssl_SSLContext + 3,
        .line_info_top = fun_data_ssl_SSLContext + 3,
        .opcodes = fun_data_ssl_SSLContext + 3,
    },
    #endif
    #endif
};

// child of ssl__lt_module_gt_
// frozen bytecode for file ssl.py, scope ssl_wrap_socket
static const byte fun_data_ssl_wrap_socket[76] = {
    0x88,0x91,0x85,0x01,0x12, // prelude
    0x07,0x19,0x0c,0x1a,0x1b,0x1c,0x0a,0x0e,0x1d, // names: wrap_socket, sock, server_side, key, cert, cert_reqs, cadata, server_hostname, do_handshake
     // code info
    0x12,0x04, // LOAD_GLOBAL 'SSLContext'
    0xb1, // LOAD_FAST 1
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x12,0x1e, // LOAD_GLOBAL 'PROTOCOL_TLS_SERVER'
    0x42,0x42, // JUMP 2
    0x12,0x1f, // LOAD_GLOBAL 'PROTOCOL_TLS_CLIENT'
    0x34,0x01, // CALL_FUNCTION 1
    0xc8, // STORE_FAST 8
    0xb3, // LOAD_FAST 3
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0xb2, // LOAD_FAST 2
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0xb8, // LOAD_FAST 8
    0x14,0x08, // LOAD_METHOD 'load_cert_chain'
    0xb3, // LOAD_FAST 3
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0xb5, // LOAD_FAST 5
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0xb8, // LOAD_FAST 8
    0x14,0x09, // LOAD_METHOD 'load_verify_locations'
    0x10,0x0a, // LOAD_CONST_STRING 'cadata'
    0xb5, // LOAD_FAST 5
    0x36,0x82,0x00, // CALL_METHOD 256
    0x59, // POP_TOP
    0xb4, // LOAD_FAST 4
    0xb8, // LOAD_FAST 8
    0x18,0x0b, // STORE_ATTR 'verify_mode'
    0xb8, // LOAD_FAST 8
    0x14,0x07, // LOAD_METHOD 'wrap_socket'
    0xb0, // LOAD_FAST 0
    0x10,0x0c, // LOAD_CONST_STRING 'server_side'
    0xb1, // LOAD_FAST 1
    0x10,0x0d, // LOAD_CONST_STRING 'do_handshake_on_connect'
    0xb7, // LOAD_FAST 7
    0x10,0x0e, // LOAD_CONST_STRING 'server_hostname'
    0xb6, // LOAD_FAST 6
    0x36,0x86,0x01, // CALL_METHOD 769
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_ssl_wrap_socket = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_ssl_wrap_socket,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 76,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 18,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 8,
        .n_kwonly_args = 0,
        .n_def_pos_args = 7,
        .qstr_block_name_idx = 7,
        .line_info = fun_data_ssl_wrap_socket + 14,
        .line_info_top = fun_data_ssl_wrap_socket + 14,
        .opcodes = fun_data_ssl_wrap_socket + 14,
    },
    #endif
    #endif
};
#else
#define proto_fun_ssl_wrap_socket fun_data_ssl_wrap_socket[0]
#endif

static const mp_raw_code_t *const children_ssl__lt_module_gt_[] = {
    (const mp_raw_code_t *)&proto_fun_ssl_SSLContext,
    (const mp_raw_code_t *)&proto_fun_ssl_wrap_socket,
};

static const mp_raw_code_truncated_t proto_fun_ssl__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_ssl__lt_module_gt_,
    .children = (void *)&children_ssl__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 47,
    .n_children = 2,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_ssl__lt_module_gt_ + 3,
        .line_info_top = fun_data_ssl__lt_module_gt_ + 3,
        .opcodes = fun_data_ssl__lt_module_gt_ + 3,
    },
    #endif
    #endif
};

static const qstr_short_t const_qstr_table_data_ssl[40] = {
    MP_QSTR_ssl_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_tls,
    MP_QSTR__star_,
    MP_QSTR_SSLContext,
    MP_QSTR_0_dot_2_dot_1,
    MP_QSTR_setter,
    MP_QSTR_wrap_socket,
    MP_QSTR_load_cert_chain,
    MP_QSTR_load_verify_locations,
    MP_QSTR_cadata,
    MP_QSTR_verify_mode,
    MP_QSTR_server_side,
    MP_QSTR_do_handshake_on_connect,
    MP_QSTR_server_hostname,
    MP_QSTR___init__,
    MP_QSTR__context,
    MP_QSTR_rb,
    MP_QSTR_read,
    MP_QSTR_CERT_NONE,
    MP_QSTR___version__,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_property,
    MP_QSTR_sock,
    MP_QSTR_key,
    MP_QSTR_cert,
    MP_QSTR_cert_reqs,
    MP_QSTR_do_handshake,
    MP_QSTR_PROTOCOL_TLS_SERVER,
    MP_QSTR_PROTOCOL_TLS_CLIENT,
    MP_QSTR_self,
    MP_QSTR_val,
    MP_QSTR_certfile,
    MP_QSTR_keyfile,
    MP_QSTR_isinstance,
    MP_QSTR_str,
    MP_QSTR_open,
    MP_QSTR_cafile,
};

static const mp_frozen_module_t frozen_module_ssl = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_ssl,
        .obj_table = NULL,
    },
    .proto_fun = &proto_fun_ssl__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module urequests
// - original source file: /run/media/totally-not-asuka/Games/MP-REPL/WIZnet-EVB-Pico-micropython/ports/rp2/build-W5100S_EVB_PICO2/frozen_mpy/urequests.mpy
// - frozen file name: urequests.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file urequests.py, scope urequests__lt_module_gt_
static const byte fun_data_urequests__lt_module_gt_[17] = {
    0x00,0x0a, // prelude
    0x01, // names: <module>
    0x60,0x20,0x64,0x60, // code info
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x03, // STORE_NAME '__getattr__'
    0x10,0x02, // LOAD_CONST_STRING '0.8.0'
    0x16,0x05, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of urequests__lt_module_gt_
// frozen bytecode for file urequests.py, scope urequests___getattr__
static const byte fun_data_urequests___getattr__[19] = {
    0x21,0x0a, // prelude
    0x03,0x06, // names: __getattr__, attr
    0x60,0x40,0x45, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x04, // IMPORT_NAME 'requests'
    0xc1, // STORE_FAST 1
    0x12,0x07, // LOAD_GLOBAL 'getattr'
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0x63, // RETURN_VALUE
};
#if MICROPY_PERSISTENT_CODE_SAVE
static const mp_raw_code_truncated_t proto_fun_urequests___getattr__ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_urequests___getattr__,
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 19,
    .n_children = 0,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 3,
        .line_info = fun_data_urequests___getattr__ + 4,
        .line_info_top = fun_data_urequests___getattr__ + 7,
        .opcodes = fun_data_urequests___getattr__ + 7,
    },
    #endif
    #endif
};
#else
#define proto_fun_urequests___getattr__ fun_data_urequests___getattr__[0]
#endif

static const mp_raw_code_t *const children_urequests__lt_module_gt_[] = {
    (const mp_raw_code_t *)&proto_fun_urequests___getattr__,
};

static const mp_raw_code_truncated_t proto_fun_urequests__lt_module_gt_ = {
    .proto_fun_indicator[0] = MP_PROTO_FUN_INDICATOR_RAW_CODE_0,
    .proto_fun_indicator[1] = MP_PROTO_FUN_INDICATOR_RAW_CODE_1,
    .kind = MP_CODE_BYTECODE,
    .is_generator = 0,
    .fun_data = fun_data_urequests__lt_module_gt_,
    .children = (void *)&children_urequests__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .fun_data_len = 17,
    .n_children = 1,
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #if MICROPY_PY_SYS_SETTRACE
    .line_of_definition = 0,
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_urequests__lt_module_gt_ + 3,
        .line_info_top = fun_data_urequests__lt_module_gt_ + 7,
        .opcodes = fun_data_urequests__lt_module_gt_ + 7,
    },
    #endif
    #endif
};

static const qstr_short_t const_qstr_table_data_urequests[8] = {
    MP_QSTR_urequests_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_0_dot_8_dot_0,
    MP_QSTR___getattr__,
    MP_QSTR_requests,
    MP_QSTR___version__,
    MP_QSTR_attr,
    MP_QSTR_getattr,
};

static const mp_frozen_module_t frozen_module_urequests = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_urequests,
        .obj_table = NULL,
    },
    .proto_fun = &proto_fun_urequests__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// collection of all frozen modules

const char mp_frozen_names[] = {
    #ifdef MP_FROZEN_STR_NAMES
    MP_FROZEN_STR_NAMES
    #endif
    "_boot_fat.py\0"
    "_boot.py\0"
    "rp2.py\0"
    "asyncio/__init__.py\0"
    "asyncio/core.py\0"
    "asyncio/event.py\0"
    "asyncio/funcs.py\0"
    "asyncio/lock.py\0"
    "asyncio/stream.py\0"
    "uasyncio.py\0"
    "onewire.py\0"
    "ds18x20.py\0"
    "dht.py\0"
    "neopixel.py\0"
    "tcp_config.py\0"
    "extras.py\0"
    "boot.py\0"
    "settings.py\0"
    "config.py\0"
    "webrepl_cfg.py\0"
    "webrepl.py\0"
    "requests/__init__.py\0"
    "mip/__init__.py\0"
    "ntptime.py\0"
    "ssl.py\0"
    "urequests.py\0"
    "\0"
};

const mp_frozen_module_t *const mp_frozen_mpy_content[] = {
    &frozen_module__boot_fat,
    &frozen_module__boot,
    &frozen_module_rp2,
    &frozen_module_asyncio___init__,
    &frozen_module_asyncio_core,
    &frozen_module_asyncio_event,
    &frozen_module_asyncio_funcs,
    &frozen_module_asyncio_lock,
    &frozen_module_asyncio_stream,
    &frozen_module_uasyncio,
    &frozen_module_onewire,
    &frozen_module_ds18x20,
    &frozen_module_dht,
    &frozen_module_neopixel,
    &frozen_module_tcp_config,
    &frozen_module_extras,
    &frozen_module_boot,
    &frozen_module_settings,
    &frozen_module_config,
    &frozen_module_webrepl_cfg,
    &frozen_module_webrepl,
    &frozen_module_requests___init__,
    &frozen_module_mip___init__,
    &frozen_module_ntptime,
    &frozen_module_ssl,
    &frozen_module_urequests,
};

#ifdef MICROPY_FROZEN_LIST_ITEM
MICROPY_FROZEN_LIST_ITEM("_boot_fat", "_boot_fat.py")
MICROPY_FROZEN_LIST_ITEM("_boot", "_boot.py")
MICROPY_FROZEN_LIST_ITEM("rp2", "rp2.py")
MICROPY_FROZEN_LIST_ITEM("asyncio", "asyncio/__init__.py")
MICROPY_FROZEN_LIST_ITEM("asyncio/core", "asyncio/core.py")
MICROPY_FROZEN_LIST_ITEM("asyncio/event", "asyncio/event.py")
MICROPY_FROZEN_LIST_ITEM("asyncio/funcs", "asyncio/funcs.py")
MICROPY_FROZEN_LIST_ITEM("asyncio/lock", "asyncio/lock.py")
MICROPY_FROZEN_LIST_ITEM("asyncio/stream", "asyncio/stream.py")
MICROPY_FROZEN_LIST_ITEM("uasyncio", "uasyncio.py")
MICROPY_FROZEN_LIST_ITEM("onewire", "onewire.py")
MICROPY_FROZEN_LIST_ITEM("ds18x20", "ds18x20.py")
MICROPY_FROZEN_LIST_ITEM("dht", "dht.py")
MICROPY_FROZEN_LIST_ITEM("neopixel", "neopixel.py")
MICROPY_FROZEN_LIST_ITEM("tcp_config", "tcp_config.py")
MICROPY_FROZEN_LIST_ITEM("extras", "extras.py")
MICROPY_FROZEN_LIST_ITEM("boot", "boot.py")
MICROPY_FROZEN_LIST_ITEM("settings", "settings.py")
MICROPY_FROZEN_LIST_ITEM("config", "config.py")
MICROPY_FROZEN_LIST_ITEM("webrepl_cfg", "webrepl_cfg.py")
MICROPY_FROZEN_LIST_ITEM("webrepl", "webrepl.py")
MICROPY_FROZEN_LIST_ITEM("requests", "requests/__init__.py")
MICROPY_FROZEN_LIST_ITEM("mip", "mip/__init__.py")
MICROPY_FROZEN_LIST_ITEM("ntptime", "ntptime.py")
MICROPY_FROZEN_LIST_ITEM("ssl", "ssl.py")
MICROPY_FROZEN_LIST_ITEM("urequests", "urequests.py")
#endif

/*
byte sizes:
qstr content: 375 unique, 4272 bytes
bc content: 13135
const str content: 980
const int content: 22
const obj content: 780
const table qstr content: 0 entries, 0 bytes
const table ptr content: 99 entries, 396 bytes
raw code content: 224 * 4 = 3584
mp_frozen_mpy_names_content: 335
mp_frozen_mpy_content_size: 104
total: 23608
*/
