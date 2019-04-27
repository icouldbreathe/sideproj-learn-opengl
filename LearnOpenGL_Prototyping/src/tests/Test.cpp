#include <vendor/imgui/imgui/imgui.h>
#include "Test.h"

namespace test {


    TestMenu::TestMenu(Test *&currentTestPointer)
        : m_CurrentTest(currentTestPointer) {

    }

    void TestMenu::OnImGuiRender() {
        ImGui::Text("Load Test:");
        ImGui::Separator();
        for (auto& test : m_Tests) {
            if (ImGui::Selectable(test.first.c_str())) {
                m_CurrentTest = test.second();
            }
        }
    }
}