#include <javax/swing/text/rtf/charsets/mac.txt.resource.h>

namespace javax {
    namespace swing {
        namespace text {
            namespace rtf {
                namespace charsets {

const char mac$txt$resource$data[] =
"/* MS RTF MacRoman character set */\n"
"/* Derived from tables on ftp.unicode.org */\n"
"/* original header: follows: */\n"
"#    Name:     cp10000_MacRoman to Unicode table\n"
"#    Unicode version: 2.0\n"
"#    Table version: 2.00\n"
"#    Table format:  Format A\n"
"#    Date:          04/24/96\n"
"#    Authors:       Lori Brownell <loribr@microsoft.com>\n"
"#                   K.D. Chang    <a-kchang@microsoft.com>\n"
"#    General notes: none\n"
"0	1	2	3	4	5	6	7	\n"
"8	9	10	11	12	13	14	15	\n"
"16	17	18	19	20	21	22	23	\n"
"24	25	26	27	28	29	30	31	\n"
"32	33	34	35	36	37	38	39	\n"
"40	41	42	43	44	45	46	47	\n"
"48	49	50	51	52	53	54	55	\n"
"56	57	58	59	60	61	62	63	\n"
"64	65	66	67	68	69	70	71	\n"
"72	73	74	75	76	77	78	79	\n"
"80	81	82	83	84	85	86	87	\n"
"88	89	90	91	92	93	94	95	\n"
"96	97	98	99	100	101	102	103	\n"
"104	105	106	107	108	109	110	111	\n"
"112	113	114	115	116	117	118	119	\n"
"120	121	122	123	124	125	126	127	\n"
"196	197	199	201	209	214	220	225	\n"
"224	226	228	227	229	231	233	232	\n"
"234	235	237	236	238	239	241	243	\n"
"242	244	246	245	250	249	251	252	\n"
"8224	176	162	163	167	8226	182	223	\n"
"174	169	8482	180	168	8800	198	216	\n"
"8734	177	8804	8805	165	181	8706	8721	\n"
"8719	960	8747	170	186	8486	230	248	\n"
"191	161	172	8730	402	8776	8710	171	\n"
"187	8230	160	192	195	213	338	339	\n"
"8211	8212	8220	8221	8216	8217	247	9674	\n"
"255	376	8260	164	8249	8250	64257	64258	\n"
"8225	183	8218	8222	8240	194	202	193	\n"
"203	200	205	206	207	204	211	212	\n"
"0	210	218	219	217	305	710	732	\n"
"175	728	729	730	184	733	731	711	\n";

int8_t* mac$txt$resource::get(int32_t& length) {
    length = sizeof(mac$txt$resource$data) - 1;
    return (int8_t*)mac$txt$resource$data;
}

                } // charsets
            } // rtf
        } // text
    } // swing
} // javax
