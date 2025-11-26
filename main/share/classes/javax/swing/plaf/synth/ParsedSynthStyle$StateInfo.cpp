#include <javax/swing/plaf/synth/ParsedSynthStyle$StateInfo.h>

#include <javax/swing/plaf/synth/ParsedSynthStyle$PainterInfo.h>
#include <javax/swing/plaf/synth/ParsedSynthStyle.h>
#include <sun/swing/plaf/synth/DefaultSynthStyle$StateInfo.h>
#include <jcpp.h>

using $ParsedSynthStyle$PainterInfoArray = $Array<::javax::swing::plaf::synth::ParsedSynthStyle$PainterInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParsedSynthStyle = ::javax::swing::plaf::synth::ParsedSynthStyle;
using $ParsedSynthStyle$PainterInfo = ::javax::swing::plaf::synth::ParsedSynthStyle$PainterInfo;
using $DefaultSynthStyle$StateInfo = ::sun::swing::plaf::synth::DefaultSynthStyle$StateInfo;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _ParsedSynthStyle$StateInfo_FieldInfo_[] = {
	{"_painterInfo", "[Ljavax/swing/plaf/synth/ParsedSynthStyle$PainterInfo;", nullptr, $PRIVATE, $field(ParsedSynthStyle$StateInfo, _painterInfo)},
	{}
};

$MethodInfo _ParsedSynthStyle$StateInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ParsedSynthStyle$StateInfo::*)()>(&ParsedSynthStyle$StateInfo::init$))},
	{"<init>", "(Lsun/swing/plaf/synth/DefaultSynthStyle$StateInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(ParsedSynthStyle$StateInfo::*)($DefaultSynthStyle$StateInfo*)>(&ParsedSynthStyle$StateInfo::init$))},
	{"addTo", "(Lsun/swing/plaf/synth/DefaultSynthStyle$StateInfo;)Lsun/swing/plaf/synth/DefaultSynthStyle$StateInfo;", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getPainters", "()[Ljavax/swing/plaf/synth/ParsedSynthStyle$PainterInfo;", nullptr, $PUBLIC},
	{"setPainters", "([Ljavax/swing/plaf/synth/ParsedSynthStyle$PainterInfo;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ParsedSynthStyle$StateInfo_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.ParsedSynthStyle$StateInfo", "javax.swing.plaf.synth.ParsedSynthStyle", "StateInfo", $STATIC},
	{"sun.swing.plaf.synth.DefaultSynthStyle$StateInfo", "sun.swing.plaf.synth.DefaultSynthStyle", "StateInfo", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ParsedSynthStyle$StateInfo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.ParsedSynthStyle$StateInfo",
	"sun.swing.plaf.synth.DefaultSynthStyle$StateInfo",
	nullptr,
	_ParsedSynthStyle$StateInfo_FieldInfo_,
	_ParsedSynthStyle$StateInfo_MethodInfo_,
	nullptr,
	nullptr,
	_ParsedSynthStyle$StateInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.ParsedSynthStyle"
};

$Object* allocate$ParsedSynthStyle$StateInfo($Class* clazz) {
	return $of($alloc(ParsedSynthStyle$StateInfo));
}

void ParsedSynthStyle$StateInfo::init$() {
	$DefaultSynthStyle$StateInfo::init$();
}

void ParsedSynthStyle$StateInfo::init$($DefaultSynthStyle$StateInfo* info) {
	$DefaultSynthStyle$StateInfo::init$(info);
	if ($instanceOf(ParsedSynthStyle$StateInfo, info)) {
		$set(this, _painterInfo, $nc(($cast(ParsedSynthStyle$StateInfo, info)))->_painterInfo);
	}
}

void ParsedSynthStyle$StateInfo::setPainters($ParsedSynthStyle$PainterInfoArray* painterInfo) {
	$set(this, _painterInfo, painterInfo);
}

$ParsedSynthStyle$PainterInfoArray* ParsedSynthStyle$StateInfo::getPainters() {
	return this->_painterInfo;
}

$Object* ParsedSynthStyle$StateInfo::clone() {
	return $of($new(ParsedSynthStyle$StateInfo, this));
}

$DefaultSynthStyle$StateInfo* ParsedSynthStyle$StateInfo::addTo($DefaultSynthStyle$StateInfo* info$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($DefaultSynthStyle$StateInfo, info, info$renamed);
	if (!($instanceOf(ParsedSynthStyle$StateInfo, info))) {
		$assign(info, $new(ParsedSynthStyle$StateInfo, info));
	} else {
		$assign(info, $DefaultSynthStyle$StateInfo::addTo(info));
		$var(ParsedSynthStyle$StateInfo, si, $cast(ParsedSynthStyle$StateInfo, info));
		$set($nc(si), _painterInfo, $ParsedSynthStyle::mergePainterInfo(si->_painterInfo, this->_painterInfo));
	}
	return info;
}

$String* ParsedSynthStyle$StateInfo::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, text, $new($StringBuilder, $($DefaultSynthStyle$StateInfo::toString())));
	text->append(",painters=["_s);
	if (this->_painterInfo != nullptr) {
		for (int32_t i = 0; i < +$nc(this->_painterInfo)->length; ++i) {
			text->append("    "_s)->append($($nc($nc(this->_painterInfo)->get(i))->toString()));
		}
	}
	text->append("]"_s);
	return text->toString();
}

ParsedSynthStyle$StateInfo::ParsedSynthStyle$StateInfo() {
}

$Class* ParsedSynthStyle$StateInfo::load$($String* name, bool initialize) {
	$loadClass(ParsedSynthStyle$StateInfo, name, initialize, &_ParsedSynthStyle$StateInfo_ClassInfo_, allocate$ParsedSynthStyle$StateInfo);
	return class$;
}

$Class* ParsedSynthStyle$StateInfo::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax