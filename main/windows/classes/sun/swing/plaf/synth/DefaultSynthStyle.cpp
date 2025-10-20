#include <sun/swing/plaf/synth/DefaultSynthStyle.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/Insets.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <sun/swing/plaf/synth/DefaultSynthStyle$StateInfo.h>
#include <jcpp.h>

#undef BACKGROUND
#undef ENABLED
#undef FOREGROUND
#undef PENDING
#undef TEXT_BACKGROUND
#undef TEXT_FOREGROUND

using $DefaultSynthStyle$StateInfoArray = $Array<::sun::swing::plaf::synth::DefaultSynthStyle$StateInfo>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $Insets = ::java::awt::Insets;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $JComponent = ::javax::swing::JComponent;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $UIResource = ::javax::swing::plaf::UIResource;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $DefaultSynthStyle$StateInfo = ::sun::swing::plaf::synth::DefaultSynthStyle$StateInfo;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _DefaultSynthStyle_FieldInfo_[] = {
	{"PENDING", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultSynthStyle, PENDING)},
	{"opaque", "Z", nullptr, $PRIVATE, $field(DefaultSynthStyle, opaque)},
	{"insets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(DefaultSynthStyle, insets)},
	{"states", "[Lsun/swing/plaf/synth/DefaultSynthStyle$StateInfo;", nullptr, $PRIVATE, $field(DefaultSynthStyle, states)},
	{"data", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE, $field(DefaultSynthStyle, data)},
	{"font", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(DefaultSynthStyle, font)},
	{"synthGraphics", "Ljavax/swing/plaf/synth/SynthGraphicsUtils;", nullptr, $PRIVATE, $field(DefaultSynthStyle, synthGraphics)},
	{"painter", "Ljavax/swing/plaf/synth/SynthPainter;", nullptr, $PRIVATE, $field(DefaultSynthStyle, painter)},
	{}
};

$MethodInfo _DefaultSynthStyle_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultSynthStyle::*)()>(&DefaultSynthStyle::init$))},
	{"<init>", "(Lsun/swing/plaf/synth/DefaultSynthStyle;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultSynthStyle::*)(DefaultSynthStyle*)>(&DefaultSynthStyle::init$))},
	{"<init>", "(Ljava/awt/Insets;Z[Lsun/swing/plaf/synth/DefaultSynthStyle$StateInfo;Ljava/util/Map;)V", "(Ljava/awt/Insets;Z[Lsun/swing/plaf/synth/DefaultSynthStyle$StateInfo;Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;)V", $PUBLIC, $method(static_cast<void(DefaultSynthStyle::*)($Insets*,bool,$DefaultSynthStyle$StateInfoArray*,$Map*)>(&DefaultSynthStyle::init$))},
	{"addTo", "(Lsun/swing/plaf/synth/DefaultSynthStyle;)Lsun/swing/plaf/synth/DefaultSynthStyle;", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"get", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getColor", "(Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/ColorType;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getColor", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;ILjavax/swing/plaf/synth/ColorType;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getColorForState", "(Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/ColorType;)Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getColorForState", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;ILjavax/swing/plaf/synth/ColorType;)Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getData", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $PUBLIC},
	{"getDefaultValue", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getFont", "(Ljavax/swing/plaf/synth/SynthContext;)Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getFont", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;I)Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getFontForState", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;I)Ljava/awt/Font;", nullptr, $PROTECTED},
	{"getFontForState", "(Ljavax/swing/plaf/synth/SynthContext;)Ljava/awt/Font;", nullptr, $PROTECTED},
	{"getGraphicsUtils", "(Ljavax/swing/plaf/synth/SynthContext;)Ljavax/swing/plaf/synth/SynthGraphicsUtils;", nullptr, $PUBLIC},
	{"getInsets", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getKeyFromData", "(Ljava/util/Map;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;Ljava/lang/Object;)Ljava/lang/Object;", $PRIVATE, $method(static_cast<$Object*(DefaultSynthStyle::*)($Map*,Object$*)>(&DefaultSynthStyle::getKeyFromData))},
	{"getPainter", "(Ljavax/swing/plaf/synth/SynthContext;)Ljavax/swing/plaf/synth/SynthPainter;", nullptr, $PUBLIC},
	{"getStateInfo", "()[Lsun/swing/plaf/synth/DefaultSynthStyle$StateInfo;", nullptr, $PUBLIC},
	{"getStateInfo", "(I)Lsun/swing/plaf/synth/DefaultSynthStyle$StateInfo;", nullptr, $PUBLIC},
	{"isOpaque", "(Ljavax/swing/plaf/synth/SynthContext;)Z", nullptr, $PUBLIC},
	{"setData", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;)V", $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setGraphicsUtils", "(Ljavax/swing/plaf/synth/SynthGraphicsUtils;)V", nullptr, $PUBLIC},
	{"setInsets", "(Ljava/awt/Insets;)V", nullptr, $PUBLIC},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC},
	{"setPainter", "(Ljavax/swing/plaf/synth/SynthPainter;)V", nullptr, $PUBLIC},
	{"setStateInfo", "([Lsun/swing/plaf/synth/DefaultSynthStyle$StateInfo;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultSynthStyle_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.DefaultSynthStyle$StateInfo", "sun.swing.plaf.synth.DefaultSynthStyle", "StateInfo", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DefaultSynthStyle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.plaf.synth.DefaultSynthStyle",
	"javax.swing.plaf.synth.SynthStyle",
	"java.lang.Cloneable",
	_DefaultSynthStyle_FieldInfo_,
	_DefaultSynthStyle_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultSynthStyle_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.DefaultSynthStyle$StateInfo"
};

$Object* allocate$DefaultSynthStyle($Class* clazz) {
	return $of($alloc(DefaultSynthStyle));
}

int32_t DefaultSynthStyle::hashCode() {
	 return this->$SynthStyle::hashCode();
}

bool DefaultSynthStyle::equals(Object$* arg0) {
	 return this->$SynthStyle::equals(arg0);
}

void DefaultSynthStyle::finalize() {
	this->$SynthStyle::finalize();
}

$Object* DefaultSynthStyle::PENDING = nullptr;

void DefaultSynthStyle::init$() {
	$SynthStyle::init$();
}

void DefaultSynthStyle::init$(DefaultSynthStyle* style) {
	$useLocalCurrentObjectStackCache();
	$SynthStyle::init$();
	this->opaque = $nc(style)->opaque;
	if (style->insets != nullptr) {
		$set(this, insets, $new($Insets, $nc(style->insets)->top, $nc(style->insets)->left, $nc(style->insets)->bottom, $nc(style->insets)->right));
	}
	if (style->states != nullptr) {
		$set(this, states, $new($DefaultSynthStyle$StateInfoArray, $nc(style->states)->length));
		for (int32_t counter = $nc(style->states)->length - 1; counter >= 0; --counter) {
			$nc(this->states)->set(counter, $cast($DefaultSynthStyle$StateInfo, $($nc($nc(style->states)->get(counter))->clone())));
		}
	}
	if (style->data != nullptr) {
		$set(this, data, $new($HashMap));
		$nc(this->data)->putAll(style->data);
	}
	$set(this, font, style->font);
	$set(this, synthGraphics, style->synthGraphics);
	$set(this, painter, style->painter);
}

void DefaultSynthStyle::init$($Insets* insets, bool opaque, $DefaultSynthStyle$StateInfoArray* states, $Map* data) {
	$SynthStyle::init$();
	$set(this, insets, insets);
	this->opaque = opaque;
	$set(this, states, states);
	$set(this, data, data);
}

$Color* DefaultSynthStyle::getColor($SynthContext* context, $ColorType* type) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, var$0, $nc(context)->getComponent());
	$var($Region, var$1, context->getRegion());
	return getColor(var$0, var$1, context->getComponentState(), type);
}

$Color* DefaultSynthStyle::getColor($JComponent* c, $Region* id, int32_t state, $ColorType* type) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(id)->isSubregion() && state == $SynthConstants::ENABLED) {
		$init($ColorType);
		if (type == $ColorType::BACKGROUND) {
			return $nc(c)->getBackground();
		} else {
			if (type == $ColorType::FOREGROUND) {
				return $nc(c)->getForeground();
			} else {
				if (type == $ColorType::TEXT_FOREGROUND) {
					$var($Color, color, $nc(c)->getForeground());
					if (!($instanceOf($UIResource, color))) {
						return color;
					}
				}
			}
		}
	}
	$var($Color, color, getColorForState(c, id, state, type));
	if (color == nullptr) {
		$init($ColorType);
		if (type == $ColorType::BACKGROUND || type == $ColorType::TEXT_BACKGROUND) {
			return $nc(c)->getBackground();
		} else {
			if (type == $ColorType::FOREGROUND || type == $ColorType::TEXT_FOREGROUND) {
				return $nc(c)->getForeground();
			}
		}
	}
	return color;
}

$Color* DefaultSynthStyle::getColorForState($SynthContext* context, $ColorType* type) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, var$0, $nc(context)->getComponent());
	$var($Region, var$1, context->getRegion());
	return getColorForState(var$0, var$1, context->getComponentState(), type);
}

$Color* DefaultSynthStyle::getColorForState($JComponent* c, $Region* id, int32_t state, $ColorType* type) {
	$useLocalCurrentObjectStackCache();
	$var($DefaultSynthStyle$StateInfo, si, getStateInfo(state));
	$var($Color, color, nullptr);
	if (si != nullptr && ($assign(color, si->getColor(type))) != nullptr) {
		return color;
	}
	if (si == nullptr || $nc(si)->getComponentState() != 0) {
		$assign(si, getStateInfo(0));
		if (si != nullptr) {
			return si->getColor(type);
		}
	}
	return nullptr;
}

void DefaultSynthStyle::setFont($Font* font) {
	$set(this, font, font);
}

$Font* DefaultSynthStyle::getFont($SynthContext* state) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, var$0, $nc(state)->getComponent());
	$var($Region, var$1, state->getRegion());
	return getFont(var$0, var$1, state->getComponentState());
}

$Font* DefaultSynthStyle::getFont($JComponent* c, $Region* id, int32_t state) {
	if (!$nc(id)->isSubregion() && state == $SynthConstants::ENABLED) {
		return $nc(c)->getFont();
	}
	$var($Font, cFont, $nc(c)->getFont());
	if (cFont != nullptr && !($instanceOf($UIResource, cFont))) {
		return cFont;
	}
	return getFontForState(c, id, state);
}

$Font* DefaultSynthStyle::getFontForState($JComponent* c, $Region* id, int32_t state) {
	$useLocalCurrentObjectStackCache();
	if (c == nullptr) {
		return this->font;
	}
	$var($DefaultSynthStyle$StateInfo, si, getStateInfo(state));
	$var($Font, font, nullptr);
	if (si != nullptr && ($assign(font, si->getFont())) != nullptr) {
		return font;
	}
	if (si == nullptr || $nc(si)->getComponentState() != 0) {
		$assign(si, getStateInfo(0));
		if (si != nullptr && ($assign(font, si->getFont())) != nullptr) {
			return font;
		}
	}
	return this->font;
}

$Font* DefaultSynthStyle::getFontForState($SynthContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, var$0, $nc(context)->getComponent());
	$var($Region, var$1, context->getRegion());
	return getFontForState(var$0, var$1, context->getComponentState());
}

void DefaultSynthStyle::setGraphicsUtils($SynthGraphicsUtils* graphics) {
	$set(this, synthGraphics, graphics);
}

$SynthGraphicsUtils* DefaultSynthStyle::getGraphicsUtils($SynthContext* context) {
	if (this->synthGraphics == nullptr) {
		return $SynthStyle::getGraphicsUtils(context);
	}
	return this->synthGraphics;
}

void DefaultSynthStyle::setInsets($Insets* insets) {
	$set(this, insets, insets);
}

$Insets* DefaultSynthStyle::getInsets($SynthContext* state, $Insets* to$renamed) {
	$var($Insets, to, to$renamed);
	if (to == nullptr) {
		$assign(to, $new($Insets, 0, 0, 0, 0));
	}
	if (this->insets != nullptr) {
		$nc(to)->left = $nc(this->insets)->left;
		to->right = $nc(this->insets)->right;
		to->top = $nc(this->insets)->top;
		to->bottom = $nc(this->insets)->bottom;
	} else {
		$nc(to)->left = (to->right = (to->top = (to->bottom = 0)));
	}
	return to;
}

void DefaultSynthStyle::setPainter($SynthPainter* painter) {
	$set(this, painter, painter);
}

$SynthPainter* DefaultSynthStyle::getPainter($SynthContext* ss) {
	return this->painter;
}

void DefaultSynthStyle::setOpaque(bool opaque) {
	this->opaque = opaque;
}

bool DefaultSynthStyle::isOpaque($SynthContext* ss) {
	return this->opaque;
}

void DefaultSynthStyle::setData($Map* data) {
	$set(this, data, data);
}

$Map* DefaultSynthStyle::getData() {
	return this->data;
}

$Object* DefaultSynthStyle::get($SynthContext* state, Object$* key) {
	$useLocalCurrentObjectStackCache();
	$var($DefaultSynthStyle$StateInfo, si, getStateInfo($nc(state)->getComponentState()));
	bool var$0 = si != nullptr && si->getData() != nullptr;
	if (var$0 && getKeyFromData($(si->getData()), key) != nullptr) {
		return $of(getKeyFromData($(si->getData()), key));
	}
	$assign(si, getStateInfo(0));
	bool var$1 = si != nullptr && si->getData() != nullptr;
	if (var$1 && getKeyFromData($(si->getData()), key) != nullptr) {
		return $of(getKeyFromData($(si->getData()), key));
	}
	if (getKeyFromData(this->data, key) != nullptr) {
		return $of(getKeyFromData(this->data, key));
	}
	return $of(getDefaultValue(state, key));
}

$Object* DefaultSynthStyle::getKeyFromData($Map* stateData, Object$* key) {
	$var($Object, value, nullptr);
	if (stateData != nullptr) {
		$synchronized(stateData) {
			$assign(value, stateData->get(key));
		}
		while ($equals(value, DefaultSynthStyle::PENDING)) {
			$synchronized(stateData) {
				try {
					$of(stateData)->wait();
				} catch ($InterruptedException&) {
					$catch();
				}
				$assign(value, stateData->get(key));
			}
		}
		if ($instanceOf($UIDefaults$LazyValue, value)) {
			$synchronized(stateData) {
				stateData->put(key, DefaultSynthStyle::PENDING);
			}
			$assign(value, $nc(($cast($UIDefaults$LazyValue, value)))->createValue(nullptr));
			$synchronized(stateData) {
				stateData->put(key, value);
				$of(stateData)->notifyAll();
			}
		}
	}
	return $of(value);
}

$Object* DefaultSynthStyle::getDefaultValue($SynthContext* context, Object$* key) {
	return $of($SynthStyle::get(context, key));
}

$Object* DefaultSynthStyle::clone() {
	$useLocalCurrentObjectStackCache();
	$var(DefaultSynthStyle, style, nullptr);
	try {
		$assign(style, $cast(DefaultSynthStyle, $SynthStyle::clone()));
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, cnse, $catch());
		return $of(nullptr);
	}
	if (this->states != nullptr) {
		$set($nc(style), states, $new($DefaultSynthStyle$StateInfoArray, $nc(this->states)->length));
		for (int32_t counter = $nc(this->states)->length - 1; counter >= 0; --counter) {
			$nc(style->states)->set(counter, $cast($DefaultSynthStyle$StateInfo, $($nc($nc(this->states)->get(counter))->clone())));
		}
	}
	if (this->data != nullptr) {
		$set($nc(style), data, $new($HashMap));
		$nc(style->data)->putAll(this->data);
	}
	return $of(style);
}

DefaultSynthStyle* DefaultSynthStyle::addTo(DefaultSynthStyle* style) {
	$useLocalCurrentObjectStackCache();
	if (this->insets != nullptr) {
		$set($nc(style), insets, this->insets);
	}
	if (this->font != nullptr) {
		$set($nc(style), font, this->font);
	}
	if (this->painter != nullptr) {
		$set($nc(style), painter, this->painter);
	}
	if (this->synthGraphics != nullptr) {
		$set($nc(style), synthGraphics, this->synthGraphics);
	}
	$nc(style)->opaque = this->opaque;
	if (this->states != nullptr) {
		if (style->states == nullptr) {
			$set(style, states, $new($DefaultSynthStyle$StateInfoArray, $nc(this->states)->length));
			for (int32_t counter = $nc(this->states)->length - 1; counter >= 0; --counter) {
				if ($nc(this->states)->get(counter) != nullptr) {
					$nc(style->states)->set(counter, $cast($DefaultSynthStyle$StateInfo, $($nc($nc(this->states)->get(counter))->clone())));
				}
			}
		} else {
			int32_t unique = 0;
			int32_t matchCount = 0;
			int32_t maxOStyles = $nc(style->states)->length;
			for (int32_t thisCounter = $nc(this->states)->length - 1; thisCounter >= 0; --thisCounter) {
				int32_t state = $nc($nc(this->states)->get(thisCounter))->getComponentState();
				bool found = false;
				for (int32_t oCounter = maxOStyles - 1 - matchCount; oCounter >= 0; --oCounter) {
					if (state == $nc($nc(style->states)->get(oCounter))->getComponentState()) {
						$nc(style->states)->set(oCounter, $($nc($nc(this->states)->get(thisCounter))->addTo($nc(style->states)->get(oCounter))));
						$var($DefaultSynthStyle$StateInfo, tmp, $nc(style->states)->get(maxOStyles - 1 - matchCount));
						$nc(style->states)->set(maxOStyles - 1 - matchCount, $nc(style->states)->get(oCounter));
						$nc(style->states)->set(oCounter, tmp);
						++matchCount;
						found = true;
						break;
					}
				}
				if (!found) {
					++unique;
				}
			}
			if (unique != 0) {
				$var($DefaultSynthStyle$StateInfoArray, newStates, $new($DefaultSynthStyle$StateInfoArray, unique + maxOStyles));
				int32_t newIndex = maxOStyles;
				$System::arraycopy(style->states, 0, newStates, 0, maxOStyles);
				for (int32_t thisCounter = $nc(this->states)->length - 1; thisCounter >= 0; --thisCounter) {
					int32_t state = $nc($nc(this->states)->get(thisCounter))->getComponentState();
					bool found = false;
					for (int32_t oCounter = maxOStyles - 1; oCounter >= 0; --oCounter) {
						if (state == $nc($nc(style->states)->get(oCounter))->getComponentState()) {
							found = true;
							break;
						}
					}
					if (!found) {
						newStates->set(newIndex++, $cast($DefaultSynthStyle$StateInfo, $($nc($nc(this->states)->get(thisCounter))->clone())));
					}
				}
				$set(style, states, newStates);
			}
		}
	}
	if (this->data != nullptr) {
		if (style->data == nullptr) {
			$set(style, data, $new($HashMap));
		}
		$nc(style->data)->putAll(this->data);
	}
	return style;
}

void DefaultSynthStyle::setStateInfo($DefaultSynthStyle$StateInfoArray* states) {
	$set(this, states, states);
}

$DefaultSynthStyle$StateInfoArray* DefaultSynthStyle::getStateInfo() {
	return this->states;
}

$DefaultSynthStyle$StateInfo* DefaultSynthStyle::getStateInfo(int32_t state) {
	if (this->states != nullptr) {
		int32_t bestCount = 0;
		int32_t bestIndex = -1;
		int32_t wildIndex = -1;
		if (state == 0) {
			for (int32_t counter = $nc(this->states)->length - 1; counter >= 0; --counter) {
				if ($nc($nc(this->states)->get(counter))->getComponentState() == 0) {
					return $nc(this->states)->get(counter);
				}
			}
			return nullptr;
		}
		for (int32_t counter = $nc(this->states)->length - 1; counter >= 0; --counter) {
			int32_t oState = $nc($nc(this->states)->get(counter))->getComponentState();
			if (oState == 0) {
				if (wildIndex == -1) {
					wildIndex = counter;
				}
			} else if (((int32_t)(state & (uint32_t)oState)) == oState) {
				int32_t bitCount = $Integer::bitCount(oState);
				if (bitCount > bestCount) {
					bestIndex = counter;
					bestCount = bitCount;
				}
			}
		}
		if (bestIndex != -1) {
			return $nc(this->states)->get(bestIndex);
		}
		if (wildIndex != -1) {
			return $nc(this->states)->get(wildIndex);
		}
	}
	return nullptr;
}

$String* DefaultSynthStyle::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($SynthStyle::toString()))->append(u',');
	sb->append("data="_s)->append($of(this->data))->append(u',');
	sb->append("font="_s)->append($of(this->font))->append(u',');
	sb->append("insets="_s)->append($of(this->insets))->append(u',');
	sb->append("synthGraphics="_s)->append($of(this->synthGraphics))->append(u',');
	sb->append("painter="_s)->append($of(this->painter))->append(u',');
	$var($DefaultSynthStyle$StateInfoArray, states, getStateInfo());
	if (states != nullptr) {
		sb->append("states["_s);
		{
			$var($DefaultSynthStyle$StateInfoArray, arr$, states);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($DefaultSynthStyle$StateInfo, state, arr$->get(i$));
				{
					sb->append($($nc(state)->toString()))->append(u',');
				}
			}
		}
		sb->append(u']')->append(u',');
	}
	sb->deleteCharAt(sb->length() - 1);
	return sb->toString();
}

void clinit$DefaultSynthStyle($Class* class$) {
	$assignStatic(DefaultSynthStyle::PENDING, $new($Object));
}

DefaultSynthStyle::DefaultSynthStyle() {
}

$Class* DefaultSynthStyle::load$($String* name, bool initialize) {
	$loadClass(DefaultSynthStyle, name, initialize, &_DefaultSynthStyle_ClassInfo_, clinit$DefaultSynthStyle, allocate$DefaultSynthStyle);
	return class$;
}

$Class* DefaultSynthStyle::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun