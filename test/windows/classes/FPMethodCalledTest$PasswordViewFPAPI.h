#ifndef _FPMethodCalledTest$PasswordViewFPAPI_h_
#define _FPMethodCalledTest$PasswordViewFPAPI_h_
//$ class FPMethodCalledTest$PasswordViewFPAPI
//$ extends javax.swing.text.PasswordView
//$ implements FPMethodCalledTest$Resultable

#include <FPMethodCalledTest$Resultable.h>
#include <javax/swing/text/PasswordView.h>

namespace java {
	namespace awt {
		class Graphics2D;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
		}
	}
}

class $export FPMethodCalledTest$PasswordViewFPAPI : public ::javax::swing::text::PasswordView, public ::FPMethodCalledTest$Resultable {
	$class(FPMethodCalledTest$PasswordViewFPAPI, $NO_CLASS_INIT, ::javax::swing::text::PasswordView, ::FPMethodCalledTest$Resultable)
public:
	FPMethodCalledTest$PasswordViewFPAPI();
	using ::javax::swing::text::PasswordView::drawEchoCharacter;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::Element* elem);
	virtual float drawEchoCharacter(::java::awt::Graphics2D* g, float x, float y, char16_t c) override;
	virtual bool getResult() override;
	using ::javax::swing::text::PasswordView::modelToView;
	using ::javax::swing::text::PasswordView::viewToModel;
	virtual $String* toString() override;
	bool isFPMethodCalled = false;
};

#endif // _FPMethodCalledTest$PasswordViewFPAPI_h_