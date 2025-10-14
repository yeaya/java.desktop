#ifndef _javax_swing_text_html_TableView_h_
#define _javax_swing_text_html_TableView_h_
//$ class javax.swing.text.html.TableView
//$ extends javax.swing.text.BoxView
//$ implements javax.swing.text.ViewFactory

#include <java/lang/Array.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/ViewFactory.h>

#pragma push_macro("EMPTY")
#undef EMPTY

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
		class Vector;
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
			class DocumentEvent$ElementChange;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Element;
			class View;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class StyleSheet;
				class StyleSheet$BoxPainter;
				class TableView$ColumnIterator;
				class TableView$RowIterator;
				class TableView$RowView;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class TableView : public ::javax::swing::text::BoxView, public ::javax::swing::text::ViewFactory {
	$class(TableView, 0, ::javax::swing::text::BoxView, ::javax::swing::text::ViewFactory)
public:
	TableView();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::text::BoxView::getViewIndex;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::Element* elem);
	virtual void addFill(int32_t row, int32_t col);
	virtual void calculateColumnRequirements(int32_t axis);
	virtual ::javax::swing::SizeRequirements* calculateMajorAxisRequirements(int32_t axis, ::javax::swing::SizeRequirements* r) override;
	virtual ::javax::swing::SizeRequirements* calculateMinorAxisRequirements(int32_t axis, ::javax::swing::SizeRequirements* r) override;
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual void checkMultiColumnCell(int32_t axis, int32_t col, int32_t ncols, ::javax::swing::text::View* v);
	virtual void checkSingleColumnCell(int32_t axis, int32_t col, ::javax::swing::text::View* v);
	virtual ::javax::swing::text::View* create(::javax::swing::text::Element* elem) override;
	virtual ::javax::swing::text::html::TableView$RowView* createTableRow(::javax::swing::text::Element* elem);
	virtual void forwardUpdate(::javax::swing::event::DocumentEvent$ElementChange* ec, ::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual ::javax::swing::text::AttributeSet* getAttributes() override;
	virtual int32_t getColumnCount();
	virtual int32_t getColumnSpan(int32_t col);
	virtual int32_t getColumnsOccupied(::javax::swing::text::View* v);
	virtual int32_t getMultiRowSpan(int32_t row0, int32_t row1);
	virtual ::javax::swing::text::html::TableView$RowView* getRow(int32_t row);
	virtual int32_t getRowCount();
	virtual int32_t getRowSpan(int32_t row);
	virtual int32_t getRowsOccupied(::javax::swing::text::View* v);
	virtual ::javax::swing::text::html::StyleSheet* getStyleSheet();
	virtual ::javax::swing::text::View* getViewAtPoint(int32_t x, int32_t y, ::java::awt::Rectangle* alloc) override;
	virtual ::javax::swing::text::View* getViewAtPosition(int32_t pos, ::java::awt::Rectangle* a) override;
	virtual ::javax::swing::text::ViewFactory* getViewFactory() override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual void invalidateGrid();
	virtual void layoutColumns(int32_t targetSpan, $ints* offsets, $ints* spans, $Array<::javax::swing::SizeRequirements>* reqs);
	virtual void layoutMajorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) override;
	virtual void layoutMinorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) override;
	using ::javax::swing::text::BoxView::modelToView;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* allocation) override;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual void replace(int32_t offset, int32_t length, $Array<::javax::swing::text::View>* views) override;
	virtual void setParent(::javax::swing::text::View* parent) override;
	virtual void setPropertiesFromAttributes();
	virtual $String* toString() override;
	virtual void updateGrid();
	virtual void updateInsets();
	using ::javax::swing::text::BoxView::viewToModel;
	::javax::swing::text::AttributeSet* attr = nullptr;
	::javax::swing::text::html::StyleSheet$BoxPainter* painter = nullptr;
	int32_t cellSpacing = 0;
	int32_t borderWidth = 0;
	int32_t captionIndex = 0;
	bool relativeCells = false;
	bool multiRowCells = false;
	$ints* columnSpans = nullptr;
	$ints* columnOffsets = nullptr;
	::javax::swing::SizeRequirements* totalColumnRequirements = nullptr;
	$Array<::javax::swing::SizeRequirements>* columnRequirements = nullptr;
	::javax::swing::text::html::TableView$RowIterator* rowIterator = nullptr;
	::javax::swing::text::html::TableView$ColumnIterator* colIterator = nullptr;
	::java::util::Vector* rows = nullptr;
	bool skipComments = false;
	bool gridValid = false;
	static ::java::util::BitSet* EMPTY;
};

			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("EMPTY")

#endif // _javax_swing_text_html_TableView_h_