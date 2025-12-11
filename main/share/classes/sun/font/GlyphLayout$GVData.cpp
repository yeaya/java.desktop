#include <sun/font/GlyphLayout$GVData.h>

#include <java/awt/Font.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphVector.h>
#include <sun/font/GlyphLayout.h>
#include <sun/font/StandardGlyphVector.h>
#include <jcpp.h>

#undef FLAG_COMPLEX_GLYPHS
#undef FLAG_HAS_POSITION_ADJUSTMENTS
#undef FLAG_RUN_RTL
#undef UNINITIALIZED_FLAGS

using $Font = ::java::awt::Font;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GlyphVector = ::java::awt::font::GlyphVector;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StandardGlyphVector = ::sun::font::StandardGlyphVector;

namespace sun {
	namespace font {

$FieldInfo _GlyphLayout$GVData_FieldInfo_[] = {
	{"_count", "I", nullptr, $PUBLIC, $field(GlyphLayout$GVData, _count)},
	{"_flags", "I", nullptr, $PUBLIC, $field(GlyphLayout$GVData, _flags)},
	{"_glyphs", "[I", nullptr, $PUBLIC, $field(GlyphLayout$GVData, _glyphs)},
	{"_positions", "[F", nullptr, $PUBLIC, $field(GlyphLayout$GVData, _positions)},
	{"_indices", "[I", nullptr, $PUBLIC, $field(GlyphLayout$GVData, _indices)},
	{"UNINITIALIZED_FLAGS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GlyphLayout$GVData, UNINITIALIZED_FLAGS)},
	{}
};

$MethodInfo _GlyphLayout$GVData_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GlyphLayout$GVData::*)()>(&GlyphLayout$GVData::init$))},
	{"createGlyphVector", "(Ljava/awt/Font;Ljava/awt/font/FontRenderContext;Lsun/font/StandardGlyphVector;)Lsun/font/StandardGlyphVector;", nullptr, $PUBLIC, $method(static_cast<$StandardGlyphVector*(GlyphLayout$GVData::*)($Font*,$FontRenderContext*,$StandardGlyphVector*)>(&GlyphLayout$GVData::createGlyphVector))},
	{"grow", "()V", nullptr, $PUBLIC, $method(static_cast<void(GlyphLayout$GVData::*)()>(&GlyphLayout$GVData::grow))},
	{"grow", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(GlyphLayout$GVData::*)(int32_t)>(&GlyphLayout$GVData::grow))},
	{"init", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(GlyphLayout$GVData::*)(int32_t)>(&GlyphLayout$GVData::init))},
	{}
};

$InnerClassInfo _GlyphLayout$GVData_InnerClassesInfo_[] = {
	{"sun.font.GlyphLayout$GVData", "sun.font.GlyphLayout", "GVData", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _GlyphLayout$GVData_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.GlyphLayout$GVData",
	"java.lang.Object",
	nullptr,
	_GlyphLayout$GVData_FieldInfo_,
	_GlyphLayout$GVData_MethodInfo_,
	nullptr,
	nullptr,
	_GlyphLayout$GVData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.GlyphLayout"
};

$Object* allocate$GlyphLayout$GVData($Class* clazz) {
	return $of($alloc(GlyphLayout$GVData));
}

void GlyphLayout$GVData::init$() {
}

void GlyphLayout$GVData::init(int32_t size) {
	this->_count = 0;
	this->_flags = GlyphLayout$GVData::UNINITIALIZED_FLAGS;
	if (this->_glyphs == nullptr || $nc(this->_glyphs)->length < size) {
		if (size < 20) {
			size = 20;
		}
		$set(this, _glyphs, $new($ints, size));
		$set(this, _positions, $new($floats, size * 2 + 2));
		$set(this, _indices, $new($ints, size));
	}
}

void GlyphLayout$GVData::grow() {
	grow($nc(this->_glyphs)->length / 4);
}

void GlyphLayout$GVData::grow(int32_t delta) {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc(this->_glyphs)->length + delta;
	$var($ints, nglyphs, $new($ints, size));
	$System::arraycopy(this->_glyphs, 0, nglyphs, 0, this->_count);
	$set(this, _glyphs, nglyphs);
	$var($floats, npositions, $new($floats, size * 2 + 2));
	$System::arraycopy(this->_positions, 0, npositions, 0, this->_count * 2 + 2);
	$set(this, _positions, npositions);
	$var($ints, nindices, $new($ints, size));
	$System::arraycopy(this->_indices, 0, nindices, 0, this->_count);
	$set(this, _indices, nindices);
}

$StandardGlyphVector* GlyphLayout$GVData::createGlyphVector($Font* font, $FontRenderContext* frc, $StandardGlyphVector* result$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($StandardGlyphVector, result, result$renamed);
	if (this->_flags == GlyphLayout$GVData::UNINITIALIZED_FLAGS) {
		this->_flags = 0;
		if (this->_count > 1) {
			bool ltr = true;
			bool rtl = true;
			int32_t rtlix = this->_count;
			for (int32_t i = 0; i < this->_count && (ltr || rtl); ++i) {
				int32_t cx = $nc(this->_indices)->get(i);
				ltr = ltr && (cx == i);
				rtl = rtl && (cx == --rtlix);
			}
			if (rtl) {
				this->_flags |= $GlyphVector::FLAG_RUN_RTL;
			}
			if (!rtl && !ltr) {
				this->_flags |= $GlyphVector::FLAG_COMPLEX_GLYPHS;
			}
		}
		this->_flags |= $GlyphVector::FLAG_HAS_POSITION_ADJUSTMENTS;
	}
	$var($ints, glyphs, $new($ints, this->_count));
	$System::arraycopy(this->_glyphs, 0, glyphs, 0, this->_count);
	$var($floats, positions, nullptr);
	if (((int32_t)(this->_flags & (uint32_t)$GlyphVector::FLAG_HAS_POSITION_ADJUSTMENTS)) != 0) {
		$assign(positions, $new($floats, this->_count * 2 + 2));
		$System::arraycopy(this->_positions, 0, positions, 0, positions->length);
	}
	$var($ints, indices, nullptr);
	if (((int32_t)(this->_flags & (uint32_t)$GlyphVector::FLAG_COMPLEX_GLYPHS)) != 0) {
		$assign(indices, $new($ints, this->_count));
		$System::arraycopy(this->_indices, 0, indices, 0, this->_count);
	}
	if (result == nullptr) {
		$assign(result, $new($StandardGlyphVector, font, frc, glyphs, positions, indices, this->_flags));
	} else {
		$nc(result)->initGlyphVector(font, frc, glyphs, positions, indices, this->_flags);
	}
	return result;
}

GlyphLayout$GVData::GlyphLayout$GVData() {
}

$Class* GlyphLayout$GVData::load$($String* name, bool initialize) {
	$loadClass(GlyphLayout$GVData, name, initialize, &_GlyphLayout$GVData_ClassInfo_, allocate$GlyphLayout$GVData);
	return class$;
}

$Class* GlyphLayout$GVData::class$ = nullptr;

	} // font
} // sun