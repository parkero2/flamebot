const int Lsp = 0;
const int LF = 0;
const int LB = 0;
const int Rsp = 0;
const int RF = 0;
const int RB = 0;

const int[6] e = {Lsp, LF, LB, Rsp, RF, RB};

void setup() {
    for (int i = 0; i < e.length; i++) {
        pinMode(e[i], OUTPUT);
    }
    digitalWrite(6, HIGH)
}

void loop() {
    
}