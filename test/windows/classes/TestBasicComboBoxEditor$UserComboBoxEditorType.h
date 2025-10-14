#ifndef _TestBasicComboBoxEditor$UserComboBoxEditorType_h_
#define _TestBasicComboBoxEditor$UserComboBoxEditorType_h_
//$ class TestBasicComboBoxEditor$UserComboBoxEditorType
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export TestBasicComboBoxEditor$UserComboBoxEditorType : public ::java::lang::Object {
	$class(TestBasicComboBoxEditor$UserComboBoxEditorType, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestBasicComboBoxEditor$UserComboBoxEditorType();
	void init$($String* str);
	virtual $String* toString() override;
	static ::TestBasicComboBoxEditor$UserComboBoxEditorType* valueOf($String* str);
	$String* str = nullptr;
};

#endif // _TestBasicComboBoxEditor$UserComboBoxEditorType_h_