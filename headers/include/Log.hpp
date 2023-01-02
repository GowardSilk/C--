#ifndef LOG_HPP
#define LOG_HPP

#include "DeepMain.hpp"

namespace wrd {

    enum class TXT {
        JNR_2_2049,
        FBR_20_2049,
        APRL_16_2049,
        APRL_25_2049,
        M_1_2049,
        M_17_2049,
        M_23_2049,
    };

    class Log {
        private:
            //member data
            CodeMatrix m_letter_map;
            wString m_addressee;
            wString m_sender;
            wString m_text;
            //!member data
        public:
            //constructors
            //  default
            Log() = default;
            //constructor
            //  LogGen
            Log(std::vector<symbol> cm, wString adrs, wString wrtr, wString text)
                : m_letter_map(cm),
                  m_addressee(adrs),
                  m_sender(wrtr),
                  m_text(text)
            {}
            //destructor
            ~Log() {}
            //get functions
            CodeMatrix getCodeMatrix() {
                return this->m_letter_map;   
            }
            wString getAddressee() {
                return this->m_addressee;
            }
            wString getSender() {
                return this->m_sender;
            }
            wString getText() {
                return this->m_text;
            }
            //!get functions
            //set functions
            void setText(wString& text) {
                this->m_text = text;
            }
            //!set functions
    };
}

#endif //!LOG_HPP