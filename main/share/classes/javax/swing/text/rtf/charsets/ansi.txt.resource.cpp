#include <javax/swing/text/rtf/charsets/ansi.txt.resource.h>

namespace javax {
    namespace swing {
        namespace text {
            namespace rtf {
                namespace charsets {

const char ansi$txt$resource$data[] =
"# The character set used to read documents with the \\ansi control\n"
"# word. The default \"ansi\" character set doesn't seem to be defined\n"
"# anywhere; this table is derived from the behavior of MSWord97\n"
"# and some guesswork. For the most part it corresponds to\n"
"# ISO 8859 Latin-1.\n"
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
"\n"
"1026	1027	8218	402	8222	8230	8224	8225\n"
"710	8240	352	8249	346	356	381	377\n"
"1106	0	0	0	0	0	0	0\n"
"0	8482	353	8250	347	357	382	378\n"
"0	161	162	163	164	165	166	167\n"
"168	169	170	171	172	173	174	175\n"
"176	177	178	179	180	181	182	183\n"
"184	185	186	187	188	189	190	191\n"
"192	193	194	195	196	197	198	199\n"
"200	201	202	203	204	205	206	207\n"
"208	209	210	211	212	213	214	215\n"
"216	217	218	219	220	221	222	223\n"
"224	225	226	227	228	229	230	231\n"
"232	233	234	235	236	237	238	239\n"
"240	241	242	243	244	245	246	247\n"
"248	249	250	251	252	253	254	255\n";

int8_t* ansi$txt$resource::get(int32_t& length) {
    length = sizeof(ansi$txt$resource$data) - 1;
    return (int8_t*)ansi$txt$resource$data;
}

                } // charsets
            } // rtf
        } // text
    } // swing
} // javax
