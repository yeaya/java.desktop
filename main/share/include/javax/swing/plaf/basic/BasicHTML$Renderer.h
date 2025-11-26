#ifndef _javax_swing_plaf_basic_BasicHTML$Renderer_h_
#define _javax_swing_plaf_basic_BasicHTML$Renderer_h_
//$ class javax.swing.plaf.basic.BasicHTML$Renderer
//$ extends javax.swing.text.View

#include <java/lang/Array.h>
#include <javax/swing/text/View.h>

namespace java {
	namespace awt {
		class Container;
		class Graphics;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Document;
			class Element;
			class Position$Bias;
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicHTML$Renderer : public ::javax::swing::text::View {
	$class(BasicHTML$Renderer, $NO_CLASS_INIT, ::javax::swing::text::View)
public:
	BasicHTML$Renderer();
	void init$(::javax::swing::JComponent* c, ::javax::swing::text::ViewFactory* f, ::javax::swing::text::View* v);
	virtual float getAlignment(int32_t axis) override;
	virtual ::javax::swing::text::AttributeSet* getAttributes() override;
	virtual ::java::awt::Container* getContainer() override;
	virtual ::javax::swing::text::Document* getDocument() override;
	virtual ::javax::swing::text::Element* getElement() override;
	virtual int32_t getEndOffset() override;
	virtual float getMaximumSpan(int32_t axis) override;
	virtual float getMinimumSpan(int32_t axis) override;
	virtual float getPreferredSpan(int32_t axis) override;
	virtual int32_t getStartOffset() override;
	virtual ::javax::swing::text::View* getView(int32_t n) override;
	virtual int32_t getViewCount() override;
	virtual ::javax::swing::text::ViewFactory* getViewFactory() override;
	using ::javax::swing::text::View::modelToView;
	virtual ::java::awt::Shape* modelToView(int32_t pos, ::java::awt::Shape* a, ::javax::swing::text::Position$Bias* b) override;
	virtual ::java::awt::Shape* modelToView(int32_t p0, ::javax::swing::text::Position$Bias* b0, int32_t p1, ::javax::swing::text::Position$Bias* b1, ::java::awt::Shape* a) override;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* allocation) override;
	virtual void preferenceChanged(::javax::swing::text::View* child, bool width, bool height) override;
	virtual void setParent(::javax::swing::text::View* parent) override;
	virtual void setSize(float width, float height) override;
	using ::javax::swing::text::View::viewToModel;
	virtual int32_t viewToModel(float x, float y, ::java::awt::Shape* a, $Array<::javax::swing::text::Position$Bias>* bias) override;
	int32_t width = 0;
	::javax::swing::text::View* view = nullptr;
	::javax::swing::text::ViewFactory* factory = nullptr;
	::javax::swing::JComponent* host = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicHTML$Renderer_h_