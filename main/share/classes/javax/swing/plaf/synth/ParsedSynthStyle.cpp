#include <javax/swing/plaf/synth/ParsedSynthStyle.h>

#include <javax/swing/plaf/synth/ParsedSynthStyle$DelegatingPainter.h>
#include <javax/swing/plaf/synth/ParsedSynthStyle$PainterInfo.h>
#include <javax/swing/plaf/synth/ParsedSynthStyle$StateInfo.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <sun/swing/plaf/synth/DefaultSynthStyle$StateInfo.h>
#include <sun/swing/plaf/synth/DefaultSynthStyle.h>
#include <jcpp.h>

#undef DELEGATING_PAINTER_INSTANCE
#undef NULL_PAINTER

using $ParsedSynthStyle$PainterInfoArray = $Array<::javax::swing::plaf::synth::ParsedSynthStyle$PainterInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParsedSynthStyle$DelegatingPainter = ::javax::swing::plaf::synth::ParsedSynthStyle$DelegatingPainter;
using $ParsedSynthStyle$PainterInfo = ::javax::swing::plaf::synth::ParsedSynthStyle$PainterInfo;
using $ParsedSynthStyle$StateInfo = ::javax::swing::plaf::synth::ParsedSynthStyle$StateInfo;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $DefaultSynthStyle = ::sun::swing::plaf::synth::DefaultSynthStyle;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _ParsedSynthStyle_FieldInfo_[] = {
	{"DELEGATING_PAINTER_INSTANCE", "Ljavax/swing/plaf/synth/SynthPainter;", nullptr, $PRIVATE | $STATIC, $staticField(ParsedSynthStyle, DELEGATING_PAINTER_INSTANCE)},
	{"_painters", "[Ljavax/swing/plaf/synth/ParsedSynthStyle$PainterInfo;", nullptr, $PRIVATE, $field(ParsedSynthStyle, _painters)},
	{}
};

$MethodInfo _ParsedSynthStyle_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ParsedSynthStyle::*)()>(&ParsedSynthStyle::init$))},
	{"<init>", "(Lsun/swing/plaf/synth/DefaultSynthStyle;)V", nullptr, $PUBLIC, $method(static_cast<void(ParsedSynthStyle::*)($DefaultSynthStyle*)>(&ParsedSynthStyle::init$))},
	{"addTo", "(Lsun/swing/plaf/synth/DefaultSynthStyle;)Lsun/swing/plaf/synth/DefaultSynthStyle;", nullptr, $PUBLIC},
	{"getBestPainter", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/String;I)Ljavax/swing/plaf/synth/SynthPainter;", nullptr, $PRIVATE, $method(static_cast<$SynthPainter*(ParsedSynthStyle::*)($SynthContext*,$String*,int32_t)>(&ParsedSynthStyle::getBestPainter))},
	{"getBestPainter", "([Ljavax/swing/plaf/synth/ParsedSynthStyle$PainterInfo;Ljava/lang/String;I)Ljavax/swing/plaf/synth/SynthPainter;", nullptr, $PRIVATE, $method(static_cast<$SynthPainter*(ParsedSynthStyle::*)($ParsedSynthStyle$PainterInfoArray*,$String*,int32_t)>(&ParsedSynthStyle::getBestPainter))},
	{"getPainter", "(Ljavax/swing/plaf/synth/SynthContext;)Ljavax/swing/plaf/synth/SynthPainter;", nullptr, $PUBLIC},
	{"mergePainterInfo", "([Ljavax/swing/plaf/synth/ParsedSynthStyle$PainterInfo;[Ljavax/swing/plaf/synth/ParsedSynthStyle$PainterInfo;)[Ljavax/swing/plaf/synth/ParsedSynthStyle$PainterInfo;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ParsedSynthStyle$PainterInfoArray*(*)($ParsedSynthStyle$PainterInfoArray*,$ParsedSynthStyle$PainterInfoArray*)>(&ParsedSynthStyle::mergePainterInfo))},
	{"setPainters", "([Ljavax/swing/plaf/synth/ParsedSynthStyle$PainterInfo;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ParsedSynthStyle_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.ParsedSynthStyle$DelegatingPainter", "javax.swing.plaf.synth.ParsedSynthStyle", "DelegatingPainter", $PRIVATE | $STATIC},
	{"javax.swing.plaf.synth.ParsedSynthStyle$AggregatePainter", "javax.swing.plaf.synth.ParsedSynthStyle", "AggregatePainter", $PRIVATE | $STATIC},
	{"javax.swing.plaf.synth.ParsedSynthStyle$PainterInfo", "javax.swing.plaf.synth.ParsedSynthStyle", "PainterInfo", $STATIC},
	{"javax.swing.plaf.synth.ParsedSynthStyle$StateInfo", "javax.swing.plaf.synth.ParsedSynthStyle", "StateInfo", $STATIC},
	{}
};

$ClassInfo _ParsedSynthStyle_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.ParsedSynthStyle",
	"sun.swing.plaf.synth.DefaultSynthStyle",
	nullptr,
	_ParsedSynthStyle_FieldInfo_,
	_ParsedSynthStyle_MethodInfo_,
	nullptr,
	nullptr,
	_ParsedSynthStyle_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.ParsedSynthStyle$DelegatingPainter,javax.swing.plaf.synth.ParsedSynthStyle$AggregatePainter,javax.swing.plaf.synth.ParsedSynthStyle$PainterInfo,javax.swing.plaf.synth.ParsedSynthStyle$StateInfo"
};

$Object* allocate$ParsedSynthStyle($Class* clazz) {
	return $of($alloc(ParsedSynthStyle));
}

$SynthPainter* ParsedSynthStyle::DELEGATING_PAINTER_INSTANCE = nullptr;

$ParsedSynthStyle$PainterInfoArray* ParsedSynthStyle::mergePainterInfo($ParsedSynthStyle$PainterInfoArray* old, $ParsedSynthStyle$PainterInfoArray* newPI) {
	$init(ParsedSynthStyle);
	$useLocalCurrentObjectStackCache();
	if (old == nullptr) {
		return newPI;
	}
	if (newPI == nullptr) {
		return old;
	}
	int32_t oldLength = $nc(old)->length;
	int32_t newLength = $nc(newPI)->length;
	int32_t dups = 0;
	$var($ParsedSynthStyle$PainterInfoArray, merged, $new($ParsedSynthStyle$PainterInfoArray, oldLength + newLength));
	$System::arraycopy(old, 0, merged, 0, oldLength);
	for (int32_t newCounter = 0; newCounter < newLength; ++newCounter) {
		bool found = false;
		for (int32_t oldCounter = 0; oldCounter < oldLength - dups; ++oldCounter) {
			if ($nc(newPI->get(newCounter))->equalsPainter(old->get(oldCounter))) {
				merged->set(oldCounter, newPI->get(newCounter));
				++dups;
				found = true;
				break;
			}
		}
		if (!found) {
			merged->set(oldLength + newCounter - dups, newPI->get(newCounter));
		}
	}
	if (dups > 0) {
		$var($ParsedSynthStyle$PainterInfoArray, tmp, merged);
		$assign(merged, $new($ParsedSynthStyle$PainterInfoArray, merged->length - dups));
		$System::arraycopy(tmp, 0, merged, 0, merged->length);
	}
	return merged;
}

void ParsedSynthStyle::init$() {
	$DefaultSynthStyle::init$();
}

void ParsedSynthStyle::init$($DefaultSynthStyle* style) {
	$DefaultSynthStyle::init$(style);
	if ($instanceOf(ParsedSynthStyle, style)) {
		$var(ParsedSynthStyle, pStyle, $cast(ParsedSynthStyle, style));
		if ($nc(pStyle)->_painters != nullptr) {
			$set(this, _painters, pStyle->_painters);
		}
	}
}

$SynthPainter* ParsedSynthStyle::getPainter($SynthContext* ss) {
	return ParsedSynthStyle::DELEGATING_PAINTER_INSTANCE;
}

void ParsedSynthStyle::setPainters($ParsedSynthStyle$PainterInfoArray* info) {
	$set(this, _painters, info);
}

$DefaultSynthStyle* ParsedSynthStyle::addTo($DefaultSynthStyle* style$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($DefaultSynthStyle, style, style$renamed);
	if (!($instanceOf(ParsedSynthStyle, style))) {
		$assign(style, $new(ParsedSynthStyle, style));
	}
	$var(ParsedSynthStyle, pStyle, $cast(ParsedSynthStyle, $DefaultSynthStyle::addTo(style)));
	$set($nc(pStyle), _painters, mergePainterInfo(pStyle->_painters, this->_painters));
	return pStyle;
}

$SynthPainter* ParsedSynthStyle::getBestPainter($SynthContext* context, $String* method, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	$var($ParsedSynthStyle$StateInfo, info, $cast($ParsedSynthStyle$StateInfo, getStateInfo($nc(context)->getComponentState())));
	$var($SynthPainter, painter, nullptr);
	if (info != nullptr) {
		if (($assign(painter, getBestPainter($(info->getPainters()), method, direction))) != nullptr) {
			return painter;
		}
	}
	if (($assign(painter, getBestPainter(this->_painters, method, direction))) != nullptr) {
		return painter;
	}
	$init($SynthPainter);
	return $SynthPainter::NULL_PAINTER;
}

$SynthPainter* ParsedSynthStyle::getBestPainter($ParsedSynthStyle$PainterInfoArray* info, $String* method, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	if (info != nullptr) {
		$var($SynthPainter, nullPainter, nullptr);
		$var($SynthPainter, methodPainter, nullptr);
		for (int32_t counter = info->length - 1; counter >= 0; --counter) {
			$var($ParsedSynthStyle$PainterInfo, pi, info->get(counter));
			if ($nc(pi)->getMethod() == method) {
				if (pi->getDirection() == direction) {
					return pi->getPainter();
				} else if (methodPainter == nullptr && pi->getDirection() == -1) {
					$assign(methodPainter, pi->getPainter());
				}
			} else if (nullPainter == nullptr && pi->getMethod() == nullptr) {
				$assign(nullPainter, pi->getPainter());
			}
		}
		if (methodPainter != nullptr) {
			return methodPainter;
		}
		return nullPainter;
	}
	return nullptr;
}

$String* ParsedSynthStyle::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, text, $new($StringBuilder, $($DefaultSynthStyle::toString())));
	if (this->_painters != nullptr) {
		text->append(",painters=["_s);
		for (int32_t i = 0; i < +$nc(this->_painters)->length; ++i) {
			text->append($($nc($nc(this->_painters)->get(i))->toString()));
		}
		text->append("]"_s);
	}
	return text->toString();
}

void clinit$ParsedSynthStyle($Class* class$) {
	$assignStatic(ParsedSynthStyle::DELEGATING_PAINTER_INSTANCE, $new($ParsedSynthStyle$DelegatingPainter));
}

ParsedSynthStyle::ParsedSynthStyle() {
}

$Class* ParsedSynthStyle::load$($String* name, bool initialize) {
	$loadClass(ParsedSynthStyle, name, initialize, &_ParsedSynthStyle_ClassInfo_, clinit$ParsedSynthStyle, allocate$ParsedSynthStyle);
	return class$;
}

$Class* ParsedSynthStyle::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax