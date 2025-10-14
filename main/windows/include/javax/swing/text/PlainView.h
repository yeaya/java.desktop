#ifndef _javax_swing_text_PlainView_h_
#define _javax_swing_text_PlainView_h_
//$ class javax.swing.text.PlainView
//$ extends javax.swing.text.View
//$ implements javax.swing.text.TabExpander

#include <java/lang/Array.h>
#include <javax/swing/text/TabExpander.h>
#include <javax/swing/text/View.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Font;
		class FontMetrics;
		class Graphics;
		class Graphics2D;
		class Rectangle;
		class Shape;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
		}
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
			class PlainView$FPMethodArgs;
			class Position$Bias;
			class Segment;
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import PlainView : public ::javax::swing::text::View, public ::javax::swing::text::TabExpander {
	$class(PlainView, $NO_CLASS_INIT, ::javax::swing::text::View, ::javax::swing::text::TabExpander)
public:
	PlainView();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::Element* elem);
	virtual ::java::awt::Shape* adjustPaintRegion(::java::awt::Shape* a);
	void calculateLongestLine();
	virtual float callDrawSelectedText(::java::awt::Graphics* g, float x, float y, int32_t p0, int32_t p1);
	float callDrawUnselectedText(::java::awt::Graphics* g, float x, float y, int32_t p0, int32_t p1);
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* changes, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	static bool checkFPMethodOverridden($Class* className, $String* methodName, ::javax::swing::text::PlainView$FPMethodArgs* methodArgs);
	virtual void damageLineRange(int32_t line0, int32_t line1, ::java::awt::Shape* a, ::java::awt::Component* host);
	float drawElement(int32_t lineIndex, ::javax::swing::text::Element* elem, ::java::awt::Graphics* g, float x, float y);
	virtual void drawLine(int32_t lineIndex, ::java::awt::Graphics* g, int32_t x, int32_t y);
	virtual void drawLine(int32_t lineIndex, ::java::awt::Graphics2D* g, float x, float y);
	void drawLineImpl(int32_t lineIndex, ::java::awt::Graphics* g, float x, float y);
	virtual int32_t drawSelectedText(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1);
	virtual float drawSelectedText(::java::awt::Graphics2D* g, float x, float y, int32_t p0, int32_t p1);
	float drawSelectedTextImpl(::java::awt::Graphics* g, float x, float y, int32_t p0, int32_t p1, bool useFPAPI);
	virtual int32_t drawUnselectedText(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1);
	virtual float drawUnselectedText(::java::awt::Graphics2D* g, float x, float y, int32_t p0, int32_t p1);
	float drawUnselectedTextImpl(::java::awt::Graphics* g, float x, float y, int32_t p0, int32_t p1, bool useFPAPI);
	static bool getFPMethodOverridden($Class* cls, $String* method, ::javax::swing::text::PlainView$FPMethodArgs* methodArgs);
	::javax::swing::text::Segment* getLineBuffer();
	int32_t getLineWidth(::javax::swing::text::Element* line);
	virtual float getPreferredSpan(int32_t axis) override;
	virtual int32_t getTabSize();
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* changes, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	static bool isFPMethodOverridden($String* method, $Class* cls, $ClassArray* intTypes, $ClassArray* fpTypes);
	virtual ::java::awt::Rectangle* lineToRect(::java::awt::Shape* a, int32_t line);
	using ::javax::swing::text::View::modelToView;
	virtual ::java::awt::Shape* modelToView(int32_t pos, ::java::awt::Shape* a, ::javax::swing::text::Position$Bias* b) override;
	virtual float nextTabStop(float x, int32_t tabOffset) override;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* a) override;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* changes, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual void setSize(float width, float height) override;
	virtual $String* toString() override;
	virtual void updateDamage(::javax::swing::event::DocumentEvent* changes, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f);
	virtual void updateMetrics();
	using ::javax::swing::text::View::viewToModel;
	virtual int32_t viewToModel(float x, float y, ::java::awt::Shape* a, $Array<::javax::swing::text::Position$Bias>* bias) override;
	::java::awt::FontMetrics* metrics = nullptr;
	::javax::swing::text::Element* longLine = nullptr;
	::java::awt::Font* font = nullptr;
	::javax::swing::text::Segment* lineBuffer = nullptr;
	float tabSize = 0.0;
	int32_t tabBase = 0;
	int32_t sel0 = 0;
	int32_t sel1 = 0;
	::java::awt::Color* unselected = nullptr;
	::java::awt::Color* selected = nullptr;
	int32_t firstLineOffset = 0;
	static ::java::lang::ref::SoftReference* methodsOverriddenMapRef;
	bool drawLineOverridden = false;
	bool drawSelectedTextOverridden = false;
	bool drawUnselectedTextOverridden = false;
	bool useFloatingPointAPI = false;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_PlainView_h_