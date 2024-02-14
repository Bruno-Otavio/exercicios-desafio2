import { StatusBar } from 'expo-status-bar';
import { StyleSheet, Text, View, Image } from 'react-native';

const colors = {
  white: "#D8DEE9",
  black: "#2D3250",
  gray: "#424769",
  lightgray: "#7077A1",
  beige: "#F6B17A",
};

export default function App() {
  return (
    <View style={styles.container}>
      <StatusBar style="auto" />
      <View style={styles.profileContainer}>
        <Image 
          source={{uri: "./assets/milia-rage.png"}}
          style={styles.image}
        />
        <Text style={styles.title}><h1>Bruno Otávio</h1></Text>
      </View>
      <View style={styles.profileContainer}>
        <Text style={styles.title}><h2>Dados</h2></Text>
        <Text style={styles.paragraph}>
          <p>Morador da cidade de Pedreira</p>
          <p>Capaz de diversas habilidadas</p>
        </Text>
      </View>
      <View style={styles.profileContainer}>
        <Text style={styles.title}><h2>Formação</h2></Text>
        <View>
          <Text style={styles.paragraph}>
            Curso Técnico de Desenvolvimento de Sistemas - SENAI 
          </Text>
        </View>
      </View>
      <View style={styles.profileContainer}>
        <Text style={styles.title}><h3>GitHub</h3></Text>
        <Text>
          <a style={{color: colors.white}} href="https://github.com/Bruno-Otavio">Bruno-Otavio</a>
        </Text>
      </View>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: colors.gray,
    alignItems: 'center',
    justifyContent: 'center',
  },
  profileContainer: {
    backgroundColor: colors.black,
    borderRadius: 25,
    marginTop: 15,
    marginBottom: 15,
    padding: 40,
  },
  image: {
    width: 200,
    height: 200,

    borderRadius: 100,
    borderWidth: 2,
    borderColor: colors.beige,
  },
  title: {
    color: colors.beige,
    marginRight: "auto",
    marginLeft: "auto",
  },
  paragraph: {
    color: colors.white,
    fontSize: 15,
  }
});
