#ifndef _javax_swing_text_Segment_h_
#define _javax_swing_text_Segment_h_
//$ class javax.swing.text.Segment
//$ extends java.text.CharacterIterator
//$ implements java.lang.CharSequence

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/text/CharacterIterator.h>

namespace javax {
	namespace swing {
		namespace text {

class $import Segment : public ::java::text::CharacterIterator, public ::java::lang::CharSequence {
	$class(Segment, $NO_CLASS_INIT, ::java::text::CharacterIterator, ::java::lang::CharSequence)
public:
	Segment();
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($chars* array, int32_t offset, int32_t count);
	virtual char16_t charAt(int32_t index) override;
	virtual $Object* clone() override;
	virtual char16_t current() override;
	virtual char16_t first() override;
	virtual int32_t getBeginIndex() override;
	virtual int32_t getEndIndex() override;
	virtual int32_t getIndex() override;
	virtual bool isPartialReturn();
	virtual char16_t last() override;
	virtual int32_t length() override;
	virtual char16_t next() override;
	virtual char16_t previous() override;
	virtual char16_t setIndex(int32_t position) override;
	virtual void setPartialReturn(bool p);
	virtual ::java::lang::CharSequence* subSequence(int32_t start, int32_t end) override;
	virtual $String* toString() override;
	$chars* array = nullptr;
	int32_t offset = 0;
	int32_t count = 0;
	bool copy = false;
	bool partialReturn = false;
	int32_t pos = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_Segment_h_