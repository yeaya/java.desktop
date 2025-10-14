#ifndef _javax_swing_SizeRequirements_h_
#define _javax_swing_SizeRequirements_h_
//$ class javax.swing.SizeRequirements
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace javax {
	namespace swing {

class $import SizeRequirements : public ::java::io::Serializable {
	$class(SizeRequirements, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	SizeRequirements();
	void init$();
	void init$(int32_t min, int32_t pref, int32_t max, float a);
	static $ints* adjustSizes(int32_t delta, $Array<::javax::swing::SizeRequirements>* children);
	static void calculateAlignedPositions(int32_t allocated, ::javax::swing::SizeRequirements* total, $Array<::javax::swing::SizeRequirements>* children, $ints* offsets, $ints* spans);
	static void calculateAlignedPositions(int32_t allocated, ::javax::swing::SizeRequirements* total, $Array<::javax::swing::SizeRequirements>* children, $ints* offsets, $ints* spans, bool normal);
	static void calculateTiledPositions(int32_t allocated, ::javax::swing::SizeRequirements* total, $Array<::javax::swing::SizeRequirements>* children, $ints* offsets, $ints* spans);
	static void calculateTiledPositions(int32_t allocated, ::javax::swing::SizeRequirements* total, $Array<::javax::swing::SizeRequirements>* children, $ints* offsets, $ints* spans, bool forward);
	static void compressedTile(int32_t allocated, int64_t min, int64_t pref, int64_t max, $Array<::javax::swing::SizeRequirements>* request, $ints* offsets, $ints* spans, bool forward);
	static void expandedTile(int32_t allocated, int64_t min, int64_t pref, int64_t max, $Array<::javax::swing::SizeRequirements>* request, $ints* offsets, $ints* spans, bool forward);
	static ::javax::swing::SizeRequirements* getAlignedSizeRequirements($Array<::javax::swing::SizeRequirements>* children);
	static ::javax::swing::SizeRequirements* getTiledSizeRequirements($Array<::javax::swing::SizeRequirements>* children);
	virtual $String* toString() override;
	int32_t minimum = 0;
	int32_t preferred = 0;
	int32_t maximum = 0;
	float alignment = 0.0;
};

	} // swing
} // javax

#endif // _javax_swing_SizeRequirements_h_