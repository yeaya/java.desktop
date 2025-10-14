#ifndef _VerifyTargetTest_h_
#define _VerifyTargetTest_h_
//$ class VerifyTargetTest
//$ extends javax.swing.InputVerifier
//$ implements java.awt.event.FocusListener

#include <java/awt/event/FocusListener.h>
#include <java/lang/Array.h>
#include <javax/swing/InputVerifier.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JFrame;
		class JTextField;
	}
}

class $export VerifyTargetTest : public ::javax::swing::InputVerifier, public ::java::awt::event::FocusListener {
	$class(VerifyTargetTest, $NO_CLASS_INIT, ::javax::swing::InputVerifier, ::java::awt::event::FocusListener)
public:
	VerifyTargetTest();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	static void lambda$main$0();
	static void lambda$main$1();
	static void main($StringArray* args);
	static void setup();
	virtual $String* toString() override;
	virtual bool verify(::javax::swing::JComponent* input) override;
	virtual bool verifyTarget(::javax::swing::JComponent* input) override;
	static bool success;
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTextField* field2;
};

#endif // _VerifyTargetTest_h_