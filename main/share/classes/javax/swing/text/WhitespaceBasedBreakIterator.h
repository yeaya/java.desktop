#ifndef _javax_swing_text_WhitespaceBasedBreakIterator_h_
#define _javax_swing_text_WhitespaceBasedBreakIterator_h_
//$ class javax.swing.text.WhitespaceBasedBreakIterator
//$ extends java.text.BreakIterator

#include <java/lang/Array.h>
#include <java/text/BreakIterator.h>

namespace java {
	namespace text {
		class CharacterIterator;
	}
}

namespace javax {
	namespace swing {
		namespace text {

class WhitespaceBasedBreakIterator : public ::java::text::BreakIterator {
	$class(WhitespaceBasedBreakIterator, $NO_CLASS_INIT, ::java::text::BreakIterator)
public:
	WhitespaceBasedBreakIterator();
	void init$();
	int32_t adjacent(int32_t n, int32_t bias);
	int32_t checkhit(int32_t hit);
	virtual int32_t current() override;
	virtual int32_t first() override;
	virtual int32_t following(int32_t n) override;
	virtual ::java::text::CharacterIterator* getText() override;
	virtual int32_t last() override;
	virtual int32_t next() override;
	virtual int32_t next(int32_t n) override;
	virtual int32_t preceding(int32_t n) override;
	virtual int32_t previous() override;
	using ::java::text::BreakIterator::setText;
	virtual void setText(::java::text::CharacterIterator* ci) override;
	$chars* text = nullptr;
	$ints* breaks = nullptr;
	int32_t pos = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_WhitespaceBasedBreakIterator_h_