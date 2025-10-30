#include <java/awt/font/TextJustifier.h>

#include <java/awt/font/GlyphJustificationInfo.h>
#include <jcpp.h>

#undef DEBUG
#undef MAX_PRIORITY

using $GlyphJustificationInfoArray = $Array<::java::awt::font::GlyphJustificationInfo>;
using $GlyphJustificationInfo = ::java::awt::font::GlyphJustificationInfo;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _TextJustifier_FieldInfo_[] = {
	{"info", "[Ljava/awt/font/GlyphJustificationInfo;", nullptr, $PRIVATE, $field(TextJustifier, info)},
	{"start", "I", nullptr, $PRIVATE, $field(TextJustifier, start)},
	{"limit", "I", nullptr, $PRIVATE, $field(TextJustifier, limit)},
	{"DEBUG", "Z", nullptr, $STATIC, $staticField(TextJustifier, DEBUG)},
	{"MAX_PRIORITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextJustifier, MAX_PRIORITY)},
	{}
};

$MethodInfo _TextJustifier_MethodInfo_[] = {
	{"<init>", "([Ljava/awt/font/GlyphJustificationInfo;II)V", nullptr, 0, $method(static_cast<void(TextJustifier::*)($GlyphJustificationInfoArray*,int32_t,int32_t)>(&TextJustifier::init$))},
	{"justify", "(F)[F", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TextJustifier_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.font.TextJustifier",
	"java.lang.Object",
	nullptr,
	_TextJustifier_FieldInfo_,
	_TextJustifier_MethodInfo_
};

$Object* allocate$TextJustifier($Class* clazz) {
	return $of($alloc(TextJustifier));
}

bool TextJustifier::DEBUG = false;

void TextJustifier::init$($GlyphJustificationInfoArray* info, int32_t start, int32_t limit) {
	$useLocalCurrentObjectStackCache();
	$set(this, info, info);
	this->start = start;
	this->limit = limit;
	if (TextJustifier::DEBUG) {
		$nc($System::out)->println($$str({"start: "_s, $$str(start), ", limit: "_s, $$str(limit)}));
		for (int32_t i = start; i < limit; ++i) {
			$var($GlyphJustificationInfo, gji, $nc(info)->get(i));
			$nc($System::out)->println($$str({"w: "_s, $$str($nc(gji)->weight), ", gp: "_s, $$str(gji->growPriority), ", gll: "_s, $$str(gji->growLeftLimit), ", grl: "_s, $$str(gji->growRightLimit)}));
		}
	}
}

$floats* TextJustifier::justify(float delta) {
	$useLocalCurrentObjectStackCache();
	$var($floats, deltas, $new($floats, $nc(this->info)->length * 2));
	bool grow = delta > 0;
	if (TextJustifier::DEBUG) {
		$nc($System::out)->println($$str({"delta: "_s, $$str(delta)}));
	}
	int32_t fallbackPriority = -1;
	for (int32_t p = 0; delta != 0; ++p) {
		bool lastPass = p > TextJustifier::MAX_PRIORITY;
		if (lastPass) {
			p = fallbackPriority;
		}
		float weight = (float)0;
		float gslimit = (float)0;
		float absorbweight = (float)0;
		for (int32_t i = this->start; i < this->limit; ++i) {
			$var($GlyphJustificationInfo, gi, $nc(this->info)->get(i));
			if ((grow ? $nc(gi)->growPriority : gi->shrinkPriority) == p) {
				if (fallbackPriority == -1) {
					fallbackPriority = p;
				}
				if (i != this->start) {
					weight += gi->weight;
					if (grow) {
						gslimit += gi->growLeftLimit;
						if (gi->growAbsorb) {
							absorbweight += gi->weight;
						}
					} else {
						gslimit += gi->shrinkLeftLimit;
						if (gi->shrinkAbsorb) {
							absorbweight += gi->weight;
						}
					}
				}
				if (i + 1 != this->limit) {
					weight += gi->weight;
					if (grow) {
						gslimit += gi->growRightLimit;
						if (gi->growAbsorb) {
							absorbweight += gi->weight;
						}
					} else {
						gslimit += gi->shrinkRightLimit;
						if (gi->shrinkAbsorb) {
							absorbweight += gi->weight;
						}
					}
				}
			}
		}
		if (!grow) {
			gslimit = -gslimit;
		}
		bool hitLimit = (weight == 0) || (!lastPass && ((delta < 0) == (delta < gslimit)));
		bool absorbing = hitLimit && absorbweight > 0;
		float weightedDelta = (float)0;
		if (weight != 0) {
			weightedDelta = delta / weight;
		}
		float weightedAbsorb = (float)0;
		if (hitLimit && absorbweight != 0) {
			weightedAbsorb = (delta - gslimit) / absorbweight;
		}
		if (TextJustifier::DEBUG) {
			$nc($System::out)->println($$str({"pass: "_s, $$str(p), ", d: "_s, $$str(delta), ", l: "_s, $$str(gslimit), ", w: "_s, $$str(weight), ", aw: "_s, $$str(absorbweight), ", wd: "_s, $$str(weightedDelta), ", wa: "_s, $$str(weightedAbsorb), ", hit: "_s, (hitLimit ? "y"_s : "n"_s)}));
		}
		int32_t n = this->start * 2;
		for (int32_t i = this->start; i < this->limit; ++i) {
			$var($GlyphJustificationInfo, gi, $nc(this->info)->get(i));
			if ((grow ? $nc(gi)->growPriority : gi->shrinkPriority) == p) {
				if (i != this->start) {
					float d = 0.0;
					if (hitLimit) {
						d = grow ? gi->growLeftLimit : -gi->shrinkLeftLimit;
						if (absorbing) {
							d += gi->weight * weightedAbsorb;
						}
					} else {
						d = gi->weight * weightedDelta;
					}
					(*deltas)[n] += d;
				}
				++n;
				if (i + 1 != this->limit) {
					float d = 0.0;
					if (hitLimit) {
						d = grow ? gi->growRightLimit : -gi->shrinkRightLimit;
						if (absorbing) {
							d += gi->weight * weightedAbsorb;
						}
					} else {
						d = gi->weight * weightedDelta;
					}
					(*deltas)[n] += d;
				}
				++n;
			} else {
				n += 2;
			}
		}
		if (!lastPass && hitLimit && !absorbing) {
			delta -= gslimit;
		} else {
			delta = (float)0;
		}
	}
	if (TextJustifier::DEBUG) {
		float total = (float)0;
		for (int32_t i = 0; i < deltas->length; ++i) {
			total += deltas->get(i);
			$nc($System::out)->print($$str({$$str(deltas->get(i)), ", "_s}));
			if (i % 20 == 9) {
				$nc($System::out)->println();
			}
		}
		$nc($System::out)->println($$str({"\ntotal: "_s, $$str(total)}));
		$nc($System::out)->println();
	}
	return deltas;
}

void clinit$TextJustifier($Class* class$) {
	TextJustifier::DEBUG = false;
}

TextJustifier::TextJustifier() {
}

$Class* TextJustifier::load$($String* name, bool initialize) {
	$loadClass(TextJustifier, name, initialize, &_TextJustifier_ClassInfo_, clinit$TextJustifier, allocate$TextJustifier);
	return class$;
}

$Class* TextJustifier::class$ = nullptr;

		} // font
	} // awt
} // java