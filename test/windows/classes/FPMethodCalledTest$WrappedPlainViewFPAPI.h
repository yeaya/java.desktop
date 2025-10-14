#ifndef _FPMethodCalledTest$WrappedPlainViewFPAPI_h_
#define _FPMethodCalledTest$WrappedPlainViewFPAPI_h_
//$ class FPMethodCalledTest$WrappedPlainViewFPAPI
//$ extends javax.swing.text.WrappedPlainView
//$ implements FPMethodCalledTest$Resultable

#include <FPMethodCalledTest$Resultable.h>
#include <javax/swing/text/WrappedPlainView.h>

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

class $export FPMethodCalledTest$WrappedPlainViewFPAPI : public ::javax::swing::text::WrappedPlainView, public ::FPMethodCalledTest$Resultable {
	$class(FPMethodCalledTest$WrappedPlainViewFPAPI, $NO_CLASS_INIT, ::javax::swing::text::WrappedPlainView, ::FPMethodCalledTest$Resultable)
public:
	FPMethodCalledTest$WrappedPlainViewFPAPI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::text::WrappedPlainView::drawLine;
	using ::javax::swing::text::WrappedPlainView::drawUnselectedText;
	using ::javax::swing::text::WrappedPlainView::drawSelectedText;
	using ::javax::swing::text::WrappedPlainView::getViewIndex;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::Element* elem);
	virtual void drawLine(int32_t p0, int32_t p1, ::java::awt::Graphics2D* g, float x, float y) override;
	virtual float drawSelectedText(::java::awt::Graphics2D* g, float x, float y, int32_t p0, int32_t p1) override;
	virtual float drawUnselectedText(::java::awt::Graphics2D* g, float x, float y, int32_t p0, int32_t p1) override;
	virtual bool getResult() override;
	using ::javax::swing::text::WrappedPlainView::updateChildren;
	using ::javax::swing::text::WrappedPlainView::modelToView;
	using ::javax::swing::text::WrappedPlainView::viewToModel;
	virtual $String* toString() override;
	bool drawLine$ = false;
	bool drawSelected = false;
	bool drawUnselected = false;
};

#endif // _FPMethodCalledTest$WrappedPlainViewFPAPI_h_