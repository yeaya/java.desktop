#ifndef _javax_swing_text_html_TableView$RowView_h_
#define _javax_swing_text_html_TableView$RowView_h_
//$ class javax.swing.text.html.TableView$RowView
//$ extends javax.swing.text.BoxView

#include <java/lang/Array.h>
#include <javax/swing/text/BoxView.h>

namespace java {
	namespace awt {
		class Graphics;
		class Rectangle;
		class Shape;
	}
}
namespace java {
	namespace util {
		class BitSet;
	}
}
namespace javax {
	namespace swing {
		class SizeRequirements;
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
			class AttributeSet;
			class Element;
			class View;
			class ViewFactory;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class StyleSheet;
				class StyleSheet$BoxPainter;
				class TableView;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class TableView$RowView : public ::javax::swing::text::BoxView {
	$class(TableView$RowView, $NO_CLASS_INIT, ::javax::swing::text::BoxView)
public:
	TableView$RowView();
	using ::javax::swing::text::BoxView::getViewIndex;
	void init$(::javax::swing::text::html::TableView* this$0, ::javax::swing::text::Element* elem);
	virtual ::javax::swing::SizeRequirements* calculateMajorAxisRequirements(int32_t axis, ::javax::swing::SizeRequirements* r) override;
	virtual ::javax::swing::SizeRequirements* calculateMinorAxisRequirements(int32_t axis, ::javax::swing::SizeRequirements* r) override;
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual void clearFilledColumns();
	virtual void fillColumn(int32_t col);
	virtual ::javax::swing::text::View* findViewAtPoint(int32_t x, int32_t y, ::java::awt::Rectangle* alloc);
	virtual ::javax::swing::text::AttributeSet* getAttributes() override;
	virtual int32_t getColumnCount();
	virtual float getMaximumSpan(int32_t axis) override;
	virtual float getMinimumSpan(int32_t axis) override;
	virtual float getPreferredSpan(int32_t axis) override;
	virtual int32_t getResizeWeight(int32_t axis) override;
	virtual ::javax::swing::text::html::StyleSheet* getStyleSheet();
	virtual ::javax::swing::text::View* getViewAtPosition(int32_t pos, ::java::awt::Rectangle* a) override;
	virtual bool isFilled(int32_t col);
	virtual void layoutMajorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) override;
	virtual void layoutMinorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) override;
	using ::javax::swing::text::BoxView::modelToView;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* allocation) override;
	virtual void preferenceChanged(::javax::swing::text::View* child, bool width, bool height) override;
	virtual void replace(int32_t offset, int32_t length, $Array<::javax::swing::text::View>* views) override;
	virtual void setPropertiesFromAttributes();
	using ::javax::swing::text::BoxView::viewToModel;
	::javax::swing::text::html::TableView* this$0 = nullptr;
	::javax::swing::text::html::StyleSheet$BoxPainter* painter = nullptr;
	::javax::swing::text::AttributeSet* attr = nullptr;
	::java::util::BitSet* fillColumns = nullptr;
	int32_t rowIndex = 0;
	int32_t viewIndex = 0;
	bool multiRowCells = false;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_TableView$RowView_h_