#include <LogGen.hpp>
#include <sstream>

std::string to_hex(std::string s) {
    std::string hexString;
    std::stringstream ss;
    for (int16_t i = 0; i < s.length(); i++) {
        int asciiCode = int(s.at(i));
        ss << std::hex << asciiCode;
        hexString.append(ss.str());
        ss.str("");
    }
    return hexString;
}

int main() {

    std::string text = "That idiot wrote me again... I can not believe I ended up in this hellhole with him again! This is nonsense! And now to last, I cant go with to the party we had planned because I am stuck in this quarantine again! AGAIN! Oh my god, i am starting to get tired of this place. Working my ass off and for this?? This is the life worth living? I cant wait till we meet up. I dont know how I will survive those days without your positivness... Bye Vee <333";
    const std::string addressee = "Violet Woods A";
    const std::string writer = "Isabella Kaltenbach A";
    std::cout << to_hex(text) << std::endl;
    LogGen lg(text, addressee, writer);
    lg.gen_cm_arr(text);
    lg.encode();

}