#include <sun/swing/plaf/synth/DefaultSynthStyle$StateInfo.h>

#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <sun/swing/plaf/synth/DefaultSynthStyle.h>
#include <jcpp.h>

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Arrays = ::java::util::Arrays;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $DefaultSynthStyle = ::sun::swing::plaf::synth::DefaultSynthStyle;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _DefaultSynthStyle$StateInfo_FieldInfo_[] = {
	{"data", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE, $field(DefaultSynthStyle$StateInfo, data)},
	{"font", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(DefaultSynthStyle$StateInfo, font)},
	{"colors", "[Ljava/awt/Color;", nullptr, $PRIVATE, $field(DefaultSynthStyle$StateInfo, colors)},
	{"state", "I", nullptr, $PRIVATE, $field(DefaultSynthStyle$StateInfo, state)},
	{}
};

$MethodInfo _DefaultSynthStyle$StateInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultSynthStyle$StateInfo::*)()>(&DefaultSynthStyle$StateInfo::init$))},
	{"<init>", "(ILjava/awt/Font;[Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultSynthStyle$StateInfo::*)(int32_t,$Font*,$ColorArray*)>(&DefaultSynthStyle$StateInfo::init$))},
	{"<init>", "(Lsun/swing/plaf/synth/DefaultSynthStyle$StateInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultSynthStyle$StateInfo::*)(DefaultSynthStyle$StateInfo*)>(&DefaultSynthStyle$StateInfo::init$))},
	{"addTo", "(Lsun/swing/plaf/synth/DefaultSynthStyle$StateInfo;)Lsun/swing/plaf/synth/DefaultSynthStyle$StateInfo;", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getColor", "(Ljavax/swing/plaf/synth/ColorType;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getColors", "()[Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getComponentState", "()I", nullptr, $PUBLIC},
	{"getData", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $PUBLIC},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"setColors", "([Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setComponentState", "(I)V", nullptr, $PUBLIC},
	{"setData", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;)V", $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultSynthStyle$StateInfo_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.DefaultSynthStyle$StateInfo", "sun.swing.plaf.synth.DefaultSynthStyle", "StateInfo", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DefaultSynthStyle$StateInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.plaf.synth.DefaultSynthStyle$StateInfo",
	"java.lang.Object",
	nullptr,
	_DefaultSynthStyle$StateInfo_FieldInfo_,
	_DefaultSynthStyle$StateInfo_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultSynthStyle$StateInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.DefaultSynthStyle"
};

$Object* allocate$DefaultSynthStyle$StateInfo($Class* clazz) {
	return $of($alloc(DefaultSynthStyle$StateInfo));
}

void DefaultSynthStyle$StateInfo::init$() {
}

void DefaultSynthStyle$StateInfo::init$(int32_t state, $Font* font, $ColorArray* colors) {
	this->state = state;
	$set(this, font, font);
	$set(this, colors, colors);
}

void DefaultSynthStyle$StateInfo::init$(DefaultSynthStyle$StateInfo* info) {
	this->state = $nc(info)->state;
	$set(this, font, info->font);
	if (info->data != nullptr) {
		if (this->data == nullptr) {
			$set(this, data, $new($HashMap));
		}
		$nc(this->data)->putAll(info->data);
	}
	if (info->colors != nullptr) {
		$set(this, colors, $new($ColorArray, $nc(info->colors)->length));
		$System::arraycopy(info->colors, 0, this->colors, 0, $nc(info->colors)->length);
	}
}

$Map* DefaultSynthStyle$StateInfo::getData() {
	return this->data;
}

void DefaultSynthStyle$StateInfo::setData($Map* data) {
	$set(this, data, data);
}

void DefaultSynthStyle$StateInfo::setFont($Font* font) {
	$set(this, font, font);
}

$Font* DefaultSynthStyle$StateInfo::getFont() {
	return this->font;
}

void DefaultSynthStyle$StateInfo::setColors($ColorArray* colors) {
	$set(this, colors, colors);
}

$ColorArray* DefaultSynthStyle$StateInfo::getColors() {
	return this->colors;
}

$Color* DefaultSynthStyle$StateInfo::getColor($ColorType* type) {
	if (this->colors != nullptr) {
		int32_t id = $nc(type)->getID();
		if (id < $nc(this->colors)->length) {
			return $nc(this->colors)->get(id);
		}
	}
	return nullptr;
}

DefaultSynthStyle$StateInfo* DefaultSynthStyle$StateInfo::addTo(DefaultSynthStyle$StateInfo* info) {
	if (this->font != nullptr) {
		$set($nc(info), font, this->font);
	}
	if (this->data != nullptr) {
		if ($nc(info)->data == nullptr) {
			$set(info, data, $new($HashMap));
		}
		$nc($nc(info)->data)->putAll(this->data);
	}
	if (this->colors != nullptr) {
		if ($nc(info)->colors == nullptr) {
			$set(info, colors, $new($ColorArray, $nc(this->colors)->length));
			$System::arraycopy(this->colors, 0, info->colors, 0, $nc(this->colors)->length);
		} else {
			if ($nc(info->colors)->length < $nc(this->colors)->length) {
				$var($ColorArray, old, info->colors);
				$set(info, colors, $new($ColorArray, $nc(this->colors)->length));
				$System::arraycopy(old, 0, info->colors, 0, $nc(old)->length);
			}
			for (int32_t counter = $nc(this->colors)->length - 1; counter >= 0; --counter) {
				if ($nc(this->colors)->get(counter) != nullptr) {
					$nc(info->colors)->set(counter, $nc(this->colors)->get(counter));
				}
			}
		}
	}
	return info;
}

void DefaultSynthStyle$StateInfo::setComponentState(int32_t state) {
	this->state = state;
}

int32_t DefaultSynthStyle$StateInfo::getComponentState() {
	return this->state;
}

$Object* DefaultSynthStyle$StateInfo::clone() {
	return $of($new(DefaultSynthStyle$StateInfo, this));
}

$String* DefaultSynthStyle$StateInfo::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($Object::toString()))->append(u',');
	sb->append("state="_s)->append($($Integer::toString(this->state)))->append(u',');
	sb->append("font="_s)->append($of(this->font))->append(u',');
	if (this->colors != nullptr) {
		sb->append("colors="_s)->append($($of($Arrays::asList(this->colors))))->append(u',');
	}
	return sb->toString();
}

DefaultSynthStyle$StateInfo::DefaultSynthStyle$StateInfo() {
}

$Class* DefaultSynthStyle$StateInfo::load$($String* name, bool initialize) {
	$loadClass(DefaultSynthStyle$StateInfo, name, initialize, &_DefaultSynthStyle$StateInfo_ClassInfo_, allocate$DefaultSynthStyle$StateInfo);
	return class$;
}

$Class* DefaultSynthStyle$StateInfo::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun