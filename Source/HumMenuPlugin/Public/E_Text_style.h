//Enum
#pragma once

#include "CoreMinimal.h"
#include "E_Text_style.generated.h"

// Enum ��� ������������� � C++ � Blueprints
UENUM(BlueprintType)
enum  E_Text_style : uint8
{
    NoneVal UMETA(DisplayName = "NoneVal"), // �������� ����� ������
    TextBase UMETA(DisplayName = "Text Base"), // �������� ����� ������
    TextTitle UMETA(DisplayName = "Text Title"), // ����� ���������
    TextSmall UMETA(DisplayName = "Text Small")  // ����� ������� ������
};
