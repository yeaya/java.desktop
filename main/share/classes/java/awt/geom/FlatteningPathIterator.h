#ifndef _java_awt_geom_FlatteningPathIterator_h_
#define _java_awt_geom_FlatteningPathIterator_h_
//$ class java.awt.geom.FlatteningPathIterator
//$ extends java.awt.geom.PathIterator

#include <java/awt/geom/PathIterator.h>
#include <java/lang/Array.h>

#pragma push_macro("GROW_SIZE")
#undef GROW_SIZE

namespace java {
	namespace awt {
		namespace geom {

class $export FlatteningPathIterator : public ::java::awt::geom::PathIterator {
	$class(FlatteningPathIterator, $NO_CLASS_INIT, ::java::awt::geom::PathIterator)
public:
	FlatteningPathIterator();
	void init$(::java::awt::geom::PathIterator* src, double flatness);
	void init$(::java::awt::geom::PathIterator* src, double flatness, int32_t limit);
	virtual int32_t currentSegment($floats* coords) override;
	virtual int32_t currentSegment($doubles* coords) override;
	virtual void ensureHoldCapacity(int32_t want);
	virtual double getFlatness();
	virtual int32_t getRecursionLimit();
	virtual int32_t getWindingRule() override;
	virtual bool isDone() override;
	virtual void next() override;
	void next(bool doNext);
	static const int32_t GROW_SIZE = 24;
	::java::awt::geom::PathIterator* src = nullptr;
	double squareflat = 0.0;
	int32_t limit = 0;
	$doubles* hold = nullptr;
	double curx = 0.0;
	double cury = 0.0;
	double movx = 0.0;
	double movy = 0.0;
	int32_t holdType = 0;
	int32_t holdEnd = 0;
	int32_t holdIndex = 0;
	$ints* levels = nullptr;
	int32_t levelIndex = 0;
	bool done = false;
};

		} // geom
	} // awt
} // java

#pragma pop_macro("GROW_SIZE")

#endif // _java_awt_geom_FlatteningPathIterator_h_