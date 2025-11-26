#ifndef _javax_swing_text_TableView_h_
#define _javax_swing_text_TableView_h_
//$ class javax.swing.text.TableView
//$ extends javax.swing.text.BoxView

#include <java/lang/Array.h>
#include <javax/swing/text/BoxView.h>

#pragma push_macro("EMPTY")
#undef EMPTY

namespace java {
	namespace awt {
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
			class Element;
			class TableView$TableCell;
			class TableView$TableRow;
			class View;
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import TableView : public ::javax::swing::text::BoxView {
	$class(TableView, 0, ::javax::swing::text::BoxView)
public:
	TableView();
	using ::javax::swing::text::BoxView::getViewIndex;
	void init$(::javax::swing::text::Element* elem);
	virtual void addFill(int32_t row, int32_t col);
	virtual void calculateColumnRequirements(int32_t axis);
	virtual ::javax::swing::SizeRequirements* calculateMinorAxisRequirements(int32_t axis, ::javax::swing::SizeRequirements* r) override;
	virtual void checkMultiColumnCell(int32_t axis, int32_t col, int32_t ncols, ::javax::swing::text::View* v);
	virtual void checkSingleColumnCell(int32_t axis, int32_t col, ::javax::swing::text::View* v);
	virtual ::javax::swing::text::TableView$TableCell* createTableCell(::javax::swing::text::Element* elem);
	virtual ::javax::swing::text::TableView$TableRow* createTableRow(::javax::swing::text::Element* elem);
	virtual void forwardUpdate(::javax::swing::event::DocumentEvent$ElementChange* ec, ::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual int32_t getColumnCount();
	virtual int32_t getColumnSpan(int32_t col);
	virtual int32_t getColumnsOccupied(::javax::swing::text::View* v);
	virtual ::javax::swing::text::TableView$TableRow* getRow(int32_t row);
	virtual int32_t getRowCount();
	virtual int32_t getRowSpan(int32_t row);
	virtual int32_t getRowsOccupied(::javax::swing::text::View* v);
	virtual ::javax::swing::text::View* getViewAtPosition(int32_t pos, ::java::awt::Rectangle* a) override;
	virtual void invalidateGrid();
	virtual void layoutColumns(int32_t targetSpan, $ints* offsets, $ints* spans, $Array<::javax::swing::SizeRequirements>* reqs);
	virtual void layoutMinorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) override;
	using ::javax::swing::text::BoxView::modelToView;
	virtual void replace(int32_t offset, int32_t length, $Array<::javax::swing::text::View>* views) override;
	virtual void updateGrid();
	using ::javax::swing::text::BoxView::viewToModel;
	$ints* columnSpans = nullptr;
	$ints* columnOffsets = nullptr;
	::javax::swing::SizeRequirements* totalColumnRequirements = nullptr;
	$Array<::javax::swing::SizeRequirements>* columnRequirements = nullptr;
	::java::util::Vector* rows = nullptr;
	bool gridValid = false;
	static ::java::util::BitSet* EMPTY;
};

		} // text
	} // swing
} // javax

#pragma pop_macro("EMPTY")

#endif // _javax_swing_text_TableView_h_