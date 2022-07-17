pipeline {
       agent {
              label 'tomcat-slave'
}
    stages {
			stage('Git checkout') {
             steps {
    git 'https://github.com/prem-opqtech/java_repo1.git'
	}
}
            stage('Build stage') {
             steps {
	sh 'mvn clean install'}
}
            stage('Push to Artifactory') {
             steps {
		           sleep 15}
	}
            stage('Deploy') {
             steps { sh '''sudo cp /home/ec2-user/jenkins-slave1/workspace/cicd1/target/*.war /opt/apache-tomcat-9.0.64/webapps
'''
	}
}	


    }
}
