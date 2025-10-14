#include <sun/font/GlyphLayout$EngineRecord.h>

#include <java/awt/geom/Point2D$Float.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/GlyphLayout$GVData.h>
#include <sun/font/GlyphLayout$LayoutEngine.h>
#include <sun/font/GlyphLayout$LayoutEngineFactory.h>
#include <sun/font/GlyphLayout$LayoutEngineKey.h>
#include <sun/font/GlyphLayout.h>
#include <sun/font/TextRecord.h>
#include <jcpp.h>

using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Font2D = ::sun::font::Font2D;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $GlyphLayout = ::sun::font::GlyphLayout;
using $GlyphLayout$GVData = ::sun::font::GlyphLayout$GVData;
using $GlyphLayout$LayoutEngine = ::sun::font::GlyphLayout$LayoutEngine;
using $GlyphLayout$LayoutEngineFactory = ::sun::font::GlyphLayout$LayoutEngineFactory;
using $GlyphLayout$LayoutEngineKey = ::sun::font::GlyphLayout$LayoutEngineKey;
using $TextRecord = ::sun::font::TextRecord;

namespace sun {
	namespace font {

$FieldInfo _GlyphLayout$EngineRecord_FieldInfo_[] = {
	{"this$0", "Lsun/font/GlyphLayout;", nullptr, $FINAL | $SYNTHETIC, $field(GlyphLayout$EngineRecord, this$0)},
	{"start", "I", nullptr, $PRIVATE, $field(GlyphLayout$EngineRecord, start)},
	{"limit", "I", nullptr, $PRIVATE, $field(GlyphLayout$EngineRecord, limit)},
	{"gmask", "I", nullptr, $PRIVATE, $field(GlyphLayout$EngineRecord, gmask)},
	{"eflags", "I", nullptr, $PRIVATE, $field(GlyphLayout$EngineRecord, eflags)},
	{"key", "Lsun/font/GlyphLayout$LayoutEngineKey;", nullptr, $PRIVATE, $field(GlyphLayout$EngineRecord, key)},
	{"engine", "Lsun/font/GlyphLayout$LayoutEngine;", nullptr, $PRIVATE, $field(GlyphLayout$EngineRecord, engine)},
	{}
};

$MethodInfo _GlyphLayout$EngineRecord_MethodInfo_[] = {
	{"<init>", "(Lsun/font/GlyphLayout;)V", nullptr, 0, $method(static_cast<void(GlyphLayout$EngineRecord::*)($GlyphLayout*)>(&GlyphLayout$EngineRecord::init$))},
	{"init", "(IILsun/font/Font2D;III)V", nullptr, 0, $method(static_cast<void(GlyphLayout$EngineRecord::*)(int32_t,int32_t,$Font2D*,int32_t,int32_t,int32_t)>(&GlyphLayout$EngineRecord::init))},
	{"layout", "()V", nullptr, 0, $method(static_cast<void(GlyphLayout$EngineRecord::*)()>(&GlyphLayout$EngineRecord::layout))},
	{}
};

$InnerClassInfo _GlyphLayout$EngineRecord_InnerClassesInfo_[] = {
	{"sun.font.GlyphLayout$EngineRecord", "sun.font.GlyphLayout", "EngineRecord", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _GlyphLayout$EngineRecord_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.font.GlyphLayout$EngineRecord",
	"java.lang.Object",
	nullptr,
	_GlyphLayout$EngineRecord_FieldInfo_,
	_GlyphLayout$EngineRecord_MethodInfo_,
	nullptr,
	nullptr,
	_GlyphLayout$EngineRecord_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.GlyphLayout"
};

$Object* allocate$GlyphLayout$EngineRecord($Class* clazz) {
	return $of($alloc(GlyphLayout$EngineRecord));
}

void GlyphLayout$EngineRecord::init$($GlyphLayout* this$0) {
	$set(this, this$0, this$0);
	$set(this, key, $new($GlyphLayout$LayoutEngineKey));
}

void GlyphLayout$EngineRecord::init(int32_t start, int32_t limit, $Font2D* font, int32_t script, int32_t lang, int32_t gmask) {
	this->start = start;
	this->limit = limit;
	this->gmask = gmask;
	$nc(this->key)->init(font, script, lang);
	this->eflags = 0;
	for (int32_t i = start; i < limit; ++i) {
		int32_t ch = $nc($nc(this->this$0->_textRecord)->text)->get(i);
		bool var$0 = $Character::isHighSurrogate((char16_t)ch) && i < limit - 1;
		if (var$0 && $Character::isLowSurrogate($nc($nc(this->this$0->_textRecord)->text)->get(i + 1))) {
			ch = $Character::toCodePoint((char16_t)ch, $nc($nc(this->this$0->_textRecord)->text)->get(++i));
		}
		int32_t gc = $Character::getType(ch);
		if (gc == (int8_t)6 || gc == (int8_t)7 || gc == (int8_t)8) {
			this->eflags = 4;
			break;
		}
	}
	$set(this, engine, $nc(this->this$0->_lef)->getEngine(this->key));
}

void GlyphLayout$EngineRecord::layout() {
	$nc(this->this$0->_textRecord)->start = this->start;
	$nc(this->this$0->_textRecord)->limit = this->limit;
	$nc(this->engine)->layout(this->this$0->_sd, this->this$0->_mat, this->this$0->ptSize, this->gmask, this->start - this->this$0->_offset, this->this$0->_textRecord, this->this$0->_typo_flags | this->eflags, this->this$0->_pt, this->this$0->_gvdata);
}

GlyphLayout$EngineRecord::GlyphLayout$EngineRecord() {
}

$Class* GlyphLayout$EngineRecord::load$($String* name, bool initialize) {
	$loadClass(GlyphLayout$EngineRecord, name, initialize, &_GlyphLayout$EngineRecord_ClassInfo_, allocate$GlyphLayout$EngineRecord);
	return class$;
}

$Class* GlyphLayout$EngineRecord::class$ = nullptr;

	} // font
} // sun