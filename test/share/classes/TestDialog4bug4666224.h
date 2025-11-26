#ifndef _TestDialog4bug4666224_h_
#define _TestDialog4bug4666224_h_
//$ class TestDialog4bug4666224
//$ extends java.awt.Dialog

#include <java/awt/Dialog.h>
#include <java/lang/Array.h>

class TestDialog4bug4666224$HandleAssert;
class TestDialog4bug4666224$RemarksDialog;
namespace java {
	namespace awt {
		class Button;
		class Frame;
		class Panel;
		class TextArea;
	}
}

class TestDialog4bug4666224 : public ::java::awt::Dialog {
	$class(TestDialog4bug4666224, $NO_CLASS_INIT, ::java::awt::Dialog)
public:
	TestDialog4bug4666224();
	using ::java::awt::Dialog::add;
	using ::java::awt::Dialog::getMousePosition;
	void init$(::java::awt::Frame* frame, $String* name);
	virtual void displayMessage($String* messageIn);
	virtual void emptyMessage();
	using ::java::awt::Dialog::isFocusCycleRoot;
	using ::java::awt::Dialog::list;
	virtual void printInstructions($StringArray* instructions);
	using ::java::awt::Dialog::remove;
	virtual void setExceptionMessages($StringArray* exceptionMessages);
	virtual void setInstructions($Array<::java::lang::String, 2>* insStr);
	using ::java::awt::Dialog::show;
	::java::awt::TextArea* instructionsText = nullptr;
	::java::awt::TextArea* messageText = nullptr;
	int32_t maxStringLength = 0;
	::java::awt::Panel* assertPanel = nullptr;
	::java::awt::Button* assertPass = nullptr;
	::java::awt::Button* assertFail = nullptr;
	::java::awt::Button* remarks = nullptr;
	::TestDialog4bug4666224$HandleAssert* handleAssert = nullptr;
	bool failStatus = false;
	int32_t instructionCounter = 0;
	$Array<::java::lang::String, 2>* instructions = nullptr;
	int32_t exceptionCounter = 0;
	$StringArray* exceptionMessages = nullptr;
	$String* failureMessages = nullptr;
	$String* remarksMessage = nullptr;
	::TestDialog4bug4666224$RemarksDialog* remarksDialog = nullptr;
};

#endif // _TestDialog4bug4666224_h_