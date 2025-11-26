#ifndef _FPMethodCalledTest$PlainViewINTAPI_h_
#define _FPMethodCalledTest$PlainViewINTAPI_h_
//$ class FPMethodCalledTest$PlainViewINTAPI
//$ extends javax.swing.text.PlainView
//$ implements FPMethodCalledTest$Resultable

#include <FPMethodCalledTest$Resultable.h>
#include <javax/swing/text/PlainView.h>

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

class $export FPMethodCalledTest$PlainViewINTAPI : public ::javax::swing::text::PlainView, public ::FPMethodCalledTest$Resultable {
	$class(FPMethodCalledTest$PlainViewINTAPI, $NO_CLASS_INIT, ::javax::swing::text::PlainView, ::FPMethodCalledTest$Resultable)
public:
	FPMethodCalledTest$PlainViewINTAPI();
	using ::javax::swing::text::PlainView::drawLine;
	using ::javax::swing::text::PlainView::drawUnselectedText;
	using ::javax::swing::text::PlainView::drawSelectedText;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::Element* elem);
	virtual void drawLine(int32_t lineIndex, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual int32_t drawSelectedText(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) override;
	virtual int32_t drawUnselectedText(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) override;
	virtual bool getResult() override;
	using ::javax::swing::text::PlainView::modelToView;
	using ::javax::swing::text::PlainView::viewToModel;
	virtual $String* toString() override;
	bool drawLine$ = false;
	bool drawSelected = false;
	bool drawUnselected = false;
};

#endif // _FPMethodCalledTest$PlainViewINTAPI_h_