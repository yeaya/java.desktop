#ifndef _FPMethodCalledTest$PasswordViewINTAPI_h_
#define _FPMethodCalledTest$PasswordViewINTAPI_h_
//$ class FPMethodCalledTest$PasswordViewINTAPI
//$ extends javax.swing.text.PasswordView
//$ implements FPMethodCalledTest$Resultable

#include <FPMethodCalledTest$Resultable.h>
#include <javax/swing/text/PasswordView.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
		}
	}
}

class $export FPMethodCalledTest$PasswordViewINTAPI : public ::javax::swing::text::PasswordView, public ::FPMethodCalledTest$Resultable {
	$class(FPMethodCalledTest$PasswordViewINTAPI, $NO_CLASS_INIT, ::javax::swing::text::PasswordView, ::FPMethodCalledTest$Resultable)
public:
	FPMethodCalledTest$PasswordViewINTAPI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::text::PasswordView::drawEchoCharacter;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::Element* elem);
	virtual int32_t drawEchoCharacter(::java::awt::Graphics* g, int32_t x, int32_t y, char16_t c) override;
	virtual bool getResult() override;
	using ::javax::swing::text::PasswordView::modelToView;
	using ::javax::swing::text::PasswordView::viewToModel;
	virtual $String* toString() override;
	bool isIntMethodCalled = false;
};

#endif // _FPMethodCalledTest$PasswordViewINTAPI_h_