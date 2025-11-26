#ifndef _javax_swing_JEditorPane$HeaderParser_h_
#define _javax_swing_JEditorPane$HeaderParser_h_
//$ class javax.swing.JEditorPane$HeaderParser
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {

class $export JEditorPane$HeaderParser : public ::java::lang::Object {
	$class(JEditorPane$HeaderParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JEditorPane$HeaderParser();
	void init$($String* raw);
	virtual int32_t findInt($String* k, int32_t Default);
	virtual $String* findKey(int32_t i);
	virtual $String* findValue(int32_t i);
	virtual $String* findValue($String* key);
	virtual $String* findValue($String* k, $String* Default);
	void parse();
	$String* raw = nullptr;
	$Array<::java::lang::String, 2>* tab = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JEditorPane$HeaderParser_h_