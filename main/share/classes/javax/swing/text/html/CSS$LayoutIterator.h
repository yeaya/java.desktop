#ifndef _javax_swing_text_html_CSS$LayoutIterator_h_
#define _javax_swing_text_html_CSS$LayoutIterator_h_
//$ interface javax.swing.text.html.CSS$LayoutIterator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export CSS$LayoutIterator : public ::java::lang::Object {
	$interface(CSS$LayoutIterator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getAdjustmentWeight() {return 0;}
	virtual float getBorderWidth() {return 0.0;}
	virtual int32_t getCount() {return 0;}
	virtual float getLeadingCollapseSpan() {return 0.0;}
	virtual float getMaximumSpan(float parentSpan) {return 0.0;}
	virtual float getMinimumSpan(float parentSpan) {return 0.0;}
	virtual int32_t getOffset() {return 0;}
	virtual float getPreferredSpan(float parentSpan) {return 0.0;}
	virtual int32_t getSpan() {return 0;}
	virtual float getTrailingCollapseSpan() {return 0.0;}
	virtual void setIndex(int32_t i) {}
	virtual void setOffset(int32_t offs) {}
	virtual void setSpan(int32_t span) {}
	static const int32_t WorstAdjustmentWeight = 2;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CSS$LayoutIterator_h_