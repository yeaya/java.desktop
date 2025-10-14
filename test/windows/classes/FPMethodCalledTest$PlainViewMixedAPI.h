#ifndef _FPMethodCalledTest$PlainViewMixedAPI_h_
#define _FPMethodCalledTest$PlainViewMixedAPI_h_
//$ class FPMethodCalledTest$PlainViewMixedAPI
//$ extends javax.swing.text.PlainView
//$ implements FPMethodCalledTest$Resultable

#include <FPMethodCalledTest$Resultable.h>
#include <javax/swing/text/PlainView.h>

namespace java {
	namespace awt {
		class Graphics;
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

class $export FPMethodCalledTest$PlainViewMixedAPI : public ::javax::swing::text::PlainView, public ::FPMethodCalledTest$Resultable {
	$class(FPMethodCalledTest$PlainViewMixedAPI, $NO_CLASS_INIT, ::javax::swing::text::PlainView, ::FPMethodCalledTest$Resultable)
public:
	FPMethodCalledTest$PlainViewMixedAPI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::Element* elem);
	virtual int32_t drawSelectedText(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) override;
	virtual float drawSelectedText(::java::awt::Graphics2D* g, float x, float y, int32_t p0, int32_t p1) override;
	virtual bool getResult() override;
	using ::javax::swing::text::PlainView::modelToView;
	using ::javax::swing::text::PlainView::viewToModel;
	virtual $String* toString() override;
	bool isIntMethodCalled = false;
	bool isFPMethodCalled = false;
};

#endif // _FPMethodCalledTest$PlainViewMixedAPI_h_