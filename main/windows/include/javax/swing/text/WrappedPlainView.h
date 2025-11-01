#ifndef _javax_swing_text_WrappedPlainView_h_
#define _javax_swing_text_WrappedPlainView_h_
//$ class javax.swing.text.WrappedPlainView
//$ extends javax.swing.text.BoxView
//$ implements javax.swing.text.TabExpander

#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/TabExpander.h>

namespace java {
	namespace awt {
		class Color;
		class FontMetrics;
		class Graphics;
		class Graphics2D;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class Segment;
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import WrappedPlainView : public ::javax::swing::text::BoxView, public ::javax::swing::text::TabExpander {
	$class(WrappedPlainView, $NO_CLASS_INIT, ::javax::swing::text::BoxView, ::javax::swing::text::TabExpander)
public:
	WrappedPlainView();
	using ::javax::swing::text::BoxView::getViewIndex;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::Element* elem);
	void init$(::javax::swing::text::Element* elem, bool wordWrap);
	virtual int32_t calculateBreakPosition(int32_t p0, int32_t p1);
	float callDrawSelectedText(::java::awt::Graphics* g, float x, float y, int32_t p0, int32_t p1);
	float callDrawUnselectedText(::java::awt::Graphics* g, float x, float y, int32_t p0, int32_t p1);
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual void drawLine(int32_t p0, int32_t p1, ::java::awt::Graphics* g, int32_t x, int32_t y);
	virtual void drawLine(int32_t p0, int32_t p1, ::java::awt::Graphics2D* g, float x, float y);
	void drawLineImpl(int32_t p0, int32_t p1, ::java::awt::Graphics* g, float x, float y, bool useFPAPI);
	virtual int32_t drawSelectedText(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1);
	virtual float drawSelectedText(::java::awt::Graphics2D* g, float x, float y, int32_t p0, int32_t p1);
	float drawSelectedTextImpl(::java::awt::Graphics* g, float x, float y, int32_t p0, int32_t p1, bool useFPAPI);
	float drawText(::javax::swing::text::Element* elem, int32_t p0, int32_t p1, ::java::awt::Graphics* g, float x, float y);
	virtual int32_t drawUnselectedText(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1);
	virtual float drawUnselectedText(::java::awt::Graphics2D* g, float x, float y, int32_t p0, int32_t p1);
	float drawUnselectedTextImpl(::java::awt::Graphics* g, float x, float y, int32_t p0, int32_t p1, bool useFPAPI);
	::javax::swing::text::Segment* getLineBuffer();
	virtual float getMaximumSpan(int32_t axis) override;
	virtual float getMinimumSpan(int32_t axis) override;
	virtual float getPreferredSpan(int32_t axis) override;
	virtual int32_t getTabSize();
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual void loadChildren(::javax::swing::text::ViewFactory* f) override;
	void loadText(::javax::swing::text::Segment* segment, int32_t p0, int32_t p1);
	using ::javax::swing::text::BoxView::modelToView;
	virtual float nextTabStop(float x, int32_t tabOffset) override;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* a) override;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual void setSize(float width, float height) override;
	using ::javax::swing::text::BoxView::updateChildren;
	virtual $String* toString() override;
	virtual void updateChildren(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a);
	void updateMetrics();
	using ::javax::swing::text::BoxView::viewToModel;
	::java::awt::FontMetrics* metrics = nullptr;
	::javax::swing::text::Segment* lineBuffer = nullptr;
	bool widthChanging = false;
	int32_t tabBase = 0;
	float tabSize = 0.0;
	bool wordWrap = false;
	int32_t sel0 = 0;
	int32_t sel1 = 0;
	::java::awt::Color* unselected = nullptr;
	::java::awt::Color* selected = nullptr;
	bool drawLineOverridden = false;
	bool drawSelectedTextOverridden = false;
	bool drawUnselectedTextOverridden = false;
	bool useFloatingPointAPI = false;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_WrappedPlainView_h_