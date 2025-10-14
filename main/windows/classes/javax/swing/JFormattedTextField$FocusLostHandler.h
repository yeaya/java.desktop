#ifndef _javax_swing_JFormattedTextField$FocusLostHandler_h_
#define _javax_swing_JFormattedTextField$FocusLostHandler_h_
//$ class javax.swing.JFormattedTextField$FocusLostHandler
//$ extends java.lang.Runnable
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		class JFormattedTextField;
	}
}

namespace javax {
	namespace swing {

class JFormattedTextField$FocusLostHandler : public ::java::lang::Runnable, public ::java::io::Serializable {
	$class(JFormattedTextField$FocusLostHandler, $NO_CLASS_INIT, ::java::lang::Runnable, ::java::io::Serializable)
public:
	JFormattedTextField$FocusLostHandler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JFormattedTextField* this$0);
	virtual void run() override;
	virtual $String* toString() override;
	::javax::swing::JFormattedTextField* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JFormattedTextField$FocusLostHandler_h_