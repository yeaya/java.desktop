#ifndef _FPMethodCalledTest$PlainViewFPAPI_h_
#define _FPMethodCalledTest$PlainViewFPAPI_h_
//$ class FPMethodCalledTest$PlainViewFPAPI
//$ extends javax.swing.text.PlainView
//$ implements FPMethodCalledTest$Resultable

#include <FPMethodCalledTest$Resultable.h>
#include <javax/swing/text/PlainView.h>

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

class $export FPMethodCalledTest$PlainViewFPAPI : public ::javax::swing::text::PlainView, public ::FPMethodCalledTest$Resultable {
	$class(FPMethodCalledTest$PlainViewFPAPI, $NO_CLASS_INIT, ::javax::swing::text::PlainView, ::FPMethodCalledTest$Resultable)
public:
	FPMethodCalledTest$PlainViewFPAPI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::text::PlainView::drawLine;
	using ::javax::swing::text::PlainView::drawUnselectedText;
	using ::javax::swing::text::PlainView::drawSelectedText;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::Element* elem);
	virtual void drawLine(int32_t lineIndex, ::java::awt::Graphics2D* g, float x, float y) override;
	virtual float drawSelectedText(::java::awt::Graphics2D* g, float x, float y, int32_t p0, int32_t p1) override;
	virtual float drawUnselectedText(::java::awt::Graphics2D* g, float x, float y, int32_t p0, int32_t p1) override;
	virtual bool getResult() override;
	using ::javax::swing::text::PlainView::modelToView;
	using ::javax::swing::text::PlainView::viewToModel;
	virtual $String* toString() override;
	bool drawLine$ = false;
	bool drawSelected = false;
	bool drawUnselected = false;
};

#endif // _FPMethodCalledTest$PlainViewFPAPI_h_